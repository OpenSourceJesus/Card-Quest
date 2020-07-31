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
			int indexOfFirstLevelInCurrentZone = 0;
			for (int i = 0; i < currentZoneIndex; i ++)
			{
				IslandsLevelZone levelZone = islandsLevelsData.levelZones[i];
				indexOfFirstLevelInCurrentZone += levelZone.levelCount;
			}
			for (int i = 0; i < currentLevelZone.levelCount; i ++)
			{
				LevelButton levelButton = Instantiate(levelButtonPrefab, levelButtonsParent);
				IslandsLevelEntry levelEntry = islandsLevelsData.islandsLevelEntries[indexOfFirstLevelInCurrentZone + i];
				levelButton.text.text.text = levelEntry.name;
				levelButton.button.onClick.AddListener(delegate { OnLevelButtonPressed (levelButton); });
				int starsRemaining = levelButton.starIconGos.Length - IslandsLevelsMinigame.GetLevelStars(levelEntry.name);
				for (int i2 = 0; i2 < starsRemaining; i2 ++)
					levelButton.starIconGos[i2].SetActive(false);
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