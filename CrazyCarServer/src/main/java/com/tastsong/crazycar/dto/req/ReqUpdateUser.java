package com.tastsong.crazycar.dto.req;

import com.fasterxml.jackson.annotation.JsonProperty;
import lombok.AllArgsConstructor;
import lombok.Data;
import lombok.NoArgsConstructor;
import lombok.ToString;

@NoArgsConstructor
@AllArgsConstructor
@ToString
@Data
public class ReqUpdateUser {
    private int uid;
    private String user_name;
    private String user_password;
    private int star;
    @JsonProperty("is_vip")
    private boolean is_vip;
}
