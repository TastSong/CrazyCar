package com.tastsong.crazycar.dto.req;

import com.fasterxml.jackson.annotation.JsonProperty;
import lombok.AllArgsConstructor;
import lombok.Data;
import lombok.NoArgsConstructor;
import lombok.ToString;

import javax.validation.constraints.NotNull;

@NoArgsConstructor
@AllArgsConstructor
@ToString
@Data

public class ReqLogin {
    @NotNull
    @JsonProperty("UserName")
    private String UserName;
    @NotNull
    @JsonProperty("Password")
    private String Password;
}
