using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Utils;
using TFramework;
using MoreMountains.NiceVibrations;

public class MPlayer : MonoBehaviour, IController {
    public UserInfo userInfo;
    public Rigidbody rig;
    //输入相关
    public float vInput;
    public float hInput;
    public float sInput;
    //力的大小
    public float currentForce;
    public float normalForce = 20;
    public float boostForce = 40;
    public float jumpForce = 10;
    public float gravity = 20;
    //力的方向
    private Vector3 forceDir_Horizontal;
    private float verticalModified;         //前后修正系数
    //转弯相关 
    public bool isDrifting;
    public DriftDirection driftDirection = DriftDirection.None;
    //由h_Input以及漂移影响
    public Quaternion rotationStream;   //用于最终旋转
    public float turnSpeed = 60;

    Quaternion m_DriftOffset = Quaternion.identity;
    public DriftLevel driftLevel;
    //地面检测
    public Transform frontHitTrans;
    public Transform rearHitTrans;
    public bool isGround;
    public float groundDistance = 0.7f;//根据车模型自行调节
    //特效
    public ParticleSystem[] wheelsParticeles;
    public TrailRenderer leftTrail;
    public TrailRenderer rightTrail;
    //漂移颜色有关
    public Color[] driftColors;
    public float driftPower = 0;

    //VFX
    public GameObject plexusVFX;
    public GameObject wireframeVFX;

    private bool isUseKeyboard = false;
    private long lastRecvStatusStamp = 0;
    private Vector3 peerTargetPos = new Vector3();
    private float screenEffectTime = 0;

    void Start() {
        forceDir_Horizontal = transform.forward;
        rotationStream = rig.rotation;

        //wheelsParticeles = wheelsParticeleTrans.GetComponentsInChildren<ParticleSystem>();
        StopDrift();
        DisableTrail();
    }

    void Update() {
        //this.GetSystem<IScreenEffectsSystem>().MotionBlurEffects.Intensity = 0.5f;
        if (Input.GetKeyDown(KeyCode.K)) {
            isUseKeyboard = !isUseKeyboard;
        }

        if (isUseKeyboard && this.GetSystem<IPlayerManagerSystem>().SelfPlayer == this) {
            vInput = Input.GetAxisRaw("Vertical");
            hInput = Input.GetAxisRaw("Horizontal");
        }

        if (((Input.GetKey(KeyCode.Space) && isUseKeyboard) || (sInput > 0 && !isUseKeyboard)) && currentForce > 0) {
            if (isGround && !isDrifting && rig.velocity.sqrMagnitude > 10) {
                StartDrift();
            }
        }

        if ((Input.GetKeyUp(KeyCode.Space) && isUseKeyboard) || (sInput == 0 && !isUseKeyboard)) {
            if (isDrifting) {
                Boost(boostForce);
                StopDrift();
            }
        }
        // 不能放在FixedUpdate 加速时间太短
        ShowScreenEffect();
    }

    public void ConfirmStatus(PlayerStateMsg playerStateMsg) {

    }

    private void FixedUpdate() {
        if (IsRollover()) {
            transform.position = this.GetSystem<ICheckpointSystem>().GetResetPos(transform.position);
        }

        CheckGroundNormal();
        Turn();

        //起步时力大小递增
        IncreaseForce();
        //漂移加速后/松开加油键力大小时递减
        ReduceForce();

        if (isDrifting) {
            CalculateDriftingLevel();
            ChangeDriftColor();
        }

        //根据上述情况，进行最终的旋转和加力
        rig.MoveRotation(rotationStream);
        CalculateForceDir();
        AddForceToMove();

        if (this.GetSystem<IPlayerManagerSystem>().SelfPlayer != this) {
            transform.position = Vector3.Lerp(transform.position, peerTargetPos, Time.deltaTime);
        }
    }

    private void ShowScreenEffect() {
        if (leftTrail.enabled == true) {
            EnableScreenEffect();
            PlayDriftParticle();
        } else {
            DisableScreenEffect();
            StopDriftParticle();
        }
    }

    public void AdjustPlayerPosition(Vector3 pos) {
        peerTargetPos = pos;
    }

    //计算加力方向
    private void CalculateForceDir() {
        //往前加力
        if (vInput > 0) {
            verticalModified = 1;
        } else if (vInput < 0) {
            verticalModified = -1;
        }

        forceDir_Horizontal = m_DriftOffset * transform.forward;
    }

    //加力移动
    private void AddForceToMove() {
        //计算合力
        Vector3 tempForce = verticalModified * currentForce * forceDir_Horizontal;

        if (!isGround) {
            this.GetSystem<IScreenEffectsSystem>().ShakeCamera();
            this.GetSystem<IVibrationSystem>().Haptic(HapticTypes.RigidImpact);
            tempForce = tempForce + gravity * Vector3.down;
        }

        rig.AddForce(tempForce, ForceMode.Force);
    }

    private bool IsRollover() {
        return Mathf.Abs(transform.rotation.z) > 35;
    }


    //检测是否在地面上，并且使车与地面保持水平
    private void CheckGroundNormal() {
        //从车头中心附近往下打射线,长度比发射点到车底的距离长一点
        RaycastHit frontHit;
        bool hasFrontHit = Physics.Raycast(frontHitTrans.position, -transform.up, out frontHit, groundDistance, LayerMask.GetMask("Ground"));
        if (hasFrontHit) {
            Debug.DrawLine(frontHitTrans.position, frontHitTrans.position - transform.up * groundDistance, Color.red);
        }

        RaycastHit rearHit;
        bool hasRearHit = Physics.Raycast(rearHitTrans.position, -transform.up, out rearHit, groundDistance, LayerMask.GetMask("Ground"));
        if (hasRearHit) {
            Debug.DrawLine(rearHitTrans.position, rearHitTrans.position - transform.up * groundDistance, Color.red);
        }

        if (hasFrontHit || hasRearHit) {
            isGround = true;
        } else {
            isGround = false;
        }

        //使车与地面水平
        Vector3 tempNormal = (frontHit.normal + rearHit.normal).normalized;
        Quaternion quaternion = Quaternion.FromToRotation(transform.up, tempNormal);
        rotationStream = quaternion * rotationStream;
    }

    //力递减
    private void ReduceForce() {
        float targetForce = currentForce;
        if (isGround && vInput == 0) {
            targetForce = 0;
        } else if (currentForce > normalForce) {
            targetForce = normalForce;
        }

        if (currentForce <= normalForce) {
            DisableTrail();
        } 

        currentForce = Mathf.MoveTowards(currentForce, targetForce, 30 * Time.fixedDeltaTime);//每秒60递减，可调
    }

    //力递增
    private void IncreaseForce() {
        float targetForce = currentForce;
        if (vInput != 0 && currentForce < normalForce) {
            currentForce = Mathf.MoveTowards(currentForce, normalForce, 80 * Time.fixedDeltaTime);//每秒80递增
        }
    }

    private void Turn() {
        if (rig.velocity.sqrMagnitude <= 0.1) {
            return;
        }

        //漂移时自带转向
        if (driftDirection == DriftDirection.Left) {
            rotationStream = rotationStream * Quaternion.Euler(0, -40 * Time.fixedDeltaTime, 0);
        } else if (driftDirection == DriftDirection.Right) {
            rotationStream = rotationStream * Quaternion.Euler(0, 40 * Time.fixedDeltaTime, 0);
        }

        //后退时左右颠倒
        float modifiedSteering = Vector3.Dot(rig.velocity, transform.forward) >= 0 ? hInput : -hInput;

        //输入可控转向：如果在漂移，可控角速度为30，否则平常状态为60.
        turnSpeed = driftDirection != DriftDirection.None ? 30 : 60;
        float turnAngle = modifiedSteering * turnSpeed * Time.fixedDeltaTime;
        Quaternion deltaRotation = Quaternion.Euler(0, turnAngle, 0);
        //局部坐标下旋转,这里有空换一个简单的写法
        rotationStream = rotationStream * deltaRotation;
    }

    private void Jump() {
        rig.AddForce(jumpForce * transform.up, ForceMode.Impulse);
    }


    //开始漂移并且决定漂移朝向
    private void StartDrift() {
        //Debug.Log("Start Drift");
        isDrifting = true;

        //根据水平输入决定漂移时车的朝向，因为合速度方向与车身方向不一致，所以为加力方向添加偏移
        if (hInput < 0) {
            driftDirection = DriftDirection.Left;
            //左漂移时，合速度方向为车头朝向的右前方，偏移具体数值需结合实际自己调试
            m_DriftOffset = Quaternion.Euler(0f, 30, 0f);
        } else if (hInput > 0) {
            driftDirection = DriftDirection.Right;
            m_DriftOffset = Quaternion.Euler(0f, -30, 0f);
        }
    }

    //计算漂移等级
    private void CalculateDriftingLevel() {
        driftPower += Time.fixedDeltaTime;
        //0.7秒提升一个漂移等级
        if (driftPower < 0.7) {
            driftLevel = DriftLevel.One;
        } else if (driftPower < 1.4) {
            driftLevel = DriftLevel.Two;
        } else {
            driftLevel = DriftLevel.Three;
        }
    }

    private void StopDrift() {
        isDrifting = false;
        driftDirection = DriftDirection.None;
        driftPower = 0;
        m_DriftOffset = Quaternion.identity;
    }

    private void Boost(float boostForce) {
        //按照漂移等级加速：1 / 1.1 / 1.2
        currentForce = (1 + (int)driftLevel / 10) * boostForce;
        EnableTrail();
    }

    private void PlayDriftParticle() {
        foreach (var tempParticle in wheelsParticeles) {
            tempParticle.Play();
        }
        plexusVFX.gameObject.SetActiveFast(true);
        wireframeVFX.SetActiveFast(true);
        this.GetSystem<ISoundSystem>().PlayWheelEngineSound();
    }

    private void StopDriftParticle() {
        foreach (var tempParticle in wheelsParticeles) {
            tempParticle.Stop();
        }
        plexusVFX.gameObject.SetActiveFast(false);
        wireframeVFX.gameObject.SetActiveFast(false);
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
            t.startColor = driftColors[(int)driftLevel];
        }
    }

    public void UpdateSelfParameter() {
        normalForce = userInfo.equipInfo.speed;
        boostForce = userInfo.equipInfo.maxSpeed;
        gravity = userInfo.equipInfo.mass;
    }

    public IArchitecture GetArchitecture() {
        return CrazyCar.Interface;
    }
}
