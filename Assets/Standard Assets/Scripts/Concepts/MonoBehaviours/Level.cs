using UnityEngine;
using Extensions;

namespace MatchingCardGame
{
	public class Level : MonoBehaviour, IUpdatable
	{
		public bool PauseWhileUnfocused
		{
			get
			{
				return true;
			}
		}
		public Card[] cards = new Card[0];
		public CardGroup[] cardGroups = new CardGroup[0];

		public virtual void Awake ()
		{
			GameManager.updatables = GameManager.updatables.Add(this);
		}

		public virtual void DoUpdate ()
		{
		}

		public virtual void OnDestroy ()
		{
			GameManager.updatables = GameManager.updatables.Remove(this);
		}
	}
}