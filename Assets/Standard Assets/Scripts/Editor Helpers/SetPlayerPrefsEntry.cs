#if UNITY_EDITOR
using UnityEngine;

[ExecuteInEditMode]
public class SetPlayerPrefsEntry : MonoBehaviour
{
	bool firstTimeEnabled = true;
	public string playerPrefsKey;
	public int playerPrefsValue_int;

	void OnEnable ()
	{
		if (firstTimeEnabled)
		{
			firstTimeEnabled = false;
			return;
		}
		PlayerPrefs.SetInt(playerPrefsKey, playerPrefsValue_int);
		DestroyImmediate(this);
	}
}
#endif