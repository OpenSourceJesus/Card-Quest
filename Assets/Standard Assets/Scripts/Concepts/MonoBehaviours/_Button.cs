using UnityEngine;
using UnityEngine.UI;

namespace MatchingCardGame
{
	[RequireComponent(typeof(Button))]
	public class _Button : MonoBehaviour
	{
		public Button button;

		void OnEnable ()
		{
			button.onClick.AddListener(delegate { MakeSound (); });
		}

		void OnDisable ()
		{
			button.onClick.RemoveListener(delegate { MakeSound (); });
		}

		void MakeSound ()
		{
			GameManager.GetSingleton<AudioManager>().PlaySoundEffect ();
		}
	}
}