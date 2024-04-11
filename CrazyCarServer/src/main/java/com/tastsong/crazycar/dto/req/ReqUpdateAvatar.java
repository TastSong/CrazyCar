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

public class ReqUpdateAvatar {
    @NotNull
    private int aid;
    private String rid;
    private String avatar_name;
    private int star;
}
