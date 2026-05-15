#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void to_base_n(int n, int type) {
	int r;
	r = n % type;
	if (n < type) {
		putchar('0' + n);
		return;
	}
	to_base_n(n / type, type);
	putchar('0' + r);

	return;
}
int main() {
	int n, type;
	printf("请输入要转换的数字(输入q退出):");
	for (; scanf("%d", &n) == 1;) {
		printf("请输入进制类型:");
		for (;;) {
			scanf("%d", &type);
			if (type >= 2 && type <= 10) {
				break;
			}
			printf("进制类型必须在2-10范围内，请重新输入:");
		}
		printf("%d的%d进制数为:", n, type);
		to_base_n(n, type);
		putchar('\n');
		printf("请输入要转换的数字(输入q退出):");
	}
	printf("Done!\n");
	
	return 0;
}