using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;
using System.Linq;

public class BikeEffectBreathing : MonoBehaviour {

    public AccessoryChanger resource;

	public MeshRenderer[] frameRenders;
	public MeshRenderer[] WheelRenders;
    public Color startEmission = new Color(0.1f, 0.1f, 0.1f, 1f);

    Dictionary<int, Material> mats = new Dictionary<int, Material>();

	float glow = 0.1f;

	Sequence s;
	void AnimCreate() {
		var t1 = DOTween.To (() => glow, (x) => {
			glow = x;
			if (ShouldFrameOn ()) {
				Process (frameRenders);
			}
			if (ShouldWheelOn ()) {
				Process (WheelRenders);
			}
		}, 3, 3).SetEase(Ease.OutSine).SetAutoKill(false);
		var t2 = DOTween.To (() => glow, (x) => {
			glow = x;
			if (ShouldFrameOn ()) {
				Process (frameRenders);
			}
			if (ShouldWheelOn ()) {
				Process (WheelRenders);
			}
		}, 0.1f, 3).SetEase(Ease.OutSine).SetAutoKill(false);
		s = DOTween.Sequence ();
		s.Append (t1);
		s.AppendInterval (2f);
		s.Append (t2);
		s.AppendInterval (2f);
		s.AppendCallback (this.AnimPlay);

		s.SetAutoKill (false);
	}
	void AnimPlay() {
		s.Restart ();
	}

	void Process(MeshRenderer[] renders) {
		foreach (var m in renders) {
			var mat = m.material;
			if (mat != null) {
				if (!mats.ContainsKey (mat.GetInstanceID ())) {
					mats.Add (mat.GetInstanceID (), mat);
				}
				mat.SetColor ("_EmissionColor", Color.white * glow);
			}
		}
	}

	bool ShouldFrameOn() {
		if (resource.id == "RF_B_halo" || resource.id == "RM_B_halo") {
			return true;
		} else {
			return false;
		}
	}

	bool ShouldWheelOn() {
		if (resource.id == "RF_B_halo" || resource.id == "RM_B_halo") {
			return true;
		} else {
			return false;
		}
	}

	// Use this for initialization
	void Start () {
		AnimCreate ();
	}
	
	// Update is called once per frame
//	void Update () {
//		if (ShouldFrameOn ()) {
//			Process (frameRenders);
//		}
//		if (ShouldWheelOn ()) {
//			Process (WheelRenders);
//		}
//	}

	void OnDestroy() {
		if (s != null) {
			s.Kill ();
		}
		var l = mats.Keys.ToList();
		for (int i = 0; i < l.Count; i += 1) {
			Destroy (mats [l [i]]);
		}
	}
}
