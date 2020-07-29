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
		[SaveAndLoadValue(false)]
		public static List<string> zonesCompleted = new List<string>();

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
			foreach (Zone zone in zones)
			{
				if (zonesCompleted.Contains(zone.trs.name))
					zone.lockGo.SetActive(false);
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
						IslandsLevelsMinigame.zoneStartLevelIndex = 0;
						IslandsLevelsMinigame.zoneEndLevelIndex = 0;
						for (int i = 0; i < zone.trs.GetSiblingIndex(); i ++)
						{
							IslandsLevelsMinigame.zoneStartLevelIndex += islandsLevelsData.levelZones[i].levelCount;
							IslandsLevelsMinigame.zoneEndLevelIndex += islandsLevelsData.levelZones[i].levelCount;
						}
						IslandsLevelsMinigame.zoneEndLevelIndex += islandsLevelsData.levelZones[zone.trs.GetSiblingIndex()].levelCount;
						GameManager.GetSingleton<GameManager>().LoadScene ("Level");
					}
					break;
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
			public Transform trs;
			public GameObject lockGo;
			public LineRenderer lineRenderer;
			public PolygonCollider2D polygonCollider;
		} 
	}
}