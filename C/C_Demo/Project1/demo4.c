#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

void main3() {
	int judgement(int a);
	int a, b;

	printf("������һ��������");
	scanf("%d", &a);
	b = judgement(a);
	if (b == 1)
		printf("����Ϊ����\n");
	else
		printf("������Ϊ����\n");
}

int judgement(int a) {
	int i = 2;
	for (; i < a / 2; i++) {
		if (a % i != 0) return 0;
	}
	return 1;
}