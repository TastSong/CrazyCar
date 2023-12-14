package com.tastsong.crazycar.model;

import com.fasterxml.jackson.annotation.JsonProperty;

public class TimeTrialInfoModel {
    public int cid;
    public int star;
    public int map_id;
    public boolean has_water;
    public int limit_time;
    public String class_name;
    public int times;
    @JsonProperty("is_has")
    public boolean is_has;
}
