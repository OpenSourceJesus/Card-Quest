using UnityEngine;
using UnityEngine.UI;
using IslandsLevelEntry = MatchingCardGame.IslandsLevelsData.IslandsLevelEntry;
using IslandsLevelZone = MatchingCardGame.IslandsLevelsData.IslandsLevelZone;

namespace MatchingCardGame
{
	public class LevelSelectMenu : MonoBehaviour
	{
		public static int currentZoneIndex;
		public IslandsLevelsData islandsLevelsData;
		public LevelButton levelButtonPrefab;
		public Transform levelButtonsParent;
		public Image backgroundImage;

		void OnEnable ()
		{
			IslandsLevelZone currentLevelZone = islandsLevelsData.levelZones[currentZoneIndex];
			backgroundImage.sprite = currentLevelZone.firstLevelEntry.backgroundSprite;
			for (int i = 0; i < currentLevelZone.levelCount; i ++)
			{
				LevelButton levelButton = Instantiate(levelButtonPrefab, levelButtonsParent);
				levelButton.text.text.text = currentLevelZone.firstLevelEntry.name + " " + (i + 1);
				levelButton.button.onClick.AddListener(delegate { OnLevelButtonPressed (levelButton); });
			}
		}

		void OnLevelButtonPressed (LevelButton levelButton)
		{
			IslandsLevelsMinigame.startingLevelIndex = 0;
			IslandsLevelsMinigame.zoneEndLevelIndex = 0;
			for (int i = 0; i < currentZoneIndex; i ++)
			{
				IslandsLevelZone levelZone = islandsLevelsData.levelZones[i];
				IslandsLevelsMinigame.startingLevelIndex += levelZone.levelCount;
				IslandsLevelsMinigame.zoneEndLevelIndex += levelZone.levelCount;
			}
			IslandsLevelsMinigame.startingLevelIndex += levelButton.trs.GetSiblingIndex();
			IslandsLevelsMinigame.zoneEndLevelIndex += islandsLevelsData.levelZones[currentZoneIndex].levelCount;
			GameManager.GetSingleton<GameManager>().LoadScene ("Level");
		}
	}
}