#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>

int main() {
	int x, y;
	printf("enter X:");
	scanf("%d", &x);
	y = 0;
	if (x >= 0) {
		if (x > 0) {
			y = 1;
		}
	}
	else y = -1;
	printf("x=%d, y=%d\n", x, y);
	return 0;
}