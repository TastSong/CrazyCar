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
@Table(name = ConstModelNameAttribute.USER)
@TableName(ConstModelNameAttribute.USER)
@NoArgsConstructor
@AllArgsConstructor
@ToString
@Data
public class UserModel {
    @Id
    @TableId(type = IdType.AUTO)
    @GeneratedValue(strategy = GenerationType.IDENTITY)
    private int uid;
    private String user_name;
    private String user_password;
    private Long login_time;
    private int aid;
    private int star;
    @JsonProperty("is_vip")
    private boolean is_vip;
    private int eid;
}
