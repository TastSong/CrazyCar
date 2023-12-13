package com.tastsong.crazycar.model;

import com.baomidou.mybatisplus.annotation.IdType;
import com.baomidou.mybatisplus.annotation.TableId;
import com.baomidou.mybatisplus.annotation.TableName;
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
    public int eid;

    public String rid;
    public String equip_name;
    public int star;
    public int mass;
    public int power;
    public int max_power;
    public boolean can_wade;
    public boolean is_show;
    public boolean is_has;
}
