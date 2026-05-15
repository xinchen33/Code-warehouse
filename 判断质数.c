#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
int main() {
	int i, n;
	scanf("%d", &n);
	if (n == 2)
		printf("%d是素数\n", n);
	else if (n < 2)printf("%d不是素数\n", n);
	//处理边界情况,小于和等于2
	int c = 1;
	for (i = 2; i <= sqrt(n); i++){
		if (n % i == 0){
			printf("%d不是素数\n", n);
			c = 0;
			break;
		}
	}
	if (c == 1)
		printf("%d是素数\n", n);





	return 0;
}