using UnityEngine;
using System;
using Extensions;

namespace MatchingCardGame
{
	[CreateAssetMenu]
	public class IslandsLevelsData : ScriptableObject
	{
		public IslandsLevelZone[] levelZones = new IslandsLevelZone[0];
		public IslandsLevelEntry[] islandsLevelEntries = new IslandsLevelEntry[0];

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
			public Rect[] islandRects = new Rect[0];

			public IslandsLevelEntry (IslandsLevelEntry islandsLevelEntry)
			{
				name = islandsLevelEntry.name;
				dimensions = islandsLevelEntry.dimensions;
				cardCount = islandsLevelEntry.cardCount;
				cardTypeCount = islandsLevelEntry.cardTypeCount;
				moveCount = islandsLevelEntry.moveCount;
				backgroundSprite = islandsLevelEntry.backgroundSprite;
				islandOrientationColliders = islandsLevelEntry.islandOrientationColliders;
				islandRects = islandsLevelEntry.islandRects;
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
						Rect islandRect = islandRects[i];
						Vector2 islandSize = islandRect.size.Divide(dimensions.Multiply(IslandsLevel.cardSize));
						if (islandSize.x > islandSize.y)
							islandSize.x = islandSize.y;
						else
							islandSize.y = islandSize.x;
						Vector2 islandPosition = islandRect.center - islandSize / 2;
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