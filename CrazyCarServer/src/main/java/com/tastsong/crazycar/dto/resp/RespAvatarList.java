package com.tastsong.crazycar.dto.resp;

import lombok.AllArgsConstructor;
import lombok.Data;
import lombok.NoArgsConstructor;
import lombok.ToString;

import java.util.ArrayList;
import java.util.List;

@NoArgsConstructor
@AllArgsConstructor
@ToString
@Data
public class RespAvatarList {
    private List<RespAvatar> avatars = new ArrayList<>();
    private int cur_aid;
}
