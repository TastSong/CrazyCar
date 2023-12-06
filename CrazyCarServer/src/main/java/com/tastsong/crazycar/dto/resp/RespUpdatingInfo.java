package com.tastsong.crazycar.dto.resp;

import lombok.*;

@NoArgsConstructor
@AllArgsConstructor
@ToString
@Data
public class RespUpdatingInfo {
    @Getter(value =  lombok.AccessLevel.NONE)
    @Setter(value =  lombok.AccessLevel.NONE)
    public boolean is_forced_updating;

    private String url;
}
