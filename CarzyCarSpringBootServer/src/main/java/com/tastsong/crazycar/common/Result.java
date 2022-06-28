package com.tastsong.crazycar.common;

import lombok.Data;

import java.io.Serializable;

import com.alibaba.fastjson.JSON;

/**
 * Author: didiplus
 * Email: 972479352@qq.com
 * CreateTime: 2022/4/24
 * Desc: Ajax 返 回 JSON 结 果 封 装 数 据
 */

@Data
public class Result<T> implements Serializable {

    /**
     * 是否返回成功
     */
    private boolean success;

    /**
     * 错误状态
     */
    private int code;

    /***
     * 错误信息
     */
    private String msg;

    /**
     * 返回数据
     */
    private T data;

    /**
     * 时间戳
     */
    private long timestamp ;


    public Result (){
        this.timestamp = System.currentTimeMillis();
    }
    /**
     * 成功的操作
     */
    public static <T> Result<T> success() {
        return  success(null);
    }

    /**
     * 成 功 操 作 , 携 带 数 据
     */
    public static <T> Result<T> success(T data){
        return success(ResultCode.RC100.getMessage(),data);
    }

    /**
     * 成 功 操 作, 携 带 消 息
     */
    public static <T> Result<T> success(String message) {
        return success(message, null);
    }

        /**
         * 成 功 操 作, 携 带 消 息 和 携 带 数 据
         */
    public static <T> Result<T> success(String message, T data) {
        return success(ResultCode.RC100.getCode(), message, data);
    }

    /**
     * 成 功 操 作, 携 带 自 定 义 状 态 码 和 消 息
     */
    public static <T> Result<T> success(int code, String message) {
        return success(code, message, null);
    }

    public static <T> Result<T> success(int code,String message,T data) {
        Result<T> result = new Result<T>();
        result.setCode(code);
        result.setMsg(message);
        result.setSuccess(true);
        result.setData(data);
        return result;
    }

    /**
     * 失 败 操 作, 默 认 数 据
     */
    public static <T> Result<T> failure() {
        return failure(ResultCode.RC100.getMessage());
    }

    /**
     * 失 败 操 作, 携 带 自 定 义 消 息
     */
    public static <T> Result<T> failure(String message) {
        return failure(message, null);
    }

    /**
     * 失 败 操 作, 携 带 自 定 义 消 息 和 数 据
     */
    public static <T> Result<T> failure(String message, T data) {
        return failure(ResultCode.RC999.getCode(), message, data);
    }

    /**
     * 失 败 操 作, 携 带 自 定 义 状 态 码 和 自 定 义 消 息
     */
    public static <T> Result<T> failure(int code, String message) {
        return failure(ResultCode.RC999.getCode(), message, null);
    }

    /**
     * 失 败 操 作, 携 带 自 定 义 状 态 码 , 消 息 和 数 据
     */
    public static <T> Result<T> failure(int code, String message, T data) {
        Result<T> result = new Result<T>();
        result.setCode(code);
        result.setMsg(message);
        result.setSuccess(false);
        result.setData(data);
        return result;
    }

    /**
     * Boolean 返 回 操 作, 携 带 默 认 返 回 值
     */
    public static <T> Result<T> decide(boolean b) {
        return decide(b, ResultCode.RC100.getMessage(), ResultCode.RC999.getMessage());
    }

    /**
     * Boolean 返 回 操 作, 携 带 自 定 义 消 息
     */
    public static <T> Result<T> decide(boolean b, String success, String failure) {
        if (b) {
            return success(success);
        } else {
            return failure(failure);
        }
    }
}
