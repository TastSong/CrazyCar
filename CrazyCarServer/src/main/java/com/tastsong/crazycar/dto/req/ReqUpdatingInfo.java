package com.tastsong.crazycar.dto.req;


import lombok.AllArgsConstructor;
import lombok.Data;
import lombok.NoArgsConstructor;
import lombok.ToString;

@NoArgsConstructor
@AllArgsConstructor
@ToString
@Data

public class ReqUpdatingInfo {
    private String version;
    private String platform;
}
