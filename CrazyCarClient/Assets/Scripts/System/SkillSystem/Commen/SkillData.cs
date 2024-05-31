using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Utils;

namespace MOBASkill
{
    public enum SkillAttackType
    {
        single,
        aoe,
    }
    public enum SelectorType
    {
        none,
        Sector,
        Rectangular,
    }
    public enum DisappearType 
    {
        TimeOver,
        CheckOver,
    }

    [Serializable]
    public class SkillData
    {
        public int skillId;//技能ID
        public string name;//技能名字
        public string description;//技能描述
        public float skillCd;//技能CD
        public float cdRemain;//技能CD计数器
        public int costMp;//消耗量
        public float attackDistance;//技能距离
        public float attackAngle;//技能攻击角度
        public string[] attackTargetTags = { TagName.player };//可攻击的目标Tag
        [HideInInspector]
        public Transform[] attackTargets;//攻击目标对象数组
        public string[] impactType = { "CostMP", "Damage" };//技能影响类型
        public int nextBatterld;//连击的写一个技能编号----暂时不用
        public float attackNum;//伤害数值
        public float durationTime;//持续时间
        public float attackInterval;//伤害间隔
        [HideInInspector]
        public GameObject owner;//技能所属的角色
        public string prefabName;//技能预制体名称
        [HideInInspector]
        public GameObject skillPrefab;//预制体对象
        public string[] animationName ;//动画名称
        public string hitFxName;//受击特效名称
        [HideInInspector]
        public GameObject hitFxPrefab;//受击特效预制体
        public int level;//技能等级
        public SkillAttackType attackType;//AOE或者单体
        public SelectorType selectorType;//释放类型（圆形，扇形，矩形）
        public string skillIndicator;//技能指示器名字
        public string skillIconName;//技能显示图标名字
        [HideInInspector]
        public Sprite skillIcon;//技能事件图标
        public DisappearType disappearType;//技能预制体消失方式      
    }
}

