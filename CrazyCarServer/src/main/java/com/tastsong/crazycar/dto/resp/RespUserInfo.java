package com.tastsong.crazycar.dto.resp;

import com.tastsong.crazycar.model.EquipModel;

public class RespUserInfo {
    public String user_name;
    public int uid;
    public int aid;
    public int star;
    public boolean is_vip;
    public boolean is_superuser;
    public int avatar_num;
    public int travel_times;
    public int map_num;

    public EquipModel equip_info;

    public String token;
}
