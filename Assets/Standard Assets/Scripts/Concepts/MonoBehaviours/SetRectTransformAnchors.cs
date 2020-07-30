using UnityEngine;
using Extensions;

[ExecuteInEditMode]
public class SetRectTransformAnchors : MonoBehaviour
{
	public RectTransform rectTrs;

	void OnEnable ()
	{
		rectTrs = GetComponent<RectTransform>();
		rectTrs.SetAnchorsToRect ();
		DestroyImmediate(this);
	}
}