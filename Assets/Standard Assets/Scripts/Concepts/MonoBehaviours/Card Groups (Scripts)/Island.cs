using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace MatchingCardGame
{
	public class Island : CardGroup
	{
        public CardSlot[] cardSlots = new CardSlot[0];
		public Dictionary<Vector2Int, CardSlot> cardSlotPositionsDict = new Dictionary<Vector2Int, CardSlot>();
		public Transform trs;
	}
}