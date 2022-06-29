package com.tastsong.crazycar.common;

import lombok.Getter;

public enum ResultCode {
    RC200(200,"操作成功"),
    RC999(999,"系统异常"),
    RC100(100,"服务开启限流保护,请稍后再试!"),
    RC201(201,"服务开启降级保护,请稍后再试!"),
    RC202(202,"热点参数限流,请稍后再试!"),
    RC203(203,"Missing Token"),
    RC204(204,"Token Fail"),
    RC404(404,"查询无果"),
    RC403(403,"无访问权限,请联系管理员授予权限"),
    RC423(423,"认证失败"),
    RC425(425,"无效请求"),
    RC401(401,"匿名用户访问无权限资源时的异常"),
    RC500(500,"请求异常"),

    INVALID_TOKEN(2001,"访问令牌不合法"),
    ACCESS_DENIED(2003,"没有权限访问该资源"),
    CLIENT_AUTHENTICATION_FAILED(1001,"客户端认证失败"),
    USERNAME_OR_PASSWORD_ERROR(1002,"用户名或密码错误"),
    UNSUPPORTED_GRANT_TYPE(1003, "不支持的认证模式");

    @Getter
    private final int code;

    @Getter
    private final String message;
    /**
     * 构 造 方 法
     */
    ResultCode(int code, String message) {

        this.code = code;

        this.message = message;
    }
}

