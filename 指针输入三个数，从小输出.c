#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void name(double* a, double* b, double* c) {
	double min, max, mid;
    min = *a;
    max = *a;

    if (*b < min)
        min = *b;
    if (*c < min)
        min = *c;

    if (*b > max)
        max = *b;
    if (*c > max)
        max = *c;

    mid = *a + *b + *c - min - max;

    *a = min;
    *b = mid;
    *c = max;
}
int main() {
    printf("请输入三个值:");
	double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);
    name(&a, &b, &c);
    printf("%g, %g, %g", a, b, c);

	return 0;
}
