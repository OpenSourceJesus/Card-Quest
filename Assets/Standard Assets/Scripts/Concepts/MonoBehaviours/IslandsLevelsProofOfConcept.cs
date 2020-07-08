using UnityEngine;
using Extensions;
using System.Collections.Generic;
using System;

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
		public int levelEntryRepeatCount = 1;
		IslandsLevel[] islandsLevels = new IslandsLevel[0];
		int currentLevelIndex;

		void Awake ()
		{
			Rect islandsLevelBoundsRect;
			Rect previousIslandsLevelBoundsRect = RectExtensions.NULL;
			Vector2 previousIslandsLevelPosition = VectorExtensions.NULL;
			List<Rect> islandsLevelBoundsRects = new List<Rect>();
			islandsLevels = new IslandsLevel[islandsLevelEntries.Length * levelEntryRepeatCount];
			foreach (IslandsLevelEntry islandsLevelEntry in islandsLevelEntries)
			{
				for (int i = 0; i < levelEntryRepeatCount; i ++)
				{
					IslandsLevel islandsLevel = islandsLevelEntry.MakeLevel();
					List<Rect> cardSlotRects = new List<Rect>();
					foreach (CardGroup cardGroup in islandsLevel.cardGroups)
					{
						Island island = (Island) cardGroup;
						foreach (CardSlot cardSlot in island.cardSlots)
							cardSlotRects.Add(cardSlot.spriteRenderer.bounds.ToRect());
					}
					islandsLevelBoundsRect = RectExtensions.Combine(cardSlotRects.ToArray());
					if (previousIslandsLevelPosition != (Vector2) VectorExtensions.NULL)
						islandsLevel.trs.position = previousIslandsLevelPosition + (Vector2.right * (previousIslandsLevelBoundsRect.size.x / 2 + islandsLevelBoundsRect.size.x / 2 + levelSeperation));
					previousIslandsLevelBoundsRect = islandsLevelBoundsRect;
					previousIslandsLevelPosition = islandsLevel.trs.position;
					islandsLevelBoundsRects.Add(islandsLevelBoundsRect);
					Transform levelArea = Instantiate(levelAreaPrefab, islandsLevel.trs.position + (Vector3) islandsLevelBoundsRect.center, default(Quaternion));
					levelArea.localScale = islandsLevelBoundsRect.size;
					// islandsLevelEntry.cardSlotBorderWidth ++;
					islandsLevels[currentLevelIndex] = islandsLevel;
					currentLevelIndex ++;
				}
			}
			ShowAllLevels ();
			currentLevelIndex = 0;
			GameManager.updatables = GameManager.updatables.Add(this);
		}

		public virtual void DoUpdate ()
		{
			if (Input.GetKeyDown(KeyCode.R))
				GameManager.GetSingleton<GameManager>().ReloadActiveScene ();
			else if (Input.GetKeyDown(KeyCode.LeftArrow))
			{
				currentLevelIndex --;
				if (currentLevelIndex == -1)
					currentLevelIndex = islandsLevels.Length - 1;
				GoToLevel (islandsLevels[currentLevelIndex]);
			}
			else if (Input.GetKeyDown(KeyCode.RightArrow))
			{
				currentLevelIndex ++;
				if (currentLevelIndex == islandsLevels.Length)
					currentLevelIndex = 0;
				GoToLevel (islandsLevels[currentLevelIndex]);
			}
			else if (Input.GetKeyDown(KeyCode.UpArrow))
				ShowAllLevels ();
			else if (Input.GetKeyDown(KeyCode.DownArrow))
				GoToLevel (islandsLevels[currentLevelIndex]);
		}

		void ShowAllLevels ()
		{
			CardSlot[] cardSlots = FindObjectsOfType<CardSlot>();
			List<Rect> cardSlotRects = new List<Rect>();
			foreach (CardSlot cardSlot in cardSlots)
				cardSlotRects.Add(cardSlot.spriteRenderer.bounds.ToRect());
			GameManager.GetSingleton<CameraScript>().viewRect = RectExtensions.Combine(cardSlotRects.ToArray());
			GameManager.GetSingleton<CameraScript>().trs.position = GameManager.GetSingleton<CameraScript>().viewRect.center.SetZ(GameManager.GetSingleton<CameraScript>().trs.position.z);
			GameManager.GetSingleton<CameraScript>().viewSize = GameManager.GetSingleton<CameraScript>().viewRect.size;
			GameManager.GetSingleton<CameraScript>().HandleViewSize ();
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
			GameManager.GetSingleton<CameraScript>().viewRect = RectExtensions.Combine(cardSlotRects.ToArray());
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
			public int levelNumber;
			public int cardCount = 6;
			public int cardTypeCount = 1;
			public int cardSlotBorderWidth = 1;
			public int islandCount = 2;
			public int moveCount = 1;

			public virtual IslandsLevel MakeLevel ()
			{
				IslandsLevel.currentTry = 0;
				return IslandsLevel.MakeLevel(cardCount, cardTypeCount, cardSlotBorderWidth, islandCount, moveCount);
			}
		}
	}
}