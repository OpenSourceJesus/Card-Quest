#if UNITY_EDITOR
using UnityEngine;
using System.Collections.Generic;
using Extensions;

namespace MatchingCardGame
{
	[ExecuteInEditMode]
	public class SetCameraRectToAllCardsBounds : MonoBehaviour
	{
		public bool update;

		void Update ()
		{
			if (!update)
				return;
			update = false;
			Card[] cards = FindObjectsOfType<Card>();
			List<Rect> cardRects = new List<Rect>();
			foreach (Card card in cards)
				cardRects.Add(card.spriteRenderer.bounds.ToRect());
			GameManager.GetSingleton<CameraScript>().viewRect = RectExtensions.Combine(cardRects.ToArray());
			GameManager.GetSingleton<CameraScript>().trs.position = GameManager.GetSingleton<CameraScript>().viewRect.center.SetZ(GameManager.GetSingleton<CameraScript>().trs.position.z);
			GameManager.GetSingleton<CameraScript>().viewSize = GameManager.GetSingleton<CameraScript>().viewRect.size;
			GameManager.GetSingleton<CameraScript>().HandleViewSize ();
		}
	}
}
#endif