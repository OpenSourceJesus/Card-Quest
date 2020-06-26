using UnityEngine;
using Extensions;

namespace MatchingCardGame
{
	public class IslandsLevel : Level
	{
		public Card selectedCard;
		public Card highlightedCard;
		bool previousLeftMouseButtonInput;
		bool leftMouseButtonInput;
		public Transform selectedCardIndicatorTrs;
		public Transform highlightedCardIndicatorTrs;

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
						TryToMoveSelectedCardToHighlightedPosition ();
					selectedCard = highlightedCard;
					selectedCardIndicatorTrs.SetParent(selectedCard.trs);
					selectedCardIndicatorTrs.localPosition = Vector3.zero;
					selectedCardIndicatorTrs.gameObject.SetActive(true);
					print("Selected: " + selectedCard);
				}
				print("Highlighted: " + highlightedCard);
			}
			else
			{
				highlightedCardIndicatorTrs.gameObject.SetActive(false);
				if (leftMouseButtonInput && !previousLeftMouseButtonInput)
				{
					selectedCard = null;
					selectedCardIndicatorTrs.gameObject.SetActive(false);
					print("Selected: " + selectedCard);
				}
				print("Highlighted: ");
			}
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
			selectedCard.trs.position = highlightedCard.trs.position;
			selectedCard.position = highlightedCard.position;
			highlighedCardIsland.cards = highlighedCardIsland.cards.Add(selectedCard);
			selectedCard.groupsIAmPartOf = new CardGroup[1] { highlighedCardIsland };
			selectedCardIsland.cards = selectedCardIsland.cards.Remove(selectedCard);
			return true;
		}
	}
}