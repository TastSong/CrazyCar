package com.tastsong.crazycar.model;

import com.baomidou.mybatisplus.annotation.IdType;
import com.baomidou.mybatisplus.annotation.TableId;
import com.baomidou.mybatisplus.annotation.TableName;
import com.fasterxml.jackson.annotation.JsonProperty;
import lombok.AllArgsConstructor;
import lombok.Data;
import lombok.NoArgsConstructor;
import lombok.ToString;

import javax.persistence.*;

@Entity
@Table(name = ConstModelNameAttribute.EQUIP)
@TableName(ConstModelNameAttribute.EQUIP)
@NoArgsConstructor
@AllArgsConstructor
@ToString
@Data
public class EquipModel {
    @Id  //标注主键
    @TableId(type = IdType.AUTO) //mybatis-plus注解
    @GeneratedValue(strategy = GenerationType.IDENTITY) //id自增策略
    private int eid;

    private String rid;
    private String equip_name;
    private int star;
    private int mass;
    private int power;
    private int max_power;
    private boolean can_wade;
    @JsonProperty("is_show")
    private boolean is_show;
}
