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

void exe() {  // 执行函数
	int num = 1;
	printf("1~20000之间的水杨花数有：");
	//for (int i = 0; i < 100; i++) {
	//	if (judgement(num+i) == 1)
	//		printf("%d, ", num);
	//}
	judgement(153);
}

int judgement(int num) { // 判断该数是否为水花数
	int sum = 0;
	int temp = 0;
	int index = getnum(num);  // 获取位数
	for (int i = 1; sum / (getn(10,i)) != 0; i++) {
		printf("11111\n");xx
		temp = get_ele(num, i);
		temp = getn(temp, index);
		sum += temp;
		printf("此时sum = %d\n", sum);
	}
	printf("sum = %d\n", sum);
	if (sum == num) {
		return 1;
	}
	return 0;
}

int get_ele(int num, int i) {  // 获取num的第i位
	num = num / (i - 1);   // 去掉后i-1位
	num = num % 10;	// 得到第i位
	printf("该数的第%d位 = %d\n", i, num);
	return num;
}

int getnum(int num) {  // 获取数字的位数
	int i;
	for (i = 1; num / 10 != 0; i++) {
		num = num / 10;
	}
	printf("位数 = %d\n", i);
	return i;  // 返回获取的位数
}

int getn(int num, int i) {   // 获得num的i次幂
	for (int j = 1; j < i; j++)
		num = num * num;
	return num;
}