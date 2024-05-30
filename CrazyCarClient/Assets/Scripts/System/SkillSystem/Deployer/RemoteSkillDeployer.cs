using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace MOBASkill 
{
    public class RemoteSkillDeployer : SkillDeployer
    {
        float speed = 5f;
        public override void DeploySkill()
        {
            CalculateTargets();
            ImpactTargets();
        }
        private void Update()
        {
            transform.Translate(Vector3.forward * speed * Time.deltaTime);
        }
    }
}

