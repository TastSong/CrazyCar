using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace MOBASkill 
{
    public class DamageImpact : IImpactEffect
    {
        private SkillData data;
        public void Execute(SkillDeployer deployer)
        {
            data = deployer.SkillData;
            deployer.StartCoroutine(RepeatDamage(deployer));
        }
        private IEnumerator RepeatDamage(SkillDeployer deployer)//重复伤害 
        {
            float atkTime = 0;
            do
            {
                yield return new WaitForSeconds(data.attackInterval);
                float realDamage = data.attackNum;
                bool isCrit = false;
                switch (data.disappearType)
                {
                    case DisappearType.CheckOver:
                        if (data.attackTargets.Length > 0) 
                        {
                            Debug.Log("攻击成功，销毁技能");
                            foreach (var e in data.attackTargets)
                            {
                                e.GetComponent<MPlayer>().BeHit(realDamage,false);
                            }
                            deployer.Destroy();

                        }
                        break;
                    case DisappearType.TimeOver:
                        Debug.Log("持续攻击中");
                        foreach (var e in data.attackTargets)
                        {
                            if (data.skillId == 0)
                            {
                                e.GetComponent<MPlayer>().BeHit(realDamage, isCrit);
                            }
                            else 
                            {
                               e.GetComponent<MPlayer>().BeHit(realDamage, false);
                            }
                        }
                        break;
                }
                atkTime += data.attackInterval;
                deployer.CalculateTargets();
            } while (atkTime <= data.durationTime);
        }
    }
}

