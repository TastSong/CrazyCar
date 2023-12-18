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
public class RespEquip {
    private int eid;
    private String rid;
    private String equip_name;
    private int star;
    private int mass;
    private int power;
    private int max_power;
    private boolean can_wade;
    @JsonProperty("is_show")
    private boolean is_show;
    @JsonProperty("is_has")
    private boolean is_has;
}
