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

public class ReqRoomMsg {
    @NotNull
    private int msg_type;
    private int uid;
    private String token;
    private String room_id;
    private int cid;
}
