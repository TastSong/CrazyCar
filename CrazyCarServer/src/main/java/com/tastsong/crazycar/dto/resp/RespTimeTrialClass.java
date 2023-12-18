package com.tastsong.crazycar.dto.resp;

import com.fasterxml.jackson.annotation.JsonProperty;
import lombok.AllArgsConstructor;
import lombok.Data;
import lombok.NoArgsConstructor;
import lombok.ToString;

@NoArgsConstructor
@AllArgsConstructor
@ToString
@Data
public class RespTimeTrialClass {
    private int cid;
    private int star;
    private int map_id;
    private boolean has_water;
    private int limit_time;
    private String class_name;
    private int times;
    @JsonProperty("is_has")
    private boolean is_has;
}
