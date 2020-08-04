using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace DialogAndStory
{
	public class DialogManager : MonoBehaviour
	{
		public virtual void StartDialog (Dialog dialog)
		{
			dialog.onStartedEvent.Do ();
			dialog.IsActive = true;
		}
		
		public virtual void EndDialog (Dialog dialog)
		{
			if (!dialog.isFinished)
				dialog.onLeftWhileTalkingEvent.Do ();
			dialog.IsActive = false;
		}
		
		public virtual void StartConversation (Conversation conversation)
		{
			conversation.updateRoutine = conversation.StartCoroutine(conversation.UpdateRoutine ());
		}

		public virtual void EndConversation (Conversation conversation)
		{
			EndDialog (conversation.currentDialog);
			conversation.StopCoroutine(conversation.updateRoutine);
		}
	}
}