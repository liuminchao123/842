#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

void main() {
	void exe();
	int maxshare(int a, int b);
	int minshare(int a, int b, int maxele);
	int min(int a, int b);

	exe();
}

void exe() {
	int a, b;
	int maxele, minele;
	printf("����������������");
	scanf("%d %d", &a, &b);
	maxele = maxshare(a, b);
	minele = minshare(a, b, maxele);
	printf("��С������Ϊ��%d", minele);
}

int minshare(int a, int b, int maxele) { // ������С������
	int i = a / maxele;
	int j = b / maxele;
	return maxele * i * j;
}

int maxshare(int a, int b) {  // �����������
	int minab = min(a, b);
	for (int i = minab; i > 0; i--) {
		if (a % i == 0 && b % i == 0)
			return i;
	}
}

int min(int a, int b) {  // ���ؽ�С��
	if (a < b) return a;
	return b;
}