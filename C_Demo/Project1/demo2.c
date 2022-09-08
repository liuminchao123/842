#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

void main() {
	enum 枚举名 { 元素列表 };
	enum Weekday { sum, mon, tue, wed, thu, fri, sat };  // 声明了一个枚举类型
	enum Weekday workday, weekend;  // 定义枚举变量，变量的值只能在其范围内取
	workday = mon;  // right
	//worday = monday; // wrong
	printf("%d", workday);
}


