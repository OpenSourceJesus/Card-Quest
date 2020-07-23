using UnityEngine;

namespace MatchingCardGame
{
	public class CardModifier : MonoBehaviour
	{
		public Card affectedCard;
		public Transform trs;
		public SpriteRenderer spriteRenderer;

		void OnDisable ()
		{
		}

		public virtual void ApplyEffect ()
		{
			enabled = false;
		}
	}
}