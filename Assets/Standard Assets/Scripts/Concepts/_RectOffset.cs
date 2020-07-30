using UnityEngine;
using System;

[Serializable]
public class _RectOffset
{
	public float left;
	public float right;
	public float bottom;
	public float top;
	public float Horizontal
	{
		get
		{
			return left + right;
		}
	}
	public float Vertical
	{
		get
		{
			return top + bottom;
		}
	}

	public Rect Add (Rect rect)
	{
		Vector2 offset = new Vector2(Horizontal, Vertical);
		rect.center += offset / 2;
		rect.size += offset;
		return rect;
	}
}