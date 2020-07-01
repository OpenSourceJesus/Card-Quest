using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace MatchingCardGame
{
	public class Card : MonoBehaviour
	{
		public Transform trs;
		public SpriteRenderer spriteRenderer;
		public CardGroup[] groupsIAmPartOf = new CardGroup[0];
		public Vector2Int position;
		public string type;
		public CardSlot cardSlotUnderMe;
	}
}