using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace MOBASkill 
{
    public abstract class SkillDeployer : MonoBehaviour//技能释放器
    {
        protected SkillData skillData;
        public SkillData SkillData //技能管理器提供
        {
            get { return skillData; }
            set { skillData = value; InitDeplopyer(); }
        }
        //选区算法
        private IAttackSelector selector;
        //影响算法对象 
        private IImpactEffect[] impactArray;
        //初始化释放器
        private void InitDeplopyer()//初始化释放器 
        {
            //选区
            selector = DeployerConfigFactory.CreateAttackSelector(skillData);
            //影响
            impactArray = DeployerConfigFactory.CreateImpactEffects(skillData);
        }
        //选区
        public void CalculateTargets() 
        {
            skillData.attackTargets = selector.SelectTarget(skillData, this.transform);
        }
        //影响
        public void ImpactTargets() 
        {
            for (int i = 0; i < impactArray.Length; i++)
            {
                impactArray[i].Execute(this);
            }
        }
        public void Destroy()
        {
            Destroy(this.gameObject);
        }
        public abstract void DeploySkill();//供技能管理器调用，由子类实现，定义具体释放策略
    }
}

