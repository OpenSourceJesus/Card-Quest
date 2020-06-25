#if UNITY_EDITOR
using UnityEditor;
using UnityEngine;
using Extensions;
using UnityEngine.Tilemaps;
using System.Collections.Generic;
using System.Collections;
using System;

namespace MatchingCardGame
{
	//[ExecuteInEditMode]
	public class World : EditorScript
	{
		public Transform trs;
		public Transform piecesParent;
	}

	[CustomEditor(typeof(World))]
	public class WorldEditor : EditorScriptEditor
	{
	}
}
#endif
#if !UNITY_EDITOR
namespace MatchingCardGame
{
	public class World : EditorScript
	{
	}
}
#endif