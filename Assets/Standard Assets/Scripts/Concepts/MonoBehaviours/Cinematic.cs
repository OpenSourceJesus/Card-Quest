using UnityEngine;
using UnityEngine.UI;
using DialogAndStory;

namespace MatchingCardGame
{
	public class Cinematic : MonoBehaviour
	{
		public Conversation conversation;
		public Button goToNextPartButton;

		void OnEnable ()
		{
			goToNextPartButton.onClick.AddListener(delegate { GoToNextPart (); });
		}

		void OnDisable ()
		{
			goToNextPartButton.onClick.RemoveListener(delegate { GoToNextPart (); });
		}

		void GoToNextPart ()
		{
			conversation.currentDialog.isFinished = true;
			conversation.currentDialog.onFinishedEvent.Do ();
			conversation.currentDialog.IsActive = false;
		}
	}
}