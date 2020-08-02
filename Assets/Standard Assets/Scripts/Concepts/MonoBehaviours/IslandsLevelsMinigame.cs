using UnityEngine;
using Extensions;
using System.Collections.Generic;
using System.Collections;
using UnityEngine.UI;
using IslandsLevelEntry = MatchingCardGame.IslandsLevelsData.IslandsLevelEntry;
using IslandsLevelZone = MatchingCardGame.IslandsLevelsData.IslandsLevelZone;

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
		public static int startingLevelIndex = 0;
		public static int zoneEndLevelIndex = 10;
#if UNITY_EDITOR
		public bool update;
#endif
		public IslandsLevelsData islandsLevelsData;
		public float levelSeperation;
		public Button nextLevelButton;
		public _Text levelNameText;
		public _Text timeText;
		public _Text movesText;
		public Image backgroundImage;
		public GameObject[] statusMenuStarIconGos = new GameObject[0];
		public GameObject[] nextLevelScreenStarIconGos = new GameObject[0];
		[HideInInspector]
		protected int currentLevelIndex = -1;
		[HideInInspector]
		protected int latestLevelIndex = 0;
		[HideInInspector]
		protected int lastCompletedLevel = -1;
		[HideInInspector]
		protected IslandsLevel[] islandsLevels = new IslandsLevel[0];
		bool isOverParTime;
		bool isOverMoveCount;
		Rect previousIslandsLevelBoundsRect = RectExtensions.NULL;
		Vector2 previousIslandsLevelPosition = VectorExtensions.NULL;
		float levelStartTime;
		float levelTime;
		IslandsLevelEntry currentLevelEntry;
		IslandsLevel currentLevel;
		int moveCount;
		int indexOfNextStarToLose;
		
		void OnEnable ()
		{
#if UNITY_EDITOR
			if (!Application.isPlaying && update)
			{
				List<IslandsLevelEntry> _islandsLevelEntries = new List<IslandsLevelEntry>();
				foreach (IslandsLevelZone levelZone in islandsLevelsData.levelZones)
				{
					if (levelZone.firstLevelEntry.islandOrientationColliders.Length > 0)
					{
						levelZone.firstLevelEntry.islandRects = new Rect[levelZone.firstLevelEntry.islandOrientationColliders.Length];
						for (int i = 0; i < levelZone.firstLevelEntry.islandOrientationColliders.Length; i ++)
							levelZone.firstLevelEntry.islandRects[i] = levelZone.firstLevelEntry.islandOrientationColliders[i].GetRect();
						levelZone.firstLevelEntry.islandOrientationColliders = new BoxCollider2D[0];
					}
					for (int levelIndex = 0; levelIndex < levelZone.levelCount; levelIndex ++)
					{
						IslandsLevelEntry islandsLevelEntry = new IslandsLevelEntry(levelZone.firstLevelEntry);
						islandsLevelEntry.moveCount += levelIndex;
						islandsLevelEntry.name += " " + (levelIndex + 1);
						_islandsLevelEntries.Add(islandsLevelEntry);
					}
				}
				islandsLevelsData.islandsLevelEntries = _islandsLevelEntries.ToArray();
				return;
			}
#endif
			GameManager.updatables = GameManager.updatables.Add(this);
		}

		public virtual IEnumerator Start ()
		{
#if UNITY_EDITOR
			if (!Application.isPlaying)
				yield break;
#endif
			islandsLevels = new IslandsLevel[islandsLevelsData.islandsLevelEntries.Length];
			currentLevelIndex = startingLevelIndex - 1;
			lastCompletedLevel = startingLevelIndex - 1;
			latestLevelIndex = startingLevelIndex;
			yield return StartCoroutine(MakeNextLevelRoutine (islandsLevelsData.islandsLevelEntries[startingLevelIndex]));
			GoToNextLevel ();
			StartCoroutine(MakeLevelsRoutine ());
		}

		public void DoUpdate ()
		{
			levelTime = Time.timeSinceLevelLoad - levelStartTime;
			if (currentLevelEntry == null)
				return;
			timeText.text.text = levelTime.ToString("F1") + " / " + (currentLevelEntry.timePerMove * currentLevel.movesRequiredToWin).ToString("F1");
			if (!isOverParTime && levelTime > currentLevelEntry.timePerMove * currentLevelEntry.moveCount)
			{
				isOverParTime = true;
				statusMenuStarIconGos[indexOfNextStarToLose].SetActive(false);
				nextLevelScreenStarIconGos[indexOfNextStarToLose].SetActive(false);
				indexOfNextStarToLose ++;
			}
		}

		IEnumerator MakeLevelsRoutine ()
		{
			for (int i = startingLevelIndex + 1; i < zoneEndLevelIndex; i ++)
				yield return StartCoroutine(MakeNextLevelRoutine (islandsLevelsData.islandsLevelEntries[i]));
		}

		IEnumerator MakeNextLevelRoutine (IslandsLevelEntry islandsLevelEntry)
		{
			Rect islandsLevelBoundsRect;
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
			islandsLevel.name = islandsLevelEntry.name;
			latestLevelIndex ++;
			nextLevelButton.interactable = true;
		}

		bool HasEquivalentLevel (int levelIndex)
		{
			IslandsLevel level = islandsLevels[levelIndex];
			for (int i = startingLevelIndex; i < latestLevelIndex; i ++)
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

		public virtual void GoToNextLevel ()
		{
			if (currentLevelIndex == zoneEndLevelIndex - 1)
			{
				currentLevel = islandsLevels[currentLevelIndex];
				string zoneName = currentLevel.name.Remove(currentLevel.name.IndexOf(" "));
				if (!GameManager.completedZoneNames.Contains(zoneName))
					GameManager.completedZoneNames.Add(zoneName);
				GameManager.GetSingleton<GameManager>().LoadScene ("World");
				return;
			}
			if (currentLevelIndex == lastCompletedLevel)
				lastCompletedLevel ++;
			if (latestLevelIndex == lastCompletedLevel)
				nextLevelButton.interactable = false;
			if (currentLevelIndex >= startingLevelIndex)
				islandsLevels[currentLevelIndex].enabled = false;
			currentLevelIndex = lastCompletedLevel;
			GoToLevel (currentLevelIndex);
		}

		protected void GoToLevel (int levelIndex)
		{
			currentLevel = islandsLevels[levelIndex];
			currentLevel.enabled = true;
			currentLevelEntry = islandsLevelsData.islandsLevelEntries[levelIndex];
			backgroundImage.sprite = currentLevelEntry.backgroundSprite;
			backgroundImage.enabled = true;
			movesText.text.text = "0 / " + currentLevel.movesRequiredToWin;
			levelNameText.text.text = currentLevel.name;
			foreach (CardGroup cardGroup in currentLevel.cardGroups)
			{
				Island island = (Island) cardGroup;
				foreach (CardSlot cardSlot in island.cardSlots)
					cardSlot.collider.isTrigger = false;
				foreach (Card card in island.cards)
					card.collider.isTrigger = false;
			}
			foreach (GameObject starIconGo in statusMenuStarIconGos)
				starIconGo.SetActive(true);
			foreach (GameObject starIconGo in nextLevelScreenStarIconGos)
				starIconGo.SetActive(true);
			ShowLevel (currentLevel, currentLevelEntry);
			levelStartTime = Time.timeSinceLevelLoad;
			enabled = true;
		}

		void ShowLevel (int levelIndex)
		{
			ShowLevel (islandsLevels[levelIndex], islandsLevelsData.islandsLevelEntries[levelIndex]);
		}

		void ShowLevel (IslandsLevel islandsLevel, IslandsLevelEntry islandsLevelEntry)
		{
			List<Rect> cardSlotRects = new List<Rect>();
			foreach (CardGroup cardGroup in islandsLevel.cardGroups)
			{
				Island island = (Island) cardGroup;
				foreach (CardSlot cardSlot in island.cardSlots)
					cardSlotRects.Add(cardSlot.spriteRenderer.bounds.ToRect());
			}
			Rect viewRect = RectExtensions.Combine(cardSlotRects.ToArray());
			GameManager.GetSingleton<CameraScript>().trs.position = (viewRect.center + islandsLevelEntry.cameraOffset).SetZ(GameManager.GetSingleton<CameraScript>().trs.position.z);
		}

		void OnDisable ()
		{
			GameManager.updatables = GameManager.updatables.Remove(this);
		}

		public void OnLevelComplete (IslandsLevel level)
		{
			enabled = false;
			int stars = 1;
			IslandsLevelEntry levelEntry = null;
			for (int i = 0; i < islandsLevelsData.islandsLevelEntries.Length; i ++)
			{
				levelEntry = islandsLevelsData.islandsLevelEntries[i];
				if (levelEntry.name == level.name)
					break;
			}
			if (levelTime <= levelEntry.timePerMove * level.movesRequiredToWin)
				stars ++;
			if (moveCount <= level.movesRequiredToWin)
				stars ++;
			int previousStars = GetLevelStars(level.name);
			if (stars > previousStars)
			{
				GameManager.stars += stars - previousStars;
				SetLevelStars (level.name, stars);
			}
			SetLevelCompleted (level.name, true);
			nextLevelButton.gameObject.SetActive(true);
		}

		public void Restart ()
		{
			startingLevelIndex = currentLevelIndex;
			GameManager.GetSingleton<GameManager>().ReloadActiveScene ();
		}

		public void OnMoveMade ()
		{
			moveCount ++;
			movesText.text.text = "" + moveCount + " / " + currentLevel.movesRequiredToWin;
			if (!isOverMoveCount && moveCount > currentLevelEntry.moveCount)
			{
				isOverMoveCount = true;
				statusMenuStarIconGos[indexOfNextStarToLose].SetActive(false);
				nextLevelScreenStarIconGos[indexOfNextStarToLose].SetActive(false);
				indexOfNextStarToLose ++;
			}
		}

		public static bool GetLevelCompleted (string levelName)
		{
			return PlayerPrefs.GetInt(levelName + " completed", 0) == 1;
		}

		public static void SetLevelCompleted (string levelName, bool completed)
		{
			PlayerPrefs.SetInt(levelName + " completed", completed.GetHashCode());
		}

		public static int GetLevelStars (string levelName)
		{
			return PlayerPrefs.GetInt(levelName + " stars", 0);
		}

		public static void SetLevelStars (string levelName, int stars)
		{
			PlayerPrefs.SetInt(levelName + " stars", stars);
		}
	}
}