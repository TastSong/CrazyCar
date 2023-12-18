package com.tastsong.crazycar.dto.resp;

import lombok.AllArgsConstructor;
import lombok.Data;
import lombok.NoArgsConstructor;
import lombok.ToString;

import java.util.ArrayList;
import java.util.List;

@NoArgsConstructor
@AllArgsConstructor
@ToString
@Data
public class RespEquipList {
    private List<RespEquip> equips = new ArrayList<>();
    private int curEid;
}
