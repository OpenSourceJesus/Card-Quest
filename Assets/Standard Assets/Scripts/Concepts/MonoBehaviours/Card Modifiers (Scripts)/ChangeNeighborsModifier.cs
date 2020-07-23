using UnityEngine;

namespace MatchingCardGame
{
	public class ChangeNeighborsModifier : CardModifier
	{
		public override void ApplyEffect ()
		{
			foreach (CardGroup cardGroup in affectedCard.groupsIAmPartOf)
			{
				Island island = cardGroup as Island;
				if (island != null)
				{
					CardSlot cardSlot;
					if (island.cardSlotPositionsDict.TryGetValue(affectedCard.position + Vector2Int.left, out cardSlot))
						TryToChangeCard (cardSlot.cardAboveMe);
					if (island.cardSlotPositionsDict.TryGetValue(affectedCard.position + Vector2Int.right, out cardSlot))
						TryToChangeCard (cardSlot.cardAboveMe);
					if (island.cardSlotPositionsDict.TryGetValue(affectedCard.position + Vector2Int.down, out cardSlot))
						TryToChangeCard (cardSlot.cardAboveMe);
					if (island.cardSlotPositionsDict.TryGetValue(affectedCard.position + Vector2Int.up, out cardSlot))
						TryToChangeCard (cardSlot.cardAboveMe);
				}
			}
			base.ApplyEffect ();
		}

		void TryToChangeCard (Card card)
		{
			foreach (CardModifier cardModifier in card.cardModifiers)
			{
				if (cardModifier is ChangeNeighborsModifier)
				{
					
				}
			}
			card.type = affectedCard.type;
			card.spriteRenderer.sprite = affectedCard.spriteRenderer.sprite;
		}
	}
}