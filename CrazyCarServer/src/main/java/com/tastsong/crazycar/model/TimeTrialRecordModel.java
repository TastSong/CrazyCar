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
@Table(name = ConstModelNameAttribute.TIME_TRIAL_RECORD)
@TableName(ConstModelNameAttribute.TIME_TRIAL_RECORD)
@NoArgsConstructor
@AllArgsConstructor
@ToString
@Data
public class TimeTrialRecordModel {
    @Id  //标注主键
    @TableId(type = IdType.AUTO) //mybatis-plus注解
    @GeneratedValue(strategy = GenerationType.IDENTITY) //id自增策略
    public long id;
    public int uid;
    public int cid;
    public int complete_time;
    public int record_time;
}
