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

		public virtual void Awake ()
		{
			Rect islandsLevelBoundsRect;
			Rect previousIslandsLevelBoundsRect = RectExtensions.NULL;
			Vector2 previousIslandsLevelPosition = VectorExtensions.NULL;
			List<Rect> islandsLevelBoundsRects = new List<Rect>();
			foreach (IslandsLevelEntry islandsLevelEntry in islandsLevelEntries)
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
			}
			Card[] cards = FindObjectsOfType<Card>();
			List<Rect> cardRects = new List<Rect>();
			foreach (Card card in cards)
				cardRects.Add(card.spriteRenderer.bounds.ToRect());
			GameManager.GetSingleton<CameraScript>().viewRect = RectExtensions.Combine(cardRects.ToArray());
			GameManager.GetSingleton<CameraScript>().trs.position = GameManager.GetSingleton<CameraScript>().viewRect.center.SetZ(GameManager.GetSingleton<CameraScript>().trs.position.z);
			GameManager.GetSingleton<CameraScript>().viewSize = GameManager.GetSingleton<CameraScript>().viewRect.size;
			GameManager.GetSingleton<CameraScript>().HandleViewSize ();
			GameManager.updatables = GameManager.updatables.Add(this);
		}

		public virtual void DoUpdate ()
		{
			if (Input.GetKeyDown(KeyCode.R))
				GameManager.GetSingleton<GameManager>().ReloadActiveScene ();
		}

		public virtual void OnDestroy ()
		{
			GameManager.updatables = GameManager.updatables.Remove(this);
		}

		[Serializable]
		public class IslandsLevelEntry
		{
			public int cardCount = 4;
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