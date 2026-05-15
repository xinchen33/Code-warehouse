#include <stdio.h>
int main() {
	int a, i;
	for (i = 1; i <= 99; i++)
	{
		if ((i * i) % (i < 9 ? 10 : 100) == i)
			printf("%d\n", i);
	}





	return 0;
}