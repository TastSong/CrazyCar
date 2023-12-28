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
@Table(name = ConstModelNameAttribute.TIME_TRIAL_CLASS)
@TableName(ConstModelNameAttribute.TIME_TRIAL_CLASS)
@NoArgsConstructor
@AllArgsConstructor
@ToString
@Data
public class TimeTrialClassModel {
    @Id  //标注主键
    @TableId(type = IdType.AUTO) //mybatis-plus注解
    @GeneratedValue(strategy = GenerationType.IDENTITY) //id自增策略
    private int cid;

    private int star;
    private int map_id;
    private boolean has_water;
    private int limit_time;
    private String class_name;
    private int times;
}
