#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>

int main() {
	int a = 3, b = 0;

	a = a>b ? a:b;
	printf("%d", a);
}