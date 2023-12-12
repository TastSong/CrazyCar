package com.tastsong.crazycar.dto.req;

import lombok.ToString;

import javax.validation.constraints.NotNull;

@ToString

public class ReqLogin {
    @NotNull
    public String UserName;
    @NotNull
    public String Password;
}
