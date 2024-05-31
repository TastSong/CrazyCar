using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using StatusIndicators.Components;

namespace MOBASkill 
{
    public class CharacterSkillSystem : MonoBehaviour //封装技能系统，提供简单的技能释放功能
    {
        private CharacterSkillManager skillManager;
        private Animator animator;
        public SplatManager sm;

        public SkillData skill;
        
        public bool isSkillChooseTime;
        private int currentSkillnum;

        private int count;

        private void Awake() {
            isSkillChooseTime = false;
            currentSkillnum = -1;
        }

        private void Start()
        {
            skillManager = GetComponent<CharacterSkillManager>();
            animator = GetComponent<Animator>();
            sm = GetComponent<SplatManager>();

            count = 0;
        }
        public void DeploySkill() 
        {
            skillManager.GenerateSkill(skill);
        }
        public bool OpenSkillIndicator(int skillID) 
        {
            skill = skillManager.PrepareSkill(skillID);
            if (skill == null || skill.skillIndicator == "")
            {
                Debug.Log("不存在技能指示器" );
                return false;
            }
            else
            {
                Debug.Log("打开技能指示器");
                sm.SelectSpellIndicator(skill.skillIndicator);
                return true;
            }
        }
        public void CloseSkillIndicator() 
        {
            sm.CancelSpellIndicator();
        }
        public void AttackUseSkill(int skillID)
        {
            skill = skillManager.PrepareSkill(skillID);
            if (skill == null) { return; }
            if (skill.animationName.Length != 1)
            {
                animator.Play(skill.animationName[count]);
                count += 1;
                if (count >= skill.animationName.Length) 
                {
                    count = 0;
                }
            }
            else 
            {
                animator.Play(skill.animationName[0]);
            }
            DeploySkill();
        }

        private void Update() {
            if (!isSkillChooseTime) {
                if (Input.GetKeyDown(KeyCode.Q)) {
                    OnSkillChoose(0);
                }
            }
            
            if (isSkillChooseTime && Input.GetMouseButtonDown(0)) {
                ReleaseSkill(currentSkillnum);
            }
        }

        public void ReleaseSkill(int id) 
        {
            AttackUseSkill(id);
            CloseSkillIndicator();
            isSkillChooseTime = false;
        }
    
        public void OnSkillChoose(int id) {
            currentSkillnum = skillManager.Skills[id].skillId;
            if (!OpenSkillIndicator(currentSkillnum)) {
                ReleaseSkill(currentSkillnum);
            }
            else {
                isSkillChooseTime = true;
            }
        }
    }
}


