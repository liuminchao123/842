#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

void main() {
	int a[3][2] = { {1,2}, {3,4}, {5,6} };
	printf("%d\n", a[0][0]);
	printf("%d\n", *a[0]);
	printf("%d\n", a);
	printf("%d", *a);  
}


