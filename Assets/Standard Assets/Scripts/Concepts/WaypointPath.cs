﻿using UnityEngine;
using System.Collections;

namespace MatchingCardGame
{
	public class WaypointPath : MonoBehaviour
	{
		public Color color;
		public Material material;
		public string sortingLayerName;
		[Range(-32768, 32767)]
		public int sortingOrder;
	}
}