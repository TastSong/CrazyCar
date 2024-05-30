using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;

namespace MOBASkill 
{
    public class MoveImpact : IImpactEffect
    {
        private SkillData data;
        public void Execute(SkillDeployer deployer)
        {
            data = deployer.SkillData;
            Vector3 endPos = GameObject.Find(data.skillIndicator).transform.Find("endPos").position;
            deployer.StartCoroutine(DisplacementOccurred(deployer, endPos));
        }
        IEnumerator DisplacementOccurred(SkillDeployer deployer, Vector3 pos)  
        {
            while (Vector3.Distance(data.owner.transform.position, pos) > 0.5f) 
            {
                data.owner.transform.position = Vector3.MoveTowards(data.owner.transform.position, pos, 10 * Time.deltaTime);
                yield return 0;
            }
        }
    }
}

