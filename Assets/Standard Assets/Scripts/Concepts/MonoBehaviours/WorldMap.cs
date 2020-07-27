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
					if (InputManager.LeftClickInput)
					{
						IslandsLevelsMinigame.startingLevelIndex = 0;
                        for (int i = 0; i < zone.trs.GetSiblingIndex(); i ++)
                            IslandsLevelsMinigame.startingLevelIndex += islandsLevelsData.levelZones[i].levelCount;
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
			public LineRenderer lineRenderer;
			public PolygonCollider2D polygonCollider;
		} 
	}
}