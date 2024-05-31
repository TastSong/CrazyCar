using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AddressableAssets;

namespace MOBASkill 
{
    public class SkillDataArray
    {
        public SkillData[] skillArray;
    }
    public class CharacterSkillManager : MonoBehaviour
    {
        public SkillData[] Skills;//技能列表

        private void Awake()
        {
            Addressables.LoadAssetAsync<TextAsset>("Assets/AB/Skill/SkillData.json").Completed += (text) => {
                SkillDataArray dataArray  = JsonUtility.FromJson<SkillDataArray>(text.Result.text);
                Skills = dataArray.skillArray;
                foreach (var s in dataArray.skillArray)
                {
                    InitSkill(s);
                    Debug.Log(JsonUtility.ToJson(s));
                }
            };
        }
        //初始化技能
        private void InitSkill(SkillData data)
        {
            if (data.prefabName != null)
            {
                Addressables.LoadAssetAsync<GameObject>("Assets/AB/Skill/SkillPrefab/" + data.prefabName + ".prefab").Completed += (go) => {
                    data.skillPrefab = go.Result;
                };
                Addressables.LoadAssetAsync<Sprite>("Assets/AB/Skill/SkillIcon/" + data.skillIconName + ".png").Completed += (sprite) => {
                    data.skillIcon = sprite.Result;
                };
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

