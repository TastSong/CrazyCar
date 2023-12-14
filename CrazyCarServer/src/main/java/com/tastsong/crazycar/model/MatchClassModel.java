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
@Table(name = ConstModelNameAttribute.MATCH_CLASS)
@TableName(ConstModelNameAttribute.MATCH_CLASS)
@NoArgsConstructor
@AllArgsConstructor
@ToString
@Data
public class MatchClassModel {
    @Id  //标注主键
    @TableId(type = IdType.AUTO) //mybatis-plus注解
    @GeneratedValue(strategy = GenerationType.IDENTITY) //id自增策略
    public int cid;
    public int map_id;
    public int star;
    public String room_id;
    public int limit_time;
    public String class_name;
    public int times;
    public long start_time;
    public long enroll_time;
}
