#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

void main() {
	enum ö���� { Ԫ���б� };
	enum Weekday { sum, mon, tue, wed, thu, fri, sat };  // ������һ��ö������
	enum Weekday workday, weekend;  // ����ö�ٱ�����������ֵֻ�����䷶Χ��ȡ
	workday = mon;  // right
	//worday = monday; // wrong
	printf("%d", workday);
}


