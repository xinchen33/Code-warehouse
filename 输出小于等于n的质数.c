#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
int main() {
	int n, symbol, lim;
	printf("请输入一个正整数:");
	scanf("%d", &lim);
	//判断边界情况
	if (lim <= 1){
		printf("你输入的不是素数(输入>=2)!\n");
		return 0;
	}

	printf("小于等于%d的素数有:\n", lim);
	//判断小于n的素数
	for (n = 2; n <= lim; n++) {
		symbol = 1;
		if (n == 2) {
			symbol = 1;
		}
		else if (n % 2 == 0) {
			symbol = 0;
			continue;
		}
		else for (int i = 3; i <= sqrt(n); i += 2) {
			if (n % i == 0) {
				symbol = 0;
				break;//不是素数
			}
		}
		if (symbol)
			printf("%d ", n);
	}
		printf("Done!\n");

	return 0;
}