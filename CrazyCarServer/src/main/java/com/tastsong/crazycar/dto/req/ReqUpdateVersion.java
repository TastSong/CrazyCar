package com.tastsong.crazycar.dto.req;

import com.baomidou.mybatisplus.annotation.IdType;
import com.baomidou.mybatisplus.annotation.TableId;
import com.baomidou.mybatisplus.annotation.TableName;
import com.tastsong.crazycar.model.ConstModelNameAttribute;
import lombok.AllArgsConstructor;
import lombok.Data;
import lombok.NoArgsConstructor;
import lombok.ToString;

import javax.persistence.*;
import javax.validation.constraints.NotNull;

@NoArgsConstructor
@AllArgsConstructor
@ToString
@Data
public class ReqUpdateVersion {
    @NotNull
    private int id;
    @NotNull
    private String platform;
    @NotNull
    private String version;
    @NotNull
    private int rule;
    @NotNull
    private String url;
}
