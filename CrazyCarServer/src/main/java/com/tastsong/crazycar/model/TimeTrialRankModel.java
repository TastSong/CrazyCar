package com.tastsong.crazycar.model;

import lombok.AllArgsConstructor;
import lombok.Data;
import lombok.NoArgsConstructor;
import lombok.ToString;

@NoArgsConstructor
@AllArgsConstructor
@ToString
@Data
public class TimeTrialRankModel {
    public int uid;
    public int aid;
    public int rank_num;
    public int complete_time;
    public String user_name;
}
