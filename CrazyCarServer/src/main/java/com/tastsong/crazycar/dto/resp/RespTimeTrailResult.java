package com.tastsong.crazycar.dto.resp;

import com.fasterxml.jackson.annotation.JsonProperty;
import lombok.AllArgsConstructor;
import lombok.Data;
import lombok.NoArgsConstructor;
import lombok.ToString;

@NoArgsConstructor
@AllArgsConstructor
@ToString
@Data
public class RespTimeTrailResult {
    private int complete_time;
    @JsonProperty("is_win")
    private boolean is_win;
    @JsonProperty("is_break_record")
    private boolean is_break_record;
    private int reward;
    private int rank;
}
