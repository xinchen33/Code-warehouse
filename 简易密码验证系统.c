#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
void remove_line(char* str) {
	int len = strlen(str);//去换行符
	if (len > 0 && str[len - 1] == '\n') {
		str[len - 1] = '\0';
	}
}
int main() {
	const char name[6] = "admin";
	const char password[6] = "12345";//简易密码验证
	char input_name[20];
	char input_password[20];
	int symbol = 0;

	for (int i = 3; i > 0; i--) {
		printf("用户名: ");
		fgets(input_name, sizeof(input_name), stdin);
		remove_line(input_name);

		printf("密码: ");
		fgets(input_password, sizeof(input_password), stdin);
		remove_line(input_password);

		if (strcmp(input_name, name) == 0 && strcmp(input_password, password) == 0) {
			printf("登录成功!\n");
			symbol = 1;
			break;  // 登录成功时退出循环
		}
		else {
			if (i > 1) {  // 添加条件，避免显示"还剩0次机会"
				printf("用户名或密码错误！还剩%d次机会\n", i - 1);
			}
			else {
				printf("用户名或密码错误！机会已用完！\n");
			}
		}
	}

	if (symbol) {
		printf("\n欢迎进入系统！\n");
		// 这里可以添加登录成功后的功能
	}
	else {
		printf("\n登录失败，账户已被锁定！\n");
	}

	return 0;
}