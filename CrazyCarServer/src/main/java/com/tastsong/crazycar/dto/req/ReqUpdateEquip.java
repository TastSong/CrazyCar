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

public class ReqUpdateEquip {
    @NotNull
    private int eid;
    @NotNull
    private String rid;
    @NotNull
    private String equip_name;
    @NotNull
    private int star;
    @NotNull
    private int mass;
    @NotNull
    private int power;
    @NotNull
    private int max_power;
    @NotNull
    private boolean can_wade;
    @NotNull
    private boolean is_show;
}
