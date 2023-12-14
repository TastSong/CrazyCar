package com.tastsong.crazycar.dto.req;

import lombok.AllArgsConstructor;
import lombok.Data;
import lombok.NoArgsConstructor;
import lombok.ToString;

import javax.validation.constraints.NotNull;

@NoArgsConstructor
@AllArgsConstructor
@ToString
@Data
public class ReqUpdateMatchMap {
    @NotNull
    private int cid;
    @NotNull
    private int star;
    @NotNull
    private int map_id;
    @NotNull
    private boolean has_water;
    @NotNull
    private int limit_time;
    @NotNull
    private String class_name;
    @NotNull
    private int times;
}
