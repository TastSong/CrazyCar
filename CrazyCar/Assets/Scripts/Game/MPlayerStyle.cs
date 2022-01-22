using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using QFramework;
using Utils;

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
    private Dictionary<string, AccessoryChanger> equipDic = new Dictionary<string, AccessoryChanger>();
    private MPlayer mPlayer = new MPlayer();

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
        if (mPlayer.isDrifting) {
            ChangeDriftColor();
        }
    }

    public void ChangeEquip(EquipType equipType, int eid, string rid) {
        // 如果想进行车辆的组件换装，并不是整个替换，使用一下方法
        // ------- Start --------
        //InitEquipDic();
        //equipDic[equipType.ToString()].SetGear(eid.ToString(), rid);
        // ------- End ---------

        // 整个车子进行替换 Start
        EquipResource r = this.GetSystem<IResourceSystem>().GetEquipResource(rid);

        if (r != null && r.gameObject != null) {
            if (car != null) {
                car.transform.SetParent(null);
                Destroy(car);
            }
            car = Instantiate(r.gameObject);
            car.transform.SetParent(carPos.transform, false);
            car.transform.localPosition = carPos.localPosition;
        }
        // End
    }

    private void InitEquipDic() {
        if (equipDic.Count == 0) {
            AccessoryChanger[] chgs = GetComponentsInChildren<AccessoryChanger>();
            for (int i = 0; i < chgs.Length; i += 1) {
                equipDic[chgs[i].type] = chgs[i];
            }
        }
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
