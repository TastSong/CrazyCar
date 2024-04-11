package com.tastsong.crazycar.model;

import com.baomidou.mybatisplus.annotation.IdType;
import com.baomidou.mybatisplus.annotation.TableId;
import com.baomidou.mybatisplus.annotation.TableName;
import com.fasterxml.jackson.annotation.JsonProperty;
import lombok.*;

import javax.persistence.*;

@Entity
@Table(name = ConstModelNameAttribute.ASSETS_UPDATING)
@TableName(ConstModelNameAttribute.ASSETS_UPDATING)
@NoArgsConstructor
@AllArgsConstructor
@ToString
@Data
public class AssetsUpdatingModel {
    @Id  //标注主键
    @TableId(type = IdType.AUTO) //mybatis-plus注解
    @GeneratedValue(strategy = GenerationType.IDENTITY) //id自增策略
    private int id;
    private long update_time;
    @JsonProperty("is_on")
    private boolean is_on;
    private String url;
}
