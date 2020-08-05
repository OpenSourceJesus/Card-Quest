using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Extensions;
using System;

namespace MatchingCardGame
{
	[RequireComponent(typeof(AudioSource))]
	public class SoundEffect : Spawnable
	{
		public AudioSource audioSource;

		[Serializable]
		public class Settings
		{
			public AudioClip clip;
			public float volume = 1;
			public float pitch = 1;

			public Settings ()
			{
			}

			public Settings (AudioClip clip)
			{
				this.clip = clip;
			}

			public Settings (AudioClip clip, float volume, float pitch)
			{
				this.clip = clip;
				this.volume = volume;
				this.pitch = pitch;
			}
		}
	}
}