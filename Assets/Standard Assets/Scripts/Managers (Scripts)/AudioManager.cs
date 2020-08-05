using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Extensions;

namespace MatchingCardGame
{
	public class AudioManager : MonoBehaviour, ISaveableAndLoadable
	{
		public string Name
		{
			get
			{
				return name;
			}
			set
			{
				name = value;
			}
		}
		public int uniqueId;
		public int UniqueId
		{
			get
			{
				return uniqueId;
			}
			set
			{
				uniqueId = value;
			}
		}
		[SaveAndLoadValue(false)]
		public float volume;
		[SaveAndLoadValue(false)]
		public bool mute;
		public SoundEffect soundEffectPrefab;
		public SoundEffect.Settings defaultSettings;

		void Awake ()
		{
			UpdateAudioListener ();
		}

		void UpdateAudioListener ()
		{
			if (mute)
				AudioListener.volume = 0;
			else
				AudioListener.volume = volume;
		}

		public void SetVolume (float volume)
		{
			if (GameManager.GetSingleton<AudioManager>() != this)
			{
				GameManager.GetSingleton<AudioManager>().SetVolume (volume);
				return;
			}
			this.volume = volume;
			UpdateAudioListener ();
		}

		public void SetMute (bool mute)
		{
			if (GameManager.GetSingleton<AudioManager>() != this)
			{
				GameManager.GetSingleton<AudioManager>().SetMute (mute);
				return;
			}
			this.mute = mute;
			UpdateAudioListener ();

		}

		public void ToggleMute ()
		{
			SetMute (!mute);
		}
		
		public SoundEffect PlaySoundEffect (SoundEffect soundEffectPrefab = null, SoundEffect.Settings settings = null, Vector2 position = default(Vector2), Quaternion rotation = default(Quaternion), Transform parent = null)
		{
			if (soundEffectPrefab == null)
				soundEffectPrefab = this.soundEffectPrefab;
			SoundEffect output = GameManager.GetSingleton<ObjectPool>().SpawnComponent<SoundEffect>(soundEffectPrefab.prefabIndex, position, rotation, parent);
			if (settings == null)
				settings = defaultSettings;
			output.audioSource.clip = settings.clip;
			output.audioSource.volume = settings.volume;
			output.audioSource.pitch = settings.pitch;
			output.audioSource.Play();
			GameManager.GetSingleton<ObjectPool>().DelayDespawn (output.prefabIndex, output.gameObject, output.trs, settings.clip.length);
			return output;
		}
	}
}