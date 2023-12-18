package com.tastsong.crazycar.dto.resp;


import cn.hutool.json.JSONArray;
import lombok.AllArgsConstructor;
import lombok.Data;
import lombok.NoArgsConstructor;
import lombok.ToString;

@NoArgsConstructor
@AllArgsConstructor
@ToString
@Data

public class RespExitRoom {
    private int exit_uid;
    private JSONArray players;
}
