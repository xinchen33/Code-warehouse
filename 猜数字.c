#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int upper, lower, mid;
	char ch;
	lower = 0;
	upper = 100;
	mid = 50;
	printf("选择一个1-100的整数，我将猜出这个数字\n");
	printf("如果我猜对了，就输入y，我猜小了，就输入s，我猜大了，就输入b\n");
	printf("是%d吗？\n", mid);
	for (; (ch = getchar()) != 'y';){
		if (ch == '\n')
			continue;
		if (ch == 'b') {
			upper = mid;
			mid = (mid + lower) / 2;
		}
		else if (ch == 's') {
			lower = mid;
			mid = (mid + upper) / 2;
		}
		else printf("抱歉，我只能理解b或s或y\n");
		printf("是%d吗？\n", mid);
		if (upper <= lower)
			break;
	}
	printf("我做到了!\n");

	return 0;
}