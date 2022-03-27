using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using QFramework;
using Utils;
using UnityEngine.ResourceManagement.AsyncOperations;

public class MPlayerStyle : MonoBehaviour, IController {
    public TextMesh nameText;
    public Transform carPos;
    public GameObject car;
    //特效
    public ParticleSystem[] wheelsParticeles;
    public TrailRenderer leftTrail;
    public TrailRenderer rightTrail;
    //漂移颜色有关
    public Color[] driftColors;
    public float driftPower = 0;

    //VFX
    public GameObject plexusVFX;

    private float screenEffectTime = 0;
    private MPlayer mPlayer;

    private void Start() {
        if (GetComponent<MPlayer>() != null) {
            mPlayer = GetComponent<MPlayer>();
        } 
        //wheelsParticeles = wheelsParticeleTrans.GetComponentsInChildren<ParticleSystem>();
        DisableTrail();
    }

    private void Update() {
        //this.GetSystem<IScreenEffectsSystem>().MotionBlurEffects.Intensity = 0.5f;
        ShowVFX();
    }

    private void FixedUpdate() {
        if (mPlayer != null && mPlayer.isDrifting) {
            ChangeDriftColor();
        }
    }

    public void ChangeEquip(int eid, string rid) {
        this.GetSystem<IAddressableSystem>().GetEquipResource(rid, (obj) => {
            if (obj.Status == AsyncOperationStatus.Succeeded) {
                if (car != null) {
                    car.transform.SetParent(null);
                    Destroy(car);
                }
                car = Instantiate(obj.Result);
                car.transform.SetParent(carPos.transform, false);
                car.transform.localPosition = carPos.localPosition;
            }
        });
    }

    public void SetNameText(string name, bool isVIP = false) {
        nameText.text = name;
    }

    private void ShowVFX() {
        if (leftTrail.enabled == true) {
            EnableScreenEffect();
            PlayDriftParticle();
            this.GetSystem<ISoundSystem>().PlayWheelEngineSound();
        } else {
            DisableScreenEffect();
            StopDriftParticle();
        }
    }

    private void PlayDriftParticle() {
        foreach (var tempParticle in wheelsParticeles) {
            tempParticle.Play();
        }
        plexusVFX.gameObject.SetActiveFast(true);
    }

    private void StopDriftParticle() {
        foreach (var tempParticle in wheelsParticeles) {
            tempParticle.Stop();
        }
        plexusVFX.gameObject.SetActiveFast(false);
    }

    public void EnableTrail() {
        leftTrail.enabled = true;
        rightTrail.enabled = true;
    }

    public void DisableTrail() {
        leftTrail.enabled = false;
        rightTrail.enabled = false;
    }

    private void EnableScreenEffect() {
        screenEffectTime += Time.fixedDeltaTime;
        this.GetSystem<IScreenEffectsSystem>().SetMotionBlur(Mathf.Min(screenEffectTime, 0.14f));
    }

    private void DisableScreenEffect() {
        screenEffectTime = 0;
        this.GetSystem<IScreenEffectsSystem>().SetMotionBlur(screenEffectTime);
    }

    private void ChangeDriftColor() {
        foreach (var tempParticle in wheelsParticeles) {
            var t = tempParticle.main;
            t.startColor = driftColors[(int)mPlayer.driftLevel];
        }
    }

    public IArchitecture GetArchitecture() {
        return CrazyCar.Interface;
    }
}
