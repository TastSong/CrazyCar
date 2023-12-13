package com.tastsong.crazycar.dto.resp;

import lombok.*;

@NoArgsConstructor
@AllArgsConstructor
@ToString
@Data
public class RespUpdatingInfo {
    public boolean is_forced_updating;
    private String url;
}
