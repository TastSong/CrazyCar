package com.tastsong.crazycar;

import org.jasypt.encryption.StringEncryptor;
import org.junit.jupiter.api.Test;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.boot.test.context.SpringBootTest;

import lombok.extern.slf4j.Slf4j;

@Slf4j
@SpringBootTest(webEnvironment = SpringBootTest.WebEnvironment.RANDOM_PORT)
class CrazyCarApplicationTests {

	@Autowired
	private StringEncryptor stringEncryptor;

	@Test
	void contextLoads() {
	}

	@Test
	void EncryptionTest() {
		String username = "root";
		String password = "1647283556";
		log.info(stringEncryptor.encrypt(username));
		log.info(stringEncryptor.encrypt(password));
	}

}
