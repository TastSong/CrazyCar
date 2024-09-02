using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using QFramework;
using UnityEngine.ResourceManagement.AsyncOperations;
using Utils;

public class FocusCamera : MonoBehaviour, IController {
	public new Camera camera;
	public Vector3 cameraDelta = new Vector3(0f, 1300f, 0f);

	private async void Start () {
		var obj = await this.GetSystem<IAddressableSystem>().LoadAssetAsync<RenderTexture>(Util.miniMapPath);
		if (obj.Status == AsyncOperationStatus.Succeeded) {
			camera.targetTexture = obj.Result;
		} else {
			Debug.LogError($"Load minimap Failed");
		}
	}
	
	private void LateUpdate () {
		MPlayer bike = this.GetSystem<IPlayerManagerSystem>().SelfPlayer;
		if (bike != null) {
			camera.transform.position = bike.transform.position + cameraDelta;
		}
	}

    public IArchitecture GetArchitecture() {
		return CrazyCar.Interface;
    }
}
