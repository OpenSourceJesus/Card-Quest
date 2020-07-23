// using System.Collections;
// using System.Collections.Generic;
// using UnityEngine;
// using Extensions;
// using System;

// namespace MatchingCardGame
// {
// 	public class WorldMap : MonoBehaviour, IUpdatable
// 	{
// 		public bool PauseWhileUnfocused
// 		{
// 			get
// 			{
// 				return true;
// 			}
// 		}
// 		public Zone[] zones = new Zone[0];

// 		void OnEnable ()
// 		{
// 			GameManager.updatables = GameManager.updatables.Add(this);
// 		}

// 		public void DoUpdate ()
// 		{
// 			foreach (Zone zone in zones)
// 			{
// 				Collider2D hitZoneCollider = zone.collider.OverlapPoint(GameManager.GetSingelton<CameraScript>().camrea.ScreenToWorldPoint(InputManager.MousePosition));
// 				{
// 					// hitZoneCollider
// 				}
// 			}
// 		}

// 		void OnDisable ()
// 		{
// 			GameManager.updatables = GameManager.updatables.Remove(this);
// 		}

// 		[Serializable]
// 		class Zone
// 		{
// 			public SpriteRenderer spriteRenderer;
// 			public Collider2D collider;
// 		} 
// 	}
// }