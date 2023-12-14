package com.tastsong.crazycar.dto.resp;

import com.fasterxml.jackson.annotation.JsonProperty;
import com.tastsong.crazycar.model.EquipModel;

public class RespUserInfo {
    public String user_name;
    public int uid;
    public int aid;
    public int star;
    @JsonProperty("is_vip")
    public boolean is_vip;
    @JsonProperty("is_superuser")
    public boolean is_superuser;
    public int avatar_num;
    public int travel_times;
    public int map_num;

    public RespEquip equip_info;

    public String token;
}
