package com.tastsong.crazycar.dto.req;


import com.fasterxml.jackson.annotation.JsonProperty;
import lombok.*;

@NoArgsConstructor
@AllArgsConstructor
@ToString
@Data

public class ReqUpdateAssets {
    private int id;
    @JsonProperty("is_on")
    private boolean is_on;
    private String url;
}
