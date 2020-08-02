using UnityEngine;
using Extensions;
using System.Collections.Generic;
using System.Collections;
using UnityEngine.UI;
using IslandsLevelEntry = MatchingCardGame.IslandsLevelsData.IslandsLevelEntry;
using IslandsLevelZone = MatchingCardGame.IslandsLevelsData.IslandsLevelZone;

namespace MatchingCardGame
{
	public class IslandsLevelsMinigameTutorial : IslandsLevelsMinigame
	{
		public GameObject endPanel;

		public override IEnumerator Start ()
		{
			zoneEndLevelIndex = islandsLevelsData.islandsLevelEntries.Length;
			yield return StartCoroutine(base.Start ());
		}

		public override void GoToNextLevel ()
		{
			if (currentLevelIndex == zoneEndLevelIndex - 1)
			{
				endPanel.SetActive(true);
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
	}
}