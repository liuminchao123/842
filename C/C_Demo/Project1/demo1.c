#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

int main1() {
	char str1[6] = "bitch"; 
	char str2[6] = "BITCH";
	int len;

	len = strlen(str1);  // 测有效长度
	printf("%d\n", len);  // 5

	printf("%s\n", _strupr(str1));

	printf("%s\n", _strlwr(str2));
	return 0;
}