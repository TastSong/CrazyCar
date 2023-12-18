package com.tastsong.crazycar.dto.req;


import lombok.*;

import javax.validation.constraints.NotNull;

@NoArgsConstructor
@AllArgsConstructor
@ToString
@Data
public class ReqBackgroundLogin {
    @NotNull
    private String username;
    @NotNull
    private String password;
}
