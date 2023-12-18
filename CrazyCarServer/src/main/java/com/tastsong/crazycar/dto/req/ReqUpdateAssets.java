package com.tastsong.crazycar.dto.req;


import com.fasterxml.jackson.annotation.JsonProperty;
import lombok.*;

import javax.validation.constraints.NotNull;

@NoArgsConstructor
@AllArgsConstructor
@ToString
@Data

public class ReqUpdateAssets {
    @NotNull
    private int id;
    @JsonProperty("is_on")
    private boolean is_on;
    private String url;
}
