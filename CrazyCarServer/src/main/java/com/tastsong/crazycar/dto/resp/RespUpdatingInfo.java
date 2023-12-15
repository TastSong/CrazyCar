package com.tastsong.crazycar.dto.resp;

import com.fasterxml.jackson.annotation.JsonProperty;
import lombok.*;

@NoArgsConstructor
@AllArgsConstructor
@ToString
@Data
public class RespUpdatingInfo {
    @JsonProperty("is_forced_updating")
    private boolean is_forced_updating;
    private String url;
}
