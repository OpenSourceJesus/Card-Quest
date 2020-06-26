using UnityEngine;

namespace MatchingCardGame
{
	public class IslandsLevel : Level
	{
		public Card selectedCard;
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
				Card highlightedCard = hitCollider.GetComponent<Card>();
				highlightedCardIndicatorTrs.SetParent(highlightedCard.trs);
				highlightedCardIndicatorTrs.localPosition = Vector3.zero;
				highlightedCardIndicatorTrs.gameObject.SetActive(true);
				if (leftMouseButtonInput && !previousLeftMouseButtonInput)
				{
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
	}
}