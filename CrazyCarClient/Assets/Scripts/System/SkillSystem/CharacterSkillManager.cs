using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace MOBASkill 
{
    public class CharacterSkillManager : MonoBehaviour
    {
        public SkillData[] Skills;//技能列表

        private void Awake()
        {
            foreach (var s in Skills)
            {
                InitSkill(s);
                Debug.Log(s.skillIndicator);
            }
        }
        //初始化技能
        private void InitSkill(SkillData data)
        {
            if (data.prefabName != null)
            {
                data.skillPrefab = Resources.Load<GameObject>("SkillPrefab/"+data.prefabName);
                data.skillIcon = Resources.Load<Sprite>("SkillIcon/" + data.skillIconName);
                data.owner = this.gameObject;
            }
        }
        //技能释放条件判断
        public SkillData PrepareSkill(int id)
        {
            SkillData data = new SkillData();
            foreach (var s in Skills)
            {
                if (s.skillId == id)
                {
                    data = s;
                }
            }
            if (data != null && data.cdRemain <= 0)//还有法力值判断
            {
                return data;
            }
            else
            {
                return null;
            }
        }
        //生成技能
        public void GenerateSkill(SkillData data)
        {
            //创建技能预制体
            GameObject skillgo = Instantiate(data.skillPrefab, transform.position, transform.rotation);
            Debug.Log(" GenerateSkill: " + JsonUtility.ToJson(data));
            Destroy(skillgo, data.durationTime);
            //传递技能数据
            SkillDeployer deployer = skillgo.GetComponent<SkillDeployer>();
            deployer.SkillData = data;
            deployer.DeploySkill();
            StartCoroutine(CoolTimeDown(data));//开启冷却
        }
        //技能冷却
        private IEnumerator CoolTimeDown(SkillData data)
        {
            data.cdRemain = data.skillCd;
            while (data.cdRemain > 0)
            {
                yield return new WaitForSeconds(1f);
                data.cdRemain -= 1;
                Debug.Log("当前技能" + data.name + "冷却剩余时间" + data.cdRemain);
            }
        }
        //技能升级
        public void SkillLevelUp(int id) 
        {
            foreach (SkillData s in Skills)
            {
                if (s.skillId == id) 
                {
                    s.level += 1;
                }
            }
        }
    }
}

