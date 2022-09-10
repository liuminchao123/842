#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

void main3() {
	int judgement(int a);
	int a, b;

	printf("请输入一个整数：");
	scanf("%d", &a);
	b = judgement(a);
	if (b == 1)
		printf("该数为素数\n");
	else
		printf("该数不为素数\n");
}

int judgement(int a) {
	int i = 2;
	for (; i < a / 2; i++) {
		if (a % i != 0) return 0;
	}
	return 1;
}