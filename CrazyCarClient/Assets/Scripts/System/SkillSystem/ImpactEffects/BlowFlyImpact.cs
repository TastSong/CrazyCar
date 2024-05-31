using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace MOBASkill
{
    public class BlowFlyImpact : IImpactEffect
    {
        private SkillData data;
        public void Execute(SkillDeployer deployer)
        {
            data = deployer.SkillData;
            deployer.StartCoroutine(ContinuousBlowFly(deployer));
        }
        public void BlowFly(Transform transform) 
        {
            // 此处处理击飞效果 禁用被击飞对象功能
            // CharacterData cd = transform.GetComponent<CharacterData>();
            // BuffManager.instance.AllBuffs[0].currentTarget = cd;
            // cd.AddBuff(BuffManager.instance.AllBuffs[0]);
            // Debug.Log(cd.name);
        }
        IEnumerator ContinuousBlowFly(SkillDeployer deployer) 
        {
            float _time = 0;
            Debug.Log("-----------进入协程");
            do
            {
                Debug.Log("击飞判定"+"time: "+_time);
                yield return new WaitForSeconds(0.05f);
                _time += 0.05f;
                deployer.CalculateTargets();               
                if (data.attackTargets.Length != 0) 
                {
                    foreach (var t in data.attackTargets) 
                    {
                        BlowFly(t);
                    }
                }
            } while (_time < 0.4f);
        }
    }
}

