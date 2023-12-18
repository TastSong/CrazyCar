package com.tastsong.crazycar.dto.resp;

import com.fasterxml.jackson.annotation.JsonProperty;
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
    @JsonProperty("is_has")
    private boolean is_has;
}
