using UnityEngine;
using Extensions;
using System.Collections.Generic;
using System;
using System.Collections;
using UnityEngine.UI;

namespace MatchingCardGame
{
	[ExecuteInEditMode]
	public class IslandsLevelsMinigame : MonoBehaviour, IUpdatable
	{
		public bool PauseWhileUnfocused
		{
			get
			{
				return true;
			}
		}
		public IslandsLevelZone[] levelZones = new IslandsLevelZone[0];
		public IslandsLevelEntry[] islandsLevelEntries = new IslandsLevelEntry[0];
		public Transform levelAreaPrefab;
		public float levelSeperation;
		public Button nextLevelButton;
		public _Text movesText;
		public _Text levelNameText;
		IslandsLevel[] islandsLevels = new IslandsLevel[0];
		int currentLevelIndex = -1;
		Rect previousIslandsLevelBoundsRect = RectExtensions.NULL;
		Vector2 previousIslandsLevelPosition = VectorExtensions.NULL;
		int latestLevelIndex = 0;
		int lastCompletedLevel = -1;
		public Image backgroundImage;

#if UNITY_EDITOR
		void OnEnable ()
		{
			if (Application.isPlaying)
				return;
			List<IslandsLevelEntry> _islandsLevelEntries = new List<IslandsLevelEntry>();
			foreach (IslandsLevelZone levelZone in levelZones)
			{
				for (int levelIndex = 0; levelIndex < levelZone.levelCount; levelIndex ++)
				{
					IslandsLevelEntry islandsLevelEntry = new IslandsLevelEntry(levelZone.firstLevelEntry);
					islandsLevelEntry.moveCount += levelIndex;
					islandsLevelEntry.name += " " + (levelIndex + 1);
					_islandsLevelEntries.Add(islandsLevelEntry);
				}
			}
			islandsLevelEntries = _islandsLevelEntries.ToArray();
		}
#endif

		IEnumerator Start ()
		{
#if UNITY_EDITOR
			if (!Application.isPlaying)
				yield break;
#endif
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
				GoToLevel (currentLevelIndex);
			}
			else if (Input.GetKeyDown(KeyCode.RightArrow))
			{
				currentLevelIndex ++;
				if (currentLevelIndex >= lastCompletedLevel)
					currentLevelIndex = 0;
				GoToLevel (currentLevelIndex);
			}
			else if (Input.GetKeyDown(KeyCode.UpArrow))
				ShowAllLevels ();
			else if (Input.GetKeyDown(KeyCode.DownArrow))
				GoToLevel (currentLevelIndex);
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
			movesText.text.text = "Moves Taken: 0"; 
			GoToLevel (currentLevelIndex);
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
			islandsLevel.name = islandsLevelEntry.name;
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
			backgroundImage.enabled = false;
		}

		void GoToLevel (int levelIndex)
		{
			IslandsLevel level = islandsLevels[levelIndex];
			level.enabled = true;
			IslandsLevelEntry levelEntry = islandsLevelEntries[levelIndex];
			backgroundImage.sprite = levelEntry.backgroundSprite;
			backgroundImage.enabled = true;
			levelNameText.text.text = level.name;
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
			public IslandsLevel.CardModifierEntry[] cardModifierEntries = new IslandsLevel.CardModifierEntry[0];
			public Sprite backgroundSprite;
			public BoxCollider2D[] islandOrientationColliders = new BoxCollider2D[0];

			public IslandsLevelEntry (IslandsLevelEntry islandsLevelEntry)
			{
				name = islandsLevelEntry.name;
				dimensions = islandsLevelEntry.dimensions;
				cardCount = islandsLevelEntry.cardCount;
				cardTypeCount = islandsLevelEntry.cardTypeCount;
				moveCount = islandsLevelEntry.moveCount;
				backgroundSprite = islandsLevelEntry.backgroundSprite;
				islandOrientationColliders = islandsLevelEntry.islandOrientationColliders;
				islandsLevelEntry.cardModifierEntries.CopyTo(cardModifierEntries, 0);
			}

			public IslandsLevel MakeLevel ()
			{
				IslandsLevel level = IslandsLevel.MakeLevel(dimensions, cardCount, cardTypeCount, islandCount, moveCount, cardModifierEntries);
				if (level != null)
				{
					level.enabled = false;
					for (int i = 0; i < level.cardGroups.Length; i ++)
					{
						CardGroup cardGroup = level.cardGroups[i];
						Island island = (Island) cardGroup;
						Collider2D islandOrientationCollider = islandOrientationColliders[i]; 
						Vector2 islandSize = islandOrientationCollider.GetSize().Divide(dimensions.Multiply(IslandsLevel.cardSize));
						if (islandSize.x > islandSize.y)
							islandSize.x = islandSize.y;
						else
							islandSize.y = islandSize.x;
						Vector2 islandPosition = islandOrientationCollider.GetCenter() - islandSize / 2;
						island.trs.position = islandPosition;
						island.trs.localScale = islandSize;
						level.selectedCardIndicatorTrs.localScale = islandSize;
						level.highlightedCardIndicatorTrs.localScale = islandSize;
					}
				}
				return level;
			}
		}

		[Serializable]
		public class IslandsLevelZone
		{
			public IslandsLevelEntry firstLevelEntry;
			public int levelCount = 10;
		}
	}
}