using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using MatchingCardGame;
#if UNITY_EDITOR
using UnityEditor;
#endif

namespace DialogAndStory
{
	// [ExecuteInEditMode]
	public class Conversation : MonoBehaviour
	{
		public Transform trs;
		public Dialog[] dialogs = new Dialog[0];
		public Coroutine updateRoutine;
		[HideInInspector]
		public Dialog currentDialog;
		public bool autoStart;

		void OnEnable ()
		{
#if UNITY_EDITOR
			if (!Application.isPlaying)
			{
				if (trs == null)
					trs = GetComponent<Transform>();
				EditorApplication.update += DoEditorUpdate;
				return;
			}
			else
				EditorApplication.update -= DoEditorUpdate;
#endif
			if (autoStart)
			{
				foreach (Dialog dialog in dialogs)
					dialog.gameObject.SetActive(false);
				GameManager.GetSingleton<DialogManager>().StartConversation (this);
			}
		}
		
		public IEnumerator UpdateRoutine ()
		{
			foreach (Dialog dialog in dialogs)
			{
				currentDialog = dialog;
				GameManager.GetSingleton<DialogManager>().StartDialog (dialog);
				yield return new WaitUntil(() => (!dialog.IsActive));
				GameManager.GetSingleton<DialogManager>().EndDialog (dialog);
			}
			yield break;
		}
		
		void OnDisable ()
		{
#if UNITY_EDITOR
			EditorApplication.update -= DoEditorUpdate;
			if (!Application.isPlaying)
				return;
#endif
			if (updateRoutine != null)
				StopCoroutine (updateRoutine);
			foreach (Dialog dialog in dialogs)
				dialog.gameObject.SetActive(false);
		}
		
#if UNITY_EDITOR
		void DoEditorUpdate ()
		{
			if (dialogs.Length == 0)
				dialogs = GetComponentsInChildren<Dialog>();
			foreach (Dialog dialog in dialogs)
				dialog.conversation = this;
		}
#endif
	}
}