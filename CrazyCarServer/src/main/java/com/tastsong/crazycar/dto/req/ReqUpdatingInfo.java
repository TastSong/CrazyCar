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

public class ReqUpdatingInfo {
    @NotNull
    private String version;
    @NotNull
    private String platform;
}
