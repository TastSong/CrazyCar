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
@Table(name = ConstModelNameAttribute.USER_LOGIN_RECORD)
@TableName(ConstModelNameAttribute.USER_LOGIN_RECORD)
@NoArgsConstructor
@AllArgsConstructor
@ToString
@Data
public class UserLoginRecordModel {
    @Id  //标注主键
    @TableId(type = IdType.AUTO) //mybatis-plus注解
    @GeneratedValue(strategy = GenerationType.IDENTITY) //id自增策略
    private long id;
    private int uid;
    private long login_time;
    private String place;
    private String device;
}
