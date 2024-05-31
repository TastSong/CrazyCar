using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using StatusIndicators.Components;

namespace MOBASkill 
{
    //近战技能释放例子
    public class PointSkillDeployer : SkillDeployer
    {
        public override void DeploySkill()
        {
            //执行选区算法
            CalculateTargets();
            //执行影响算法
            ImpactTargets();
        }

        public void Start() {
            // 这个技能的位置应该在技能指向器的方向 距离拥有者4米
            transform.position = skillData.owner.GetComponent<SplatManager>().GetSpellCursorPosition();
        }
    }
}