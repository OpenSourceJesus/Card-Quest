using UnityEngine;
using Extensions;
using System.Collections.Generic;
using System;
using System.Collections;
using UnityEngine.UI;

namespace MatchingCardGame
{
	public class IslandsLevelsProofOfConcept : MonoBehaviour, IUpdatable
	{
		public bool PauseWhileUnfocused
		{
			get
			{
				return true;
			}
		}
		public IslandsLevelEntry[] islandsLevelEntries = new IslandsLevelEntry[0];
		public Transform levelAreaPrefab;
		public float levelSeperation;
		public Button nextLevelButton;
		IslandsLevel[] islandsLevels = new IslandsLevel[0];
		int currentLevelIndex = -1;
		Rect previousIslandsLevelBoundsRect = RectExtensions.NULL;
		Vector2 previousIslandsLevelPosition = VectorExtensions.NULL;
		int latestLevelIndex = 0;
		int lastCompletedLevel = -1;

		IEnumerator Start ()
		{
			// Rect islandsLevelBoundsRect;
			// Rect previousIslandsLevelBoundsRect = RectExtensions.NULL;
			// Vector2 previousIslandsLevelPosition = VectorExtensions.NULL;
			// List<Rect> islandsLevelBoundsRects = new List<Rect>();
			// islandsLevels = new IslandsLevel[islandsLevelEntries.Length];
			// foreach (IslandsLevelEntry islandsLevelEntry in islandsLevelEntries)
			// {
			// 	IslandsLevel islandsLevel;
			// 	do
			// 	{
			// 		islandsLevel = islandsLevelEntry.MakeLevel();
			// 	} while (islandsLevel == null);
			// 	List<Rect> cardSlotRects = new List<Rect>();
			// 	foreach (CardGroup cardGroup in islandsLevel.cardGroups)
			// 	{
			// 		Island island = (Island) cardGroup;
			// 		foreach (CardSlot cardSlot in island.cardSlots)
			// 			cardSlotRects.Add(cardSlot.spriteRenderer.bounds.ToRect());
			// 	}
			// 	islandsLevelBoundsRect = RectExtensions.Combine(cardSlotRects.ToArray());
			// 	if (previousIslandsLevelPosition != (Vector2) VectorExtensions.NULL)
			// 		islandsLevel.trs.position = previousIslandsLevelPosition + (Vector2.right * (previousIslandsLevelBoundsRect.size.x / 2 + islandsLevelBoundsRect.size.x / 2 + levelSeperation));
			// 	previousIslandsLevelBoundsRect = islandsLevelBoundsRect;
			// 	previousIslandsLevelPosition = islandsLevel.trs.position;
			// 	islandsLevelBoundsRects.Add(islandsLevelBoundsRect);
			// 	Transform levelArea = Instantiate(levelAreaPrefab, islandsLevel.trs.position + (Vector3) islandsLevelBoundsRect.center, default(Quaternion));
			// 	levelArea.localScale = islandsLevelBoundsRect.size;
			// 	islandsLevels[currentLevelIndex] = islandsLevel;
			// 	currentLevelIndex ++;
			// }
			// ShowAllLevels ();
			// currentLevelIndex = 0;
			// for (int i = 0; i < islandsLevelEntries.Length; i ++)
			// {
			// 	IslandsLevelEntry islandsLevelEntry = islandsLevelEntries[i];
			// 	if (islandsLevelEntry.name.Contains("Urban"))
			// 		islandsLevelEntry.moveCount -= 5;
			// 	else if (islandsLevelEntry.name.Contains("Desert"))
			// 		islandsLevelEntry.moveCount -= 10;
			// 	else if (islandsLevelEntry.name.Contains("Fortress"))
			// 		islandsLevelEntry.moveCount -= 15;
			// 	islandsLevelEntries[i] = islandsLevelEntry;
			// }
			islandsLevels = new IslandsLevel[islandsLevelEntries.Length];
			yield return StartCoroutine(MakeNextLevelRoutine (islandsLevelEntries[0]));
			GoToNextLevel ();
			StartCoroutine(MakeLevelsRoutine ());
			GameManager.updatables = GameManager.updatables.Add(this);
		}

		public void DoUpdate ()
		{
			if (Input.GetKeyDown(KeyCode.R))
				GameManager.GetSingleton<GameManager>().ReloadActiveScene ();
			else if (Input.GetKeyDown(KeyCode.LeftArrow))
			{
				currentLevelIndex --;
				if (currentLevelIndex == -1)
					currentLevelIndex = lastCompletedLevel;
				GoToLevel (islandsLevels[currentLevelIndex]);
			}
			else if (Input.GetKeyDown(KeyCode.RightArrow))
			{
				currentLevelIndex ++;
				if (currentLevelIndex >= lastCompletedLevel)
					currentLevelIndex = 0;
				GoToLevel (islandsLevels[currentLevelIndex]);
			}
			else if (Input.GetKeyDown(KeyCode.UpArrow))
				ShowAllLevels ();
			else if (Input.GetKeyDown(KeyCode.DownArrow))
				GoToLevel (islandsLevels[currentLevelIndex]);
		}

		public void GoToNextLevel ()
		{
			if (currentLevelIndex == lastCompletedLevel)
				lastCompletedLevel ++;
			if (latestLevelIndex == lastCompletedLevel)
				nextLevelButton.interactable = false;
			if (currentLevelIndex != -1)
				islandsLevels[currentLevelIndex].enabled = false;
			currentLevelIndex = lastCompletedLevel;
			GoToLevel (islandsLevels[currentLevelIndex]);
		}

		IEnumerator MakeLevelsRoutine ()
		{
			for (int i = 1; i < islandsLevelEntries.Length; i ++)
				yield return StartCoroutine(MakeNextLevelRoutine (islandsLevelEntries[i]));
		}

		IEnumerator MakeNextLevelRoutine (IslandsLevelEntry islandsLevelEntry)
		{
			Rect islandsLevelBoundsRect;
			List<Rect> islandsLevelBoundsRects = new List<Rect>();
			IslandsLevel islandsLevel;
			do
			{
				islandsLevel = islandsLevelEntry.MakeLevel();
				if (islandsLevel != null)
				{
					islandsLevels[latestLevelIndex] = islandsLevel;
					if (HasEquivalentLevel(latestLevelIndex))
						DestroyImmediate(islandsLevel.gameObject);
				}
				yield return new WaitForEndOfFrame();
			} while (islandsLevel == null);
			List<Rect> cardSlotRects = new List<Rect>();
			foreach (CardGroup cardGroup in islandsLevel.cardGroups)
			{
				Island island = (Island) cardGroup;
				foreach (Card card in island.cards)
					card.gameObject.layer = 0;
				foreach (CardSlot cardSlot in island.cardSlots)
				{
					cardSlot.gameObject.layer = 0;
					cardSlotRects.Add(cardSlot.spriteRenderer.bounds.ToRect());
				}
			}
			islandsLevelBoundsRect = RectExtensions.Combine(cardSlotRects.ToArray());
			if (previousIslandsLevelPosition != (Vector2) VectorExtensions.NULL)
				islandsLevel.trs.position = previousIslandsLevelPosition + (Vector2.right * (previousIslandsLevelBoundsRect.size.x / 2 + islandsLevelBoundsRect.size.x / 2 + levelSeperation));
			previousIslandsLevelBoundsRect = islandsLevelBoundsRect;
			previousIslandsLevelPosition = islandsLevel.trs.position;
			islandsLevelBoundsRects.Add(islandsLevelBoundsRect);
			Transform levelArea = Instantiate(levelAreaPrefab, islandsLevel.trs.position + (Vector3) islandsLevelBoundsRect.center, default(Quaternion));
			levelArea.localScale = islandsLevelBoundsRect.size;
			latestLevelIndex ++;
			nextLevelButton.interactable = true;
		}

		bool HasEquivalentLevel (int levelIndex)
		{
			IslandsLevel level = islandsLevels[levelIndex];
			for (int i = 0; i < latestLevelIndex; i ++)
			{
				if (i != levelIndex)
				{
					IslandsLevel otherLevel = islandsLevels[i];
					if (level.IsEquivalent(otherLevel))
						return true;
				}
			}
			return false;
		}

		void ShowAllLevels ()
		{
			CardSlot[] cardSlots = FindObjectsOfType<CardSlot>();
			List<Rect> cardSlotRects = new List<Rect>();
			foreach (CardSlot cardSlot in cardSlots)
				cardSlotRects.Add(cardSlot.spriteRenderer.bounds.ToRect());
			SetViewRect (RectExtensions.Combine(cardSlotRects.ToArray()));
		}

		void GoToLevel (IslandsLevel level)
		{
			List<Rect> cardSlotRects = new List<Rect>();
			foreach (CardGroup cardGroup in level.cardGroups)
			{
				Island island = (Island) cardGroup;
				foreach (CardSlot cardSlot in island.cardSlots)
					cardSlotRects.Add(cardSlot.spriteRenderer.bounds.ToRect());
			}
			SetViewRect (RectExtensions.Combine(cardSlotRects.ToArray()));
		}

		void SetViewRect (Rect rect)
		{
			GameManager.GetSingleton<CameraScript>().viewRect = rect;
			GameManager.GetSingleton<CameraScript>().trs.position = GameManager.GetSingleton<CameraScript>().viewRect.center.SetZ(GameManager.GetSingleton<CameraScript>().trs.position.z);
			GameManager.GetSingleton<CameraScript>().viewSize = GameManager.GetSingleton<CameraScript>().viewRect.size;
			GameManager.GetSingleton<CameraScript>().HandleViewSize ();
		}

		void OnDestroy ()
		{
			GameManager.updatables = GameManager.updatables.Remove(this);
		}

		[Serializable]
		public class IslandsLevelEntry
		{
			public string name;
			public Vector2Int dimensions;
			public int cardCount = 6;
			public int cardTypeCount = 1;
			public int islandCount = 2;
			public int moveCount = 1;

			public virtual IslandsLevel MakeLevel ()
			{
				// IslandsLevel.currentTry = 0;
				return IslandsLevel.MakeLevel(dimensions, cardCount, cardTypeCount, islandCount, moveCount);
			}
		}
	}
}