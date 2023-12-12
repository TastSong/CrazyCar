package com.tastsong.crazycar.dto.req;


import lombok.*;

@NoArgsConstructor
@AllArgsConstructor
@ToString
@Data

public class ReqUpdateAssets {
    private int id;
    @Getter
    @Setter
    public boolean is_on;
    public String url;
}
