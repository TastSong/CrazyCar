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
public class RespUserDetail {
    private String user_name;
    private int uid;
    private int aid;
    private int star;
    @JsonProperty("is_vip")
    private boolean is_vip;
    @JsonProperty("is_superuser")
    private boolean is_superuser;
    private int avatar_num;
    private int travel_times;
    private int map_num;

    private RespEquip equip_info;

    private String token;
}
