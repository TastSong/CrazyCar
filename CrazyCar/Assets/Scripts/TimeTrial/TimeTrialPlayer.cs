using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Utils;

public class TimeTrialPlayer : MonoBehaviour {
    public float speed = 1;
    public Rigidbody rig;

    [Header("输入相关")]
    public float v_Input;
    public float h_Input;

    [Header("力的大小")]
    public float currentForce;
    public float normalForce = 20;  //通常状态力
    public float boostForce = 40;  //加速时力大小
    public float jumpForce = 10;    //跳时添加的力    
    public float gravity = 20;      //在空中时往下加的力

    //力的方向
    private Vector3 forceDir_Horizontal;
    private float verticalModified;         //前后修正系数

    [Header("转弯相关")]
    public bool isDrifting;
    public DriftDirection driftDirection = DriftDirection.None;
    [Tooltip("由h_Input以及漂移影响")]
    public Quaternion rotationStream;   //用于最终旋转
    public float turnSpeed = 60;

    //Drift()
    Quaternion m_DriftOffset = Quaternion.identity;
    public DriftLevel driftLevel;

    [Header("地面检测")]
    public Transform frontHitTrans;
    public Transform rearHitTrans;
    public bool isGround;
    public float groundDistance = 0.7f;//根据车模型自行调节

    [Header("特效")]
    public Transform wheelsParticeleTrans;
    public ParticleSystem[] wheelsParticeles;
    public TrailRenderer leftTrail;
    public TrailRenderer rightTrail;
    [Header("漂移颜色有关")]
    public Color[] driftColors;
    public float driftPower = 0;


    void Start() {
        rig = GetComponent<Rigidbody>();
        forceDir_Horizontal = transform.forward;
        rotationStream = rig.rotation;

        //漂移时车轮下粒子特效
        wheelsParticeles = wheelsParticeleTrans.GetComponentsInChildren<ParticleSystem>();
    }

    void Update() {
        //输入相关
        v_Input = Input.GetAxisRaw("Vertical");     //竖直输入
        h_Input = Input.GetAxisRaw("Horizontal");   //水平输入

        //按下空格起跳
        //if (Input.GetKeyDown(KeyCode.Space)) {
        //    if (isGround)   //如果在地上
        //    {
        //        Jump();
        //    }
        //}

        //按住空格，并且有水平输入：开始漂移
        if (Input.GetKey(KeyCode.Space) && h_Input != 0) {
            //落地瞬间、不在漂移并且速度大于一定值时开始漂移
            if (isGround && !isDrifting &&
                rig.velocity.sqrMagnitude > 10) {
                StartDrift();   //开始漂移
            }
        }

        //放开空格：漂移结束
        if (Input.GetKeyUp(KeyCode.Space)) {
            if (isDrifting) {
                Boost(boostForce);//加速
                StopDrift();//停止漂移
            }
        }
    }

    private void FixedUpdate() {
        //车转向
        CheckGroundNormal();        //检测是否在地面上，并且使车与地面保持水平
        Turn();                     //输入控制左右转向

        //起步时力大小递增
        IncreaseForce();
        //漂移加速后/松开加油键力大小时递减
        ReduceForce();


        //如果在漂移
        if (isDrifting) {
            CalculateDriftingLevel();   //计算漂移等级
            ChangeDriftColor();         //根据漂移等级改变颜色
        }

        //根据上述情况，进行最终的旋转和加力
        rig.MoveRotation(rotationStream);
        //计算力的方向
        CalculateForceDir();
        //移动
        AddForceToMove();
    }

    //计算加力方向
    public void CalculateForceDir() {
        //往前加力
        if (v_Input > 0) {
            verticalModified = 1;
        } else if (v_Input < 0)//往后加力
          {
            verticalModified = -1;
        }

        forceDir_Horizontal = m_DriftOffset * transform.forward;
    }

    //加力移动
    public void AddForceToMove() {
        //计算合力
        Vector3 tempForce = verticalModified * currentForce * forceDir_Horizontal;

        if (!isGround)  //如不在地上，则加重力
        {
            tempForce = tempForce + gravity * Vector3.down;
        }

        rig.AddForce(tempForce, ForceMode.Force);
    }

    //检测是否在地面上，并且使车与地面保持水平
    public void CheckGroundNormal() {
        //从车头中心附近往下打射线,长度比发射点到车底的距离长一点
        RaycastHit frontHit;
        bool hasFrontHit = Physics.Raycast(frontHitTrans.position, -transform.up, out frontHit, groundDistance, LayerMask.GetMask("Ground"));
        if (hasFrontHit) {
            Debug.DrawLine(frontHitTrans.position, frontHitTrans.position - transform.up * groundDistance, Color.red);
        }
        //从车尾中心附近往下打射线
        RaycastHit rearHit;
        bool hasRearHit = Physics.Raycast(rearHitTrans.position, -transform.up, out rearHit, groundDistance, LayerMask.GetMask("Ground"));
        if (hasRearHit) {
            Debug.DrawLine(rearHitTrans.position, rearHitTrans.position - transform.up * groundDistance, Color.red);
        }

        if (hasFrontHit || hasRearHit)//判断是否在地面
        {
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
    public void ReduceForce() {
        float targetForce = currentForce;
        if (isGround && v_Input == 0) {
            targetForce = 0;
        } else if (currentForce > normalForce)    //用于加速后回到普通状态
          {
            targetForce = normalForce;
        }

        if (currentForce <= normalForce) {
            DisableTrail();
        }
        currentForce = Mathf.MoveTowards(currentForce, targetForce, 60 * Time.fixedDeltaTime);//每秒60递减，可调
    }

    //力递增
    public void IncreaseForce() {
        float targetForce = currentForce;
        if (v_Input != 0 && currentForce < normalForce) {
            currentForce = Mathf.MoveTowards(currentForce, normalForce, 80 * Time.fixedDeltaTime);//每秒80递增
        }
    }

    public void Turn() {
        //只能在移动时转弯
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
        float modifiedSteering = Vector3.Dot(rig.velocity, transform.forward) >= 0 ? h_Input : -h_Input;

        //输入可控转向：如果在漂移，可控角速度为30，否则平常状态为60.
        turnSpeed = driftDirection != DriftDirection.None ? 30 : 60;
        float turnAngle = modifiedSteering * turnSpeed * Time.fixedDeltaTime;
        Quaternion deltaRotation = Quaternion.Euler(0, turnAngle, 0);

        rotationStream = rotationStream * deltaRotation;//局部坐标下旋转,这里有空换一个简单的写法
    }

    public void Jump() {
        rig.AddForce(jumpForce * transform.up, ForceMode.Impulse);
    }


    //开始漂移并且决定漂移朝向
    public void StartDrift() {
        Debug.Log("Start Drift");
        isDrifting = true;

        //根据水平输入决定漂移时车的朝向，因为合速度方向与车身方向不一致，所以为加力方向添加偏移
        if (h_Input < 0) {
            driftDirection = DriftDirection.Left;
            //左漂移时，合速度方向为车头朝向的右前方，偏移具体数值需结合实际自己调试
            m_DriftOffset = Quaternion.Euler(0f, 30, 0f);
        } else if (h_Input > 0) {
            driftDirection = DriftDirection.Right;
            m_DriftOffset = Quaternion.Euler(0f, -30, 0f);
        }

        //播放漂移粒子特效
        PlayDriftParticle();
    }

    //计算漂移等级
    public void CalculateDriftingLevel() {
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


    //停止漂移
    public void StopDrift() {
        isDrifting = false;
        driftDirection = DriftDirection.None;
        driftPower = 0;
        m_DriftOffset = Quaternion.identity;
        StopDriftParticle();
    }

    //加速
    public void Boost(float boostForce) {
        //按照漂移等级加速：1 / 1.1 / 1.2
        currentForce = (1 + (int)driftLevel / 10) * boostForce;
        EnableTrail();
    }

    //播放粒子特效
    public void PlayDriftParticle() {
        foreach (var tempParticle in wheelsParticeles) {
            tempParticle.Play();
        }
    }

    //粒子颜色随漂移等级改变
    public void ChangeDriftColor() {
        foreach (var tempParticle in wheelsParticeles) {
            var t = tempParticle.main;
            t.startColor = driftColors[(int)driftLevel];
        }
    }

    //停止播放粒子特效
    public void StopDriftParticle() {
        foreach (var tempParticle in wheelsParticeles) {
            tempParticle.Stop();
        }
    }

    public void EnableTrail() {
        leftTrail.enabled = true;
        rightTrail.enabled = true;
    }

    public void DisableTrail() {
        leftTrail.enabled = false;
        rightTrail.enabled = false;
    }

    private void OnTriggerEnter(Collider other) {
        if (other.tag == "EndSign") {
            GameController.manager.timeTrialManager.EndTime = Util.GetTime() / 1000;
            Debug.Log("++++++ EndTime = " + GameController.manager.timeTrialManager.EndTime);
            Debug.Log("++++++CompleteTime =  " + GameController.manager.timeTrialManager.GetCompleteTime());
        }
    }

    public void MoveFront() {
        if (GameController.manager.timeTrialManager.InGame) {
            rig.MovePosition(transform.position + new Vector3(0, 0, 1) * speed);
        }
    }

    public void MoveBack() {
        if (GameController.manager.timeTrialManager.InGame) {
            rig.MovePosition(transform.position + new Vector3(0, 0, -1) * speed);
        }
    }

    public void MoveLeft() {
        if (GameController.manager.timeTrialManager.InGame) {
            rig.MovePosition(transform.position + new Vector3(-1, 0, 0) * speed);
        }
    }

    public void MoveRight() {
        if (GameController.manager.timeTrialManager.InGame) {
            rig.MovePosition(transform.position + new Vector3(1, 0, 0) * speed);
        }
    }
}
