package com.tastsong.crazycar.dto.resp;


import lombok.AllArgsConstructor;
import lombok.Data;
import lombok.NoArgsConstructor;
import lombok.ToString;

@NoArgsConstructor
@AllArgsConstructor
@ToString
@Data

public class RespRoomMsg {
    private int msg_type;
    private int uid;
    private String room_id;
    private int code;
    private Object data;
}
