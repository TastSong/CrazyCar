using System.Collections;
using System.Collections.Generic;
using UnityEngine;
namespace MOBASkill 
{
    public class CostMpImpact : IImpactEffect
    {
        SkillData data;
        public void Execute(SkillDeployer deployer)
        {
            data = deployer.SkillData;
            data.owner.GetComponent<MPlayer>().Mp -= data.costMp;
        }
    }
}
