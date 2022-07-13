package com.tastsong.crazycar;

import org.mybatis.spring.annotation.MapperScan;
import org.springframework.boot.SpringApplication;
import org.springframework.boot.autoconfigure.SpringBootApplication;
import org.springframework.boot.web.servlet.ServletComponentScan;
import org.springframework.scheduling.annotation.EnableScheduling;

@ServletComponentScan
@SpringBootApplication
@MapperScan("com.tastsong.crazycar")
@EnableScheduling
public class CrazycarApplication {

	public static void main(String[] args) {
		SpringApplication.run(CrazycarApplication.class, args);

		System.out.println("     _____                        _____                                            ");
		System.out.println("    / ____|                      / ____|                                           ");
		System.out.println("   | |     _ __ __ _ _____   _  | |     __ _ _ __                                  ");
		System.out.println("   | |    | '__/ _` |_  / | | | | |    / _` | '__|                                 ");
		System.out.println("   | |____| | | (_| |/ /| |_| | | |___| (_| | |                                    ");
		System.out.println("    "+"\\"+"_____|_|  "+"\\"+"__,_/___|"+"\\"+"__, |  "+"\\"+"_____"+"\\"+"__,_|_|    ");
		System.out.println("                          __/ |                                                    ");
		System.out.println("                         |___/                                                     ");
        System.out.println("----------------------服务启动---------------------                                 ");
	}
}
