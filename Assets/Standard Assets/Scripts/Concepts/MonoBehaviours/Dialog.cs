using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using System;
using Extensions;
using TMPro;
using MatchingCardGame;
using UnityEngine.Events;

namespace DialogAndStory
{
	public class Dialog : MonoBehaviour, IUpdatable
	{
		public bool IsActive
		{
			get
			{
				return gameObject.activeSelf;
			}
			set
			{
				gameObject.SetActive(value);
			}
		}
		public Canvas canvas;
		public TMP_Text text;
		public Conversation conversation;
		[Multiline(7)]
		public string textString;
		string textStringCopy;
		float writeTimer;
		float writeDelayTime;
		public int maxCharacters;
		public float writeSpeed;
		int currentChar;
		public WaitEvent[] waitEvents;
		public CustomDialogEvent[] customDialogEvents;
		bool shouldDisplayCurrentChar;
		[HideInInspector]
		public bool isFinished;
		public CustomEvent onStartedEvent;
		public CustomEvent onFinishedEvent;
		public bool PauseWhileUnfocused
		{
			get
			{
				return true;
			}
		}
		public CustomEvent onLeftWhileTalkingEvent;
		public bool autoEnd;
		public bool runWhilePaused;

		public virtual void OnEnable ()
		{
			currentChar = 0;
			text.text = "";
			isFinished = false;
			GameManager.updatables = GameManager.updatables.Add(this);
		}

		public virtual void OnDisable ()
		{
			GameManager.updatables = GameManager.updatables.Remove(this);
		}
		
		public virtual void DoUpdate ()
		{
			textStringCopy = textString;
			if (runWhilePaused)
				writeTimer += Time.unscaledDeltaTime;
			else
				writeTimer += GameManager.UnscaledDeltaTime;
			if (writeTimer > 1f / writeSpeed + writeDelayTime)
			{
				shouldDisplayCurrentChar = true;
				writeTimer -= (1f / writeSpeed + writeDelayTime);
				writeDelayTime = 0;
				foreach (WaitEvent waitEvent in waitEvents)
				{
					if (textStringCopy.IndexOf(waitEvent.indicator, currentChar) == currentChar)
					{
						writeDelayTime = waitEvent.duration;
						currentChar += waitEvent.indicator.Length;
						shouldDisplayCurrentChar = false;
						break;
					}
				}
				if (writeDelayTime == 0)
				{
					if (textStringCopy.IndexOf(ClearEvent.indicator, currentChar) == currentChar)
					{
						text.text = "";
						currentChar += ClearEvent.indicator.Length;
						shouldDisplayCurrentChar = false;
					}
					else
					{
						foreach (CustomDialogEvent customDialogEvent in customDialogEvents)
						{
							if (textStringCopy.IndexOf(customDialogEvent.indicator, currentChar) == currentChar)
							{
								shouldDisplayCurrentChar = false;
								currentChar += customDialogEvent.indicator.Length;
							}
						}
					}
				}
				if (shouldDisplayCurrentChar)
				{
					if (currentChar < textStringCopy.Length)
					{
						text.text += textStringCopy[currentChar];
						while (text.text.Length > maxCharacters)
							text.text = text.text.Substring(1);
						currentChar ++;
					}
					else
					{
						isFinished = true;
						onFinishedEvent.Do ();
						if (autoEnd)
							GameManager.GetSingleton<DialogManager>().EndDialog (this);
					}
				}
			}
		}

		[Serializable]		
		public class Event
		{
		}

		[Serializable]
		public class WaitEvent : Event
		{
			public string indicator;
			public float duration;
		}
		
		[Serializable]
		public class ClearEvent : Event
		{
			public const string indicator = "{clear}";
		}

		[Serializable]
		public class CustomDialogEvent : Event
		{
			public string indicator;
			public CustomEvent customEvent;
		}
	}
}