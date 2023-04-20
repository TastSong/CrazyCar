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
    public GameObject waterWaveParticle;
    //漂移颜色有关
    public Color[] driftColors;
    public float driftPower = 0;

    //VFX
    public GameObject plexusVFX;

    private float screenEffectTime = 0;
    private MPlayer mPlayer;
    private bool isStartDrift = false;

    private void Start() {
        if (GetComponent<MPlayer>() != null) {
            mPlayer = GetComponent<MPlayer>();
        }
        this.RegisterEvent<StartDriftEvent>(OnStartDrift).UnRegisterWhenGameObjectDestroyed(gameObject);
        EndDrift();
        waterWaveParticle.gameObject.SetActiveFast(false);
    }

    private void OnStartDrift(StartDriftEvent e) {
        if (e.uid == mPlayer.userInfo.uid) {
            EnableTrail();
            EnableScreenEffect();
            PlayDriftParticle();
            ChangeDriftColor();
            this.GetSystem<ISoundSystem>().PlaySound(SoundType.WheelEngine);
            isStartDrift = true;
        }
    }

    private void FixedUpdate() {
        if (mPlayer == null || mPlayer.isLockSpeed) {
            return;
        }

        if (isStartDrift && mPlayer.currentForce <= mPlayer.normalForce) {
            EndDrift();
        }

        if (this.GetSystem<IPlayerManagerSystem>().SelfPlayer == mPlayer && !mPlayer.isGround) {
            this.GetSystem<IScreenEffectsSystem>().ShakeCamera();
            this.GetSystem<IVibrationSystem>().Haptic();
        }
    }

    public void ChangeEquip(int eid, string rid) {
        this.GetSystem<IAddressableSystem>().GetEquipResource(rid, (obj) => {
            if (obj.Status == AsyncOperationStatus.Succeeded) {
                if (car != null) {
                    car.transform.SetParent(null);
                    Destroy(car);
                }
                if (obj.Result == null || carPos == null) {
                    return;
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

    private void EndDrift() {
        DisableTrail();
        DisableScreenEffect();
        StopDriftParticle();
        this.GetSystem<ISoundSystem>().StopAllSound();
        isStartDrift = false;
    }

    private void PlayDriftParticle() {
        foreach (var tempParticle in wheelsParticeles) {
            if (!tempParticle.isPlaying) {
                tempParticle.Play();
            }
        }
        plexusVFX.gameObject.SetActiveFast(true);
    }

    private void StopDriftParticle() {
        foreach (var tempParticle in wheelsParticeles) {
            if (tempParticle.isPlaying) {
                tempParticle.Stop();
            }
        }
        plexusVFX.gameObject.SetActiveFast(false);
    }

    private void EnableTrail() {
        leftTrail.enabled = true;
        rightTrail.enabled = true;
    }

    private void DisableTrail() {
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

    private void OnTriggerEnter(Collider other) {
        if (other.tag == TagName.waterWave) {
            waterWaveParticle.SetActiveFast(true);
        }
    }

    private void OnTriggerExit(Collider other) {
        if (other.tag == TagName.waterWave) {
            waterWaveParticle.SetActiveFast(false);
        }
    }

    public IArchitecture GetArchitecture() {
        return CrazyCar.Interface;
    }
}
