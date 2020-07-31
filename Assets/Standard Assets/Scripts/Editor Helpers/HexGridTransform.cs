#if UNITY_EDITOR
using UnityEngine;
using MatchingCardGame;
using UnityEngine.Tilemaps;

public class HexGridTransform : EditorScript
{
	public Transform trs;
	public Grid grid;

	public override void DoEditorUpdate ()
	{
		trs.localPosition = grid.GetCellCenterWorld(grid.WorldToCell(trs.localPosition));
	}
}
#else
using UnityEngine;

public class HexGridTransform : MonoBehaviour
{
}
#endif