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
@Table(name = ConstModelNameAttribute.USER)
@TableName(ConstModelNameAttribute.USER)
@NoArgsConstructor
@AllArgsConstructor
@ToString
@Data
public class UserModel {
    @Id  //标注主键
    @TableId(type = IdType.AUTO) //mybatis-plus注解
    @GeneratedValue(strategy = GenerationType.IDENTITY) //id自增策略
    private int uid;
    private String user_name;
    private String user_password;
    private Long login_time;
    private int aid;
    private int star;
    private boolean is_vip;
    private int eid;
}
