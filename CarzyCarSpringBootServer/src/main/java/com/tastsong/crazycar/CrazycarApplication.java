package com.tastsong.crazycar;

import org.mybatis.spring.annotation.MapperScan;
import org.springframework.boot.SpringApplication;
import org.springframework.boot.autoconfigure.SpringBootApplication;
import org.springframework.boot.web.servlet.ServletComponentScan;

@ServletComponentScan
@SpringBootApplication
@MapperScan("com.tastsong.crazycar")
public class CrazycarApplication {

	public static void main(String[] args) {
		SpringApplication.run(CrazycarApplication.class, args);
	}

}
