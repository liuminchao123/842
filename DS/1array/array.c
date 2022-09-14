#define _CRT_SECURE_NO_WARNINGS 1
# include <stdlib.h>
#define InitSize 100	// 表长度的初始定义

struct List {
	int* data;
	int MaxSize, length;
}List;  // 动态数组
struct List L;

// 插入操作
// 1.判断是否可以插入  2.为新元素腾出位置（后移） 3.插入，导致长度增加
int ListInsert(List& L, int i, int e) {
	if (i<1 || i>L.Length + 1)
		return 0;
	if (L.length >= MaxSize)
		return false;
	for (int j = L.length; j >= i; j--) {
		L.data[j] = L.data[j-1];
	}
	L.data = [i - 1] = e;
	L.length++;
	return 1;
}

int main() {
	List.data = (int*)malloc(sizeof(int) * InitSize);
}








