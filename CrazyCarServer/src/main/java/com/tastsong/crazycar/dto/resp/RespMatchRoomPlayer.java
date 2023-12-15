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
public class RespMatchRoomPlayer {
    private int uid;
    private String member_name;
    private int aid;
    @JsonProperty("is_house_owner")
    private boolean is_house_owner;
    private boolean can_wade;
}
