#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

void main() {
	int get_ele(int num, int i);
	int judgement(int num);
	int get_ele(int num, int i);
	int getnum(int num);
	void exe();

	exe();
}

void exe() {  // ִ�к���
	int num = 1;
	printf("1~20000֮���ˮ����У�");
	//for (int i = 0; i < 100; i++) {
	//	if (judgement(num+i) == 1)
	//		printf("%d, ", num);
	//}
	judgement(153);
}

int judgement(int num) { // �жϸ����Ƿ�Ϊˮ����
	int sum = 0;
	int temp = 0;
	int index = getnum(num);  // ��ȡλ��
	for (int i = 1; sum / (getn(10,i)) != 0; i++) {
		printf("11111\n");xx
		temp = get_ele(num, i);
		temp = getn(temp, index);
		sum += temp;
		printf("��ʱsum = %d\n", sum);
	}
	printf("sum = %d\n", sum);
	if (sum == num) {
		return 1;
	}
	return 0;
}

int get_ele(int num, int i) {  // ��ȡnum�ĵ�iλ
	num = num / (i - 1);   // ȥ����i-1λ
	num = num % 10;	// �õ���iλ
	printf("�����ĵ�%dλ = %d\n", i, num);
	return num;
}

int getnum(int num) {  // ��ȡ���ֵ�λ��
	int i;
	for (i = 1; num / 10 != 0; i++) {
		num = num / 10;
	}
	printf("λ�� = %d\n", i);
	return i;  // ���ػ�ȡ��λ��
}

int getn(int num, int i) {   // ���num��i����
	for (int j = 1; j < i; j++)
		num = num * num;
	return num;
}