using UnityEngine;
using Extensions;
using System.Collections.Generic;
using System;
using Random = UnityEngine.Random;

namespace MatchingCardGame
{
	public class IslandsLevel : Level
	{
		public static Vector2 cardSize;
		public Card selectedCard;
		public Card highlightedCard;
		public Transform selectedCardIndicatorTrs;
		public Transform highlightedCardIndicatorTrs;
		public Transform trs;
		public int movesRequiredToWin;
		public AudioClip[] winLevelSounds = new AudioClip[0];
		public AudioClip[] moveCardSounds = new AudioClip[0];
		CardModifier[] cardModifiers = new CardModifier[0];
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
				highlightedCardIndicatorTrs.localScale = Vector3.one;
				highlightedCardIndicatorTrs.localPosition = Vector3.zero;
				highlightedCardIndicatorTrs.gameObject.SetActive(true);
				if (leftMouseButtonInput && !previousLeftMouseButtonInput)
				{
					if (selectedCard != null && highlightedCard is CardSlot)
					{
						if (TryToMoveSelectedCardToHighlightedPosition ())
							GameManager.GetSingleton<IslandsLevelsMinigame>().OnMoveMade ();
						else
						{
							selectedCard = highlightedCard;
							selectedCardIndicatorTrs.SetParent(selectedCard.trs);
							selectedCardIndicatorTrs.localScale = Vector3.one;
							selectedCardIndicatorTrs.localPosition = Vector3.zero;
							selectedCardIndicatorTrs.gameObject.SetActive(true);
						}
						if (IsLevelCompleted())
						{
							AudioClip winLevelSound = winLevelSounds[Random.Range(0, winLevelSounds.Length)];
							GameManager.GetSingleton<AudioManager>().PlaySoundEffect (null, new SoundEffect.Settings(winLevelSound));
							GameManager.GetSingleton<IslandsLevelsMinigame>().OnLevelComplete (this);
						}
					}
					else
					{
						selectedCard = highlightedCard;
						selectedCardIndicatorTrs.SetParent(selectedCard.trs);
						selectedCardIndicatorTrs.localScale = Vector3.one;
						selectedCardIndicatorTrs.localPosition = Vector3.zero;
						selectedCardIndicatorTrs.gameObject.SetActive(true);
					}
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

		int GetMatchCount ()
		{
			int output = 0;
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
								output ++;
						}
					}
				}
			}
			return output;
		}

		bool TryToMoveSelectedCardToHighlightedPosition ()
		{
			Island highlighedCardIsland = (Island) highlightedCard.groupsIAmPartOf[0];
			Island selectedCardIsland = (Island) selectedCard.groupsIAmPartOf[0];
			if (highlighedCardIsland == selectedCardIsland)
				return false;
			bool isCardSlotMousedOver = false;
			foreach (Card cardSlot in highlighedCardIsland.cardSlots)
			{
				if (cardSlot.position == highlightedCard.position)
				{
					isCardSlotMousedOver = true;
					break;
				}
			}
			if (!isCardSlotMousedOver)
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
			AudioClip moveCardSound = moveCardSounds[Random.Range(0, moveCardSounds.Length)];
			GameManager.GetSingleton<AudioManager>().PlaySoundEffect (null, new SoundEffect.Settings(moveCardSound));
			return true;
		}

		void MoveSelectedCardToHighlightedPosition ()
		{
			Island highlighedIsland = (Island) highlightedCard.groupsIAmPartOf[0];
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
			selectedCard.trs.SetParent(highlighedIsland.trs);
			foreach (CardModifier cardModifier in cardModifiers)
				cardModifier.ApplyEffect ();
		}

		public bool IsEquivalent (IslandsLevel otherLevel)
		{
			Dictionary<string, List<Vector2Int>> cardTypePositionsDict = new Dictionary<string, List<Vector2Int>>();
			foreach (CardGroup cardGroup in cardGroups)
			{
				foreach (Card card in cardGroup.cards)
				{
					if (!cardTypePositionsDict.ContainsKey(card.type))
					{
						List<Vector2Int> cardPositions = new List<Vector2Int>();
						cardPositions.Add(card.position);
						cardTypePositionsDict.Add(card.type, cardPositions);
					}
					else
						cardTypePositionsDict[card.type].Add(card.position);
				}
			}
			Dictionary<string, List<Vector2Int>> otherCardTypePositionsDict = new Dictionary<string, List<Vector2Int>>();
			foreach (CardGroup cardGroup in otherLevel.cardGroups)
			{
				foreach (Card card in cardGroup.cards)
				{
					if (!otherCardTypePositionsDict.ContainsKey(card.type))
					{
						List<Vector2Int> cardPositions = new List<Vector2Int>();
						cardPositions.Add(card.position);
						otherCardTypePositionsDict.Add(card.type, cardPositions);
					}
					else
						otherCardTypePositionsDict[card.type].Add(card.position);
				}
			}
			if (cardTypePositionsDict.Count != otherCardTypePositionsDict.Count)
				return false;
			List<Vector2Int>[] _cardTypePositions = new List<Vector2Int>[cardTypePositionsDict.Count];
			cardTypePositionsDict.Values.CopyTo(_cardTypePositions, 0);
			List<List<Vector2Int>> cardTypePositions = new List<List<Vector2Int>>();
			cardTypePositions = _cardTypePositions.ToList();
			List<Vector2Int>[] _otherCardTypePositions = new List<Vector2Int>[otherCardTypePositionsDict.Count];
			otherCardTypePositionsDict.Values.CopyTo(_otherCardTypePositions, 0);
			return false;
		}
		
		public static IslandsLevel MakeLevel (Vector2Int dimensions, int cardCount = 4, int cardTypeCount = 1, int islandCount = 2, int moveCount = 1, CardModifierEntry[] cardModifierEntries = null)
		{
			IslandsLevel islandsLevel = Instantiate(GameManager.GetSingleton<GameManager>().islandsLevelPrefab);
			int cardsPerIsland = cardCount / islandCount;
			Island island = MakeIsland(islandsLevel, dimensions, cardsPerIsland, cardTypeCount);
			islandsLevel.cardGroups = new CardGroup[islandCount];
			islandsLevel.cardGroups[0] = island;
			for (int i = 1; i < islandCount; i ++)
			{
				island = Instantiate(island, islandsLevel.trs);
				islandsLevel.cardGroups[i] = island;
				if (i % 2 == 1)
					island.trs.position += (Vector3.right * (dimensions.x + 1)).Multiply(cardSize);
				else
					island.trs.position += (Vector3) (dimensions + Vector2Int.one).Multiply(cardSize);
			}
			if (!MakeMoves(islandsLevel, moveCount))
			{
				DestroyImmediate(islandsLevel.gameObject);
				return null;
			}
			islandsLevel.selectedCard = null;
			islandsLevel.highlightedCard = null;
			return islandsLevel;
		}

		static Island MakeIsland (IslandsLevel islandsLevel, Vector2Int dimensions, int cardCount = 2, int cardTypeCount = 1, CardModifierEntry[] cardModifierEntries = null)
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
			for (int x = 0; x < dimensions.x; x ++)
			{
				for (int y = 0; y < dimensions.y; y ++)
				{
					CardSlot cardSlot = Instantiate(GameManager.GetSingleton<GameManager>().cardSlotPrefab, island.trs);
					Vector2Int cardPosition = new Vector2Int(x, y);
					cardSlot.position = cardPosition;
					cardSlot.trs.localPosition = cardSlot.position.Multiply(cardSize).SetZ(1);
					cardSlot.groupsIAmPartOf = new CardGroup[1] { island };
					cardSlots.Add(cardSlot);
					possibleNextCardPositions.Add(cardPosition);
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
					CardSlot cardSlot = island.cardSlotPositionsDict[cardPosition];
					card.cardSlotUnderMe = cardSlot;
					card.groupsIAmPartOf = new CardGroup[1] { island };
					cardSlot.cardAboveMe = card;
					cards.Add(card);
				}
				notUsedIslandCardPrefabs.RemoveAt(notUsedIslandCardPrefabIndex);
			}
			island.cards = cards.ToArray();
			return island;
		}

		static bool MakeMoves (IslandsLevel islandsLevel, int moveCount = 1, int maxRetries = 50)
		{
			int matchCount = islandsLevel.GetMatchCount();
			int previousMatchCount = matchCount;
			for (int i = 0; i < moveCount; i ++)
			{
				for (int i2 = 0; i2 < maxRetries; i2 ++)
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
					CardSlot cardSlotToMoveFrom = cardToMove.cardSlotUnderMe;
					CardSlot cardSlotToMoveTo = possibleCardSlotsToMoveTo[indexOfCardSlotToMoveTo];
					islandsLevel.selectedCard = cardToMove;
					islandsLevel.highlightedCard = cardSlotToMoveTo;
					islandsLevel.MoveSelectedCardToHighlightedPosition();
					matchCount = islandsLevel.GetMatchCount();
					if (matchCount == 0)
					{
						islandsLevel.movesRequiredToWin = i + 1;
						return true;
					}
					else if (matchCount >= previousMatchCount)
					{
						islandsLevel.selectedCard = cardToMove;
						islandsLevel.highlightedCard = cardSlotToMoveFrom;
						islandsLevel.MoveSelectedCardToHighlightedPosition();
						if (i2 == maxRetries - 1)
							return false;
					}
					else
						break;
				}
				previousMatchCount = matchCount;
			}
			islandsLevel.movesRequiredToWin = moveCount;
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

		[Serializable]
		public class CardModifierEntry
		{
			public CardModifier cardModifierPrefab;
			public int[] cardTypesToApplyModifiers = new int[0];
		}
	}
}