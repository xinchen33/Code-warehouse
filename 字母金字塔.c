#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int totalLine;
	char ch, c1;
	printf("请输入一个大写字母:");
	scanf("%c", &ch);
	totalLine = ch - 'A' + 1;
	if (ch < 'A' || ch > 'Z')
	{
		printf("输入错误！请输入正确的大写字母\n");
		return 1;
	}
	//打印字母金字塔
	for (int i = 1; i <= totalLine; i++)
	{
		c1 = 'A';
		for (int f1 = totalLine - i; f1 >= 1; f1--)//打印空格序列
		{
			printf(" ");
		}
		for (int f2 = 1; f2 <= i; f2++, c1++)//正序字母序列
		{
			printf("%c", c1);
		}
		c1 = 'A' + i - 1;
		for (int f3 = 1; f3 < i; f3++)//逆序字母序列
		{
			printf("%c", --c1);
		}
		printf("\n");
	}


	return 0;
}