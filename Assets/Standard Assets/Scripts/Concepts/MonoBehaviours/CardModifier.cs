using UnityEngine;
using System.Collections.Generic;
using System.Collections;

namespace MatchingCardGame
{
	public class CardModifier : MonoBehaviour
	{
		public Card affectedCard;

		public virtual void ApplyEffect ()
		{
		}
	}
}