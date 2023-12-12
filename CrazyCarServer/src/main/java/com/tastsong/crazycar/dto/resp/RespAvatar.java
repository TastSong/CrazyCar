package com.tastsong.crazycar.dto.resp;

import lombok.*;

@NoArgsConstructor
@AllArgsConstructor
@ToString
@Data
public class RespAvatar {
    private int aid;
    private String rid;
    private String avatar_name;
    private int star;
    private boolean is_has;
}
