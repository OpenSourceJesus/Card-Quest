using UnityEngine;

namespace MatchingCardGame
{
	public class IslandsLevel : Level
	{
		public Card selectedCard;
		bool previousLeftMouseButtonInput;
		bool leftMouseButtonInput;

		public override void DoUpdate ()
		{
			base.DoUpdate ();
			leftMouseButtonInput = InputManager.LeftClickInput;
			HandleSetSelectedCard ();
			previousLeftMouseButtonInput = leftMouseButtonInput;
		}

		void HandleSetSelectedCard ()
		{
			if (leftMouseButtonInput && !previousLeftMouseButtonInput)
			{
				Collider2D hitCollider = Physics2D.OverlapPoint(GameManager.GetSingleton<CameraScript>().camera.ScreenToWorldPoint(InputManager.MousePosition));
				if (hitCollider != null)
					selectedCard = hitCollider.GetComponent<Card>();
				else
					selectedCard = null;
				print(selectedCard);
			}
		}
	}
}