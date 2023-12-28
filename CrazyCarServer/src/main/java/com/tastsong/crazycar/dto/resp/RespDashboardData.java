package com.tastsong.crazycar.dto.resp;

import lombok.AllArgsConstructor;
import lombok.Data;
import lombok.NoArgsConstructor;
import lombok.ToString;

import java.util.List;

@NoArgsConstructor
@AllArgsConstructor
@ToString
@Data
public class RespDashboardData {
    private int user_num;
    private int equip_num;
    private int avatar_num;
    private int map_num;
    private int time_trial_times;
    private int match_times;
    private List<RespDataStatistics> login_user_num;
    private List<RespDataStatistics> time_trial_num;
    private List<RespDataStatistics> match_num;
}
