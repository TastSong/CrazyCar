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
@Table(name = ConstModelNameAttribute.MATCH_RECORD)
@TableName(ConstModelNameAttribute.MATCH_RECORD)
@NoArgsConstructor
@AllArgsConstructor
@ToString
@Data
public class MatchRecordModel {
    @Id  //标注主键
    @TableId(type = IdType.AUTO) //mybatis-plus注解
    @GeneratedValue(strategy = GenerationType.IDENTITY) //id自增策略
    private long id;
    private int uid;
    private int cid;
    private int complete_time;
    private long record_time;
}
