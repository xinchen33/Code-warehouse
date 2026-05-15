#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int i, x, y, z;//公鸡为x，母鸡为y，小鸡为z，利用x+y+z=100和5x+3y+z/3=100
	for (x = 0; x <= 20; x++)
	{
		for (y = 0; y <= 33; y++)
		{
			if (7 * x + 4 * y == 100) 
			{
				z = 100 - x - y;
				printf("公鸡:%d只,母鸡:%d只,小鸡:%d只\n", x, y, z);
			}
		}
	}


	return 0;
}