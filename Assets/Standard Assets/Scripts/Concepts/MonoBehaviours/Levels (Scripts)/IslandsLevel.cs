using UnityEngine;
using Extensions;
using System.Collections.Generic;

namespace MatchingCardGame
{
	public class IslandsLevel : Level
	{
		public Card selectedCard;
		public Card highlightedCard;
		public Transform selectedCardIndicatorTrs;
		public Transform highlightedCardIndicatorTrs;
		public Transform trs;
		public static int currentTry;
		const int MAX_RETRY_COUNT_MULTIPLIER = 100;
		static Vector2 cardSize;
		static IslandsLevel islandsLevel;
		static Vector2Int minCardSlotPosition;
		static Vector2Int maxCardSlotPosition;
		bool previousLeftMouseButtonInput;
		bool leftMouseButtonInput;

		public override void DoUpdate ()
		{
			base.DoUpdate ();
			leftMouseButtonInput = InputManager.LeftClickInput;
			HandleMouseInput ();
			previousLeftMouseButtonInput = leftMouseButtonInput;
		}

		void HandleMouseInput ()
		{
			Collider2D hitCollider = Physics2D.OverlapPoint(GameManager.GetSingleton<CameraScript>().camera.ScreenToWorldPoint(InputManager.MousePosition));
			if (hitCollider != null)
			{
				highlightedCard = hitCollider.GetComponent<Card>();
				highlightedCardIndicatorTrs.SetParent(highlightedCard.trs);
				highlightedCardIndicatorTrs.localPosition = Vector3.zero;
				highlightedCardIndicatorTrs.gameObject.SetActive(true);
				if (leftMouseButtonInput && !previousLeftMouseButtonInput)
				{
					if (selectedCard != null)
					{
						TryToMoveSelectedCardToHighlightedPosition ();
						print("Level complete: " + IsLevelCompleted ());
					}
					selectedCard = highlightedCard;
					selectedCardIndicatorTrs.SetParent(selectedCard.trs);
					selectedCardIndicatorTrs.localPosition = Vector3.zero;
					selectedCardIndicatorTrs.gameObject.SetActive(true);
				}
			}
			else
			{
				highlightedCardIndicatorTrs.gameObject.SetActive(false);
				if (leftMouseButtonInput && !previousLeftMouseButtonInput)
				{
					selectedCard = null;
					selectedCardIndicatorTrs.gameObject.SetActive(false);
				}
			}
		}

		bool IsLevelCompleted ()
		{
			Dictionary<Vector2Int, string> cardTypePositions = new Dictionary<Vector2Int, string>();
			for (int i = 0; i < cardGroups.Length; i ++)
			{
				Island island = (Island) cardGroups[i];
				foreach (CardSlot cardSlot in island.cardSlots)
				{
					if (cardSlot.cardAboveMe != null)
					{
						if (i == 0)
							cardTypePositions.Add(cardSlot.position, cardSlot.cardAboveMe.type);
						else
						{
							string cardType;
							if (cardTypePositions.TryGetValue(cardSlot.position, out cardType) && cardType == cardSlot.cardAboveMe.type)
							{
							}
							else
								return false;
						}
					}
					else if (i > 0 && cardTypePositions.ContainsKey(cardSlot.position))
						return false;
				}
			}
			return true;
		}

		bool TryToMoveSelectedCardToHighlightedPosition ()
		{
			Island highlighedCardIsland = (Island) highlightedCard.groupsIAmPartOf[0];
			Island selectedCardIsland = (Island) selectedCard.groupsIAmPartOf[0];
			if (highlighedCardIsland == selectedCardIsland)
				return false;
			// highlightedCardIsland.cardSlotPositionsDict[highlightedCard.position];
			bool isNextToSameType = false;
			foreach (Card card in highlighedCardIsland.cards)
			{
				float distanceFromHighlighted = Vector2Int.Distance(card.position, highlightedCard.position);
				if (distanceFromHighlighted == 0)
					return false;
				else if (card.type == selectedCard.type && distanceFromHighlighted == 1)
				{
					isNextToSameType = true;
					break;
				}
			}
			if (!isNextToSameType)
				return false;
			MoveSelectedCardToHighlightedPosition ();
			return true;
		}

		void MoveSelectedCardToHighlightedPosition ()
		{
			CardGroup highlighedIsland = highlightedCard.groupsIAmPartOf[0];
			CardGroup selectedIsland = selectedCard.groupsIAmPartOf[0];
			selectedCard.trs.position = highlightedCard.trs.position.SetZ(0);
			selectedCard.position = highlightedCard.position;
			highlighedIsland.cards = highlighedIsland.cards.Add(selectedCard);
			selectedCard.groupsIAmPartOf = new CardGroup[1] { highlighedIsland };
			selectedIsland.cards = selectedIsland.cards.Remove(selectedCard);
			CardSlot highlightedCardSlot = (CardSlot) highlightedCard;
			highlightedCardSlot.cardAboveMe = selectedCard;
			selectedCard.cardSlotUnderMe.cardAboveMe = null;
			selectedCard.cardSlotUnderMe = highlightedCardSlot;
		}
		
		public static IslandsLevel MakeLevel (int cardCount = 4, int cardTypeCount = 1, int cardSlotBorderWidth = 1, int islandCount = 2, int moveCount = 1)
		{
			islandsLevel = Instantiate(GameManager.GetSingleton<GameManager>().islandsLevelPrefab);
			int cardsPerIsland = cardCount / islandCount;
			Island island = MakeIsland(cardsPerIsland, cardTypeCount, cardSlotBorderWidth);
			islandsLevel.cardGroups = new CardGroup[islandCount];
			islandsLevel.cardGroups[0] = island;
			for (int i = 1; i < islandCount; i ++)
			{
				island = Instantiate(island, islandsLevel.trs);
				islandsLevel.cardGroups[i] = island;
				if (i % 2 == 1)
					island.trs.position += (Vector3.right * (maxCardSlotPosition.x - minCardSlotPosition.x + 2)).Multiply(cardSize);
				else
					island.trs.position -= (Vector3) (maxCardSlotPosition - minCardSlotPosition + new Vector2Int(2, 3)).Multiply(cardSize);
			}
			if (!MakeMoves(moveCount))
			{
				DestroyImmediate(islandsLevel.gameObject);
				currentTry ++;
				if (currentTry > moveCount * MAX_RETRY_COUNT_MULTIPLIER)
				{
					print("The level generator tried " + (moveCount * MAX_RETRY_COUNT_MULTIPLIER) + " times but couldn't make the level you requested");
					return null;
				}
				return MakeLevel(cardCount, cardTypeCount, cardSlotBorderWidth, islandCount, moveCount);
			}
			islandsLevel.selectedCard = null;
			islandsLevel.highlightedCard = null;
			Card[] cards = FindObjectsOfType<Card>();
			List<Rect> cardRects = new List<Rect>();
			foreach (Card card in cards)
				cardRects.Add(card.spriteRenderer.bounds.ToRect());
			GameManager.GetSingleton<CameraScript>().viewRect = RectExtensions.Combine(cardRects.ToArray());
			GameManager.GetSingleton<CameraScript>().trs.position = GameManager.GetSingleton<CameraScript>().viewRect.center.SetZ(GameManager.GetSingleton<CameraScript>().trs.position.z);
			GameManager.GetSingleton<CameraScript>().viewSize = GameManager.GetSingleton<CameraScript>().viewRect.size;
			GameManager.GetSingleton<CameraScript>().HandleViewSize ();
			return islandsLevel;
		}

		static Island MakeIsland (int cardCount = 2, int cardTypeCount = 1, int cardSlotBorderWidth = 1)
		{
			Island island = Instantiate(GameManager.GetSingleton<GameManager>().islandPrefab, islandsLevel.trs);
			List<Card> notUsedIslandCardPrefabs = new List<Card>();
			notUsedIslandCardPrefabs.AddRange(GameManager.GetSingleton<GameManager>().islandsLevelCardPrefabs);
			cardSize = notUsedIslandCardPrefabs[0].spriteRenderer.bounds.ToRect().size;
			List<Vector2Int> cardPositions = new List<Vector2Int>();
			List<Vector2Int> possibleNextCardPositions = new List<Vector2Int>();
			possibleNextCardPositions.Add(Vector2Int.zero);
			List<Card> cards = new List<Card>();
			List<CardSlot> cardSlots = new List<CardSlot>();
			minCardSlotPosition = Vector2Int.zero;
			maxCardSlotPosition = Vector2Int.zero;
			for (int i = 0; i < cardTypeCount; i ++)
			{
				int notUsedIslandCardPrefabIndex = Random.Range(0, notUsedIslandCardPrefabs.Count);
				for (int i2 = 0; i2 < cardCount / cardTypeCount; i2 ++)
				{
					Card card = Instantiate(notUsedIslandCardPrefabs[notUsedIslandCardPrefabIndex], island.trs);
					int indexOfCardPosition = Random.Range(0, possibleNextCardPositions.Count);
					Vector2Int cardPosition = possibleNextCardPositions[indexOfCardPosition];
					possibleNextCardPositions.RemoveAt(indexOfCardPosition);
					card.trs.localPosition = cardPosition.Multiply(cardSize);
					card.position = cardPosition;
					card.groupsIAmPartOf = new CardGroup[1] { island };
					if (!cardPositions.Contains(cardPosition + Vector2Int.left))
						possibleNextCardPositions.Add(cardPosition + Vector2Int.left);
					if (!cardPositions.Contains(cardPosition + Vector2Int.right))
						possibleNextCardPositions.Add(cardPosition + Vector2Int.right);
					if (!cardPositions.Contains(cardPosition + Vector2Int.down))
						possibleNextCardPositions.Add(cardPosition + Vector2Int.down);
					if (!cardPositions.Contains(cardPosition + Vector2Int.up))
						possibleNextCardPositions.Add(cardPosition + Vector2Int.up);
					cardPositions.Add(cardPosition);
					minCardSlotPosition = minCardSlotPosition.SetToMinComponents(cardPosition);
					maxCardSlotPosition = maxCardSlotPosition.SetToMaxComponents(cardPosition);
					cards.Add(card);
				}
				notUsedIslandCardPrefabs.RemoveAt(notUsedIslandCardPrefabIndex);
			}
			minCardSlotPosition -= Vector2Int.one * cardSlotBorderWidth;
			maxCardSlotPosition += Vector2Int.one * cardSlotBorderWidth;
			island.cards = cards.ToArray();
			for (int x = minCardSlotPosition.x; x <= maxCardSlotPosition.x; x ++)
			{
				for (int y = minCardSlotPosition.x; y <= maxCardSlotPosition.y; y ++)
				{
					CardSlot cardSlot = Instantiate(GameManager.GetSingleton<GameManager>().cardSlotPrefab, island.trs);
					cardSlot.position = new Vector2Int(x, y);
					cardSlot.trs.localPosition = cardSlot.position.Multiply(cardSize).SetZ(1);
					cardSlot.groupsIAmPartOf = new CardGroup[1] { island };
					cardSlots.Add(cardSlot);
					island.cardSlotPositionsDict.Add(cardSlot.position, cardSlot);
					foreach (Card card in island.cards)
					{
						if (card.position == cardSlot.position)
						{
							card.cardSlotUnderMe = cardSlot;
							cardSlot.cardAboveMe = card;
							break;
						}
					}
				}
			}
			island.cardSlots = cardSlots.ToArray();
			return island;
		}

		static bool MakeMoves (int moveCount = 1)
		{
			for (int i = 0; i < moveCount; i ++)
			{
				Card cardToMove;
				List<CardGroup> remainingCardGroups = new List<CardGroup>();
				remainingCardGroups.AddRange(islandsLevel.cardGroups);
				int selectedIslandIndex = Random.Range(0, remainingCardGroups.Count);
				Island selectedIsland = (Island) remainingCardGroups[selectedIslandIndex];
				remainingCardGroups.RemoveAt(selectedIslandIndex);
				List<Card> possibleCardsToMove = new List<Card>();
				possibleCardsToMove.AddRange(selectedIsland.cards);
				do
				{
					int indexOfCardToMove = Random.Range(0, possibleCardsToMove.Count);
					cardToMove = possibleCardsToMove[indexOfCardToMove];
					possibleCardsToMove.RemoveAt(indexOfCardToMove);
					if (IsCardNextToSameType(cardToMove))
						break;
					else if (possibleCardsToMove.Count == 0)
					{
						if (remainingCardGroups.Count == 0)
							return false;
						selectedIslandIndex = Random.Range(0, remainingCardGroups.Count);
						selectedIsland = (Island) remainingCardGroups[selectedIslandIndex];
						remainingCardGroups.RemoveAt(selectedIslandIndex);
						possibleCardsToMove.Clear();
						possibleCardsToMove.AddRange(selectedIsland.cards);
					}
				} while (true);
				remainingCardGroups.Clear();
				remainingCardGroups.AddRange(islandsLevel.cardGroups);
				remainingCardGroups.Remove(selectedIsland);
				int highlightedCardIndex = Random.Range(0, remainingCardGroups.Count);
				Island highlightedIsland = (Island) remainingCardGroups[highlightedCardIndex];
				List<CardSlot> possibleCardSlotsToMoveTo = new List<CardSlot>();
				possibleCardSlotsToMoveTo.AddRange(highlightedIsland.cardSlots);
				foreach (Card card in highlightedIsland.cards)
					possibleCardSlotsToMoveTo.Remove(card.cardSlotUnderMe);
				int indexOfCardSlotToMoveTo = Random.Range(0, possibleCardSlotsToMoveTo.Count);
				CardSlot cardSlotToMoveTo = possibleCardSlotsToMoveTo[indexOfCardSlotToMoveTo];
				CardSlot cardSlotToMoveFrom = cardToMove.cardSlotUnderMe;
				islandsLevel.selectedCard = cardToMove;
				islandsLevel.highlightedCard = cardSlotToMoveTo;
				islandsLevel.MoveSelectedCardToHighlightedPosition ();
			}
			return true;
		}

		static bool IsCardNextToSameType (Card card)
		{
			Card[] otherCards = card.groupsIAmPartOf[0].cards;
			foreach (Card otherCard in otherCards)
			{
				if (card.type == otherCard.type && Vector2Int.Distance(card.position, otherCard.position) == 1)
					return true;
			}
			return false;
		}
	}
}