package com.tastsong.crazycar.dto.resp;

import lombok.AllArgsConstructor;
import lombok.Data;
import lombok.NoArgsConstructor;
import lombok.ToString;

@NoArgsConstructor
@AllArgsConstructor
@ToString
@Data
public class RespMatchRank {
    private int uid;
    private int aid;
    private int rank_num;
    private int complete_time;
    private String user_name;
}
