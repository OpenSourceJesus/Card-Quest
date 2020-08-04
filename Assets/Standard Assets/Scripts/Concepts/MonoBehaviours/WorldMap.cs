using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Extensions;
using System;
using IslandsLevelEntry = MatchingCardGame.IslandsLevelsData.IslandsLevelEntry;
using IslandsLevelZone = MatchingCardGame.IslandsLevelsData.IslandsLevelZone;

namespace MatchingCardGame
{
	[ExecuteInEditMode]
	public class WorldMap : MonoBehaviour, IUpdatable
	{
		public bool PauseWhileUnfocused
		{
			get
			{
				return true;
			}
		}
		public static Zone selectedZone;
		public IslandsLevelsData islandsLevelsData;
		public Zone[] zones = new Zone[0];
		public _Text starsText;

		void OnEnable ()
		{
#if UNITY_EDITOR
			if (!Application.isPlaying)
			{
				foreach (Zone zone in zones)
				{
					zone.lineRenderer.positionCount = zone.polygonCollider.points.Length;
					for (int i = 0; i < zone.polygonCollider.points.Length; i ++)
						zone.lineRenderer.SetPosition(i, zone.polygonCollider.points[i]);
				}
				return;
			}
#endif
			// GameManager.GetSingleton<SaveAndLoadManager>().LoadMostRecent ();
			starsText.text.text = "" + GameManager.Stars;
			for (int i = 0; i < zones.Length; i ++)
			{
				Zone zone = zones[i];
				if (GameManager.Stars >= islandsLevelsData.levelZones[i].starsRequiredToUnlockMe)
				{
					if (zone.FirstTimeUnlocking)
					{
						zone.FirstTimeUnlocking = false;
						if (!string.IsNullOrEmpty(zone.activateGoNameForeverOnFirstTimeUnlocked))
							GameManager.GetSingleton<GameManager>().ActivateGoForever (zone.activateGoNameForeverOnFirstTimeUnlocked);
						if (!string.IsNullOrEmpty(zone.deactivateGoNameForeverOnFirstTimeUnlocked))
							GameManager.GetSingleton<GameManager>().DeactivateGoForever (zone.deactivateGoNameForeverOnFirstTimeUnlocked);
						// GameManager.GetSingleton<SaveAndLoadManager>().Save ();
						GameManager.GetSingleton<GameManager>().LoadScene ("Cutscenes");
						return;
					}
					zone.lockGo.SetActive(false);
				}
			}
			selectedZone = null;
			GameManager.updatables = GameManager.updatables.Add(this);
		}

		public void DoUpdate ()
		{
			foreach (Zone zone in zones)
			{
				if (zone.polygonCollider.OverlapPoint(GameManager.GetSingleton<CameraScript>().camera.ScreenToWorldPoint(InputManager.MousePosition)))
				{
					if (zone != selectedZone)
					{
						zone.lineRenderer.enabled = true;
						if (selectedZone != null)
							selectedZone.lineRenderer.enabled = false;
						selectedZone = zone;
					}
					if (InputManager.LeftClickInput && !zone.lockGo.activeSelf)
					{
						LevelSelectMenu.currentZoneIndex = zone.trs.GetSiblingIndex();
						if (zone.FirstTimeEntering)
						{
							zone.FirstTimeEntering = false;
							if (!string.IsNullOrEmpty(zone.activateGoNameForeverOnFirstTimeEntered))
								GameManager.GetSingleton<GameManager>().ActivateGoForever (zone.activateGoNameForeverOnFirstTimeEntered);
							if (!string.IsNullOrEmpty(zone.deactivateGoNameForeverOnFirstTimeEntered))
								GameManager.GetSingleton<GameManager>().DeactivateGoForever (zone.deactivateGoNameForeverOnFirstTimeEntered);
							// GameManager.GetSingleton<SaveAndLoadManager>().Save ();
							GameManager.GetSingleton<GameManager>().LoadScene ("Cutscenes");
							return;
						}
						GameManager.GetSingleton<GameManager>().LoadScene ("Level Select");
					}
					return;
				}
			}
		}

		void OnDisable ()
		{
			GameManager.updatables = GameManager.updatables.Remove(this);
		}

		[Serializable]
		public class Zone
		{
			public bool FirstTimeUnlocking
			{
				get
				{
					return PlayerPrefs.GetInt(trs.name + " first time unlocking", 1) == 1;
				}
				set
				{
					PlayerPrefs.SetInt(trs.name + " first time unlocking", value.GetHashCode());
				}
			}
			public bool FirstTimeEntering
			{
				get
				{
					return PlayerPrefs.GetInt(trs.name + " first time entering", 1) == 1;
				}
				set
				{
					PlayerPrefs.SetInt(trs.name + " first time entering", value.GetHashCode());
				}
			}
			public string activateGoNameForeverOnFirstTimeUnlocked;
			public string deactivateGoNameForeverOnFirstTimeUnlocked;
			public string activateGoNameForeverOnFirstTimeEntered;
			public string deactivateGoNameForeverOnFirstTimeEntered;
			public Transform trs;
			public GameObject lockGo;
			public LineRenderer lineRenderer;
			public PolygonCollider2D polygonCollider;
		} 
	}
}