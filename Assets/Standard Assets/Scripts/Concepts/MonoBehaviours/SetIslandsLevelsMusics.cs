using UnityEngine;
using IslandsLevelEntry = MatchingCardGame.IslandsLevelsData.IslandsLevelEntry;
using IslandsLevelZone = MatchingCardGame.IslandsLevelsData.IslandsLevelZone;

namespace MatchingCardGame
{
	[ExecuteInEditMode]
	public class SetIslandsLevelsMusics : MonoBehaviour
	{
		public IslandsLevelsData islandsLevelsData;

		void OnEnable ()
		{
			int levelIndex = 0;
			foreach (IslandsLevelZone zone in islandsLevelsData.levelZones)
			{
				for (int i = 0; i < zone.levelCount; i ++)
				{
					islandsLevelsData.islandsLevelEntries[levelIndex].musics = zone.firstLevelEntry.musics;
					levelIndex ++;
				}
			}
		}
	}
}