package com.tastsong.crazycar.dto.resp;

import com.tastsong.crazycar.model.AvatarModel;
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
public class RespConfig {
    private List<AvatarModel> avatars = new ArrayList<>();
}
