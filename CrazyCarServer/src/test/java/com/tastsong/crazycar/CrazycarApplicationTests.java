package com.tastsong.crazycar;

import org.jasypt.encryption.StringEncryptor;
import org.junit.jupiter.api.Test;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.boot.test.context.SpringBootTest;

@SpringBootTest(webEnvironment = SpringBootTest.WebEnvironment.RANDOM_PORT)
class CrazycarApplicationTests {

	@Autowired
	private StringEncryptor stringEncryptor;

	@Test
	void contextLoads() {
	}

	@Test
	void EncryptionTest() {
		String username = "root";
		String password = "1647283556";
		System.out.println(stringEncryptor.encrypt(username));
		System.out.println(stringEncryptor.encrypt(password));
	}

}
