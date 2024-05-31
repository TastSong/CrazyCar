using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace MOBASkill 
{
    public class RemoteSkillDeployer : SkillDeployer
    {
        float speed = 4f;
        public override void DeploySkill()
        {
            CalculateTargets();
            ImpactTargets();
            
            // 速度需要叠加
            speed *= skillData.owner.GetComponent<Rigidbody>().velocity.magnitude;
        }
        private void Update()
        {
            transform.Translate(Vector3.forward * speed * Time.deltaTime);
        }
    }
}

