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
public class ReqUpdateTimeTrialClass {
    @NotNull
    public int cid;
    @NotNull
    public int star;
    @NotNull
    public int map_id;
    @NotNull
    public boolean has_water;
    @NotNull
    public int limit_time;
    @NotNull
    public String class_name;
    @NotNull
    public int times;
}
