#define _CRT_SECURE_NO_WARNINGS 1
# include <stdlib.h>
#define InitSize 100	// ���ȵĳ�ʼ����

struct List {
	int* data;
	int MaxSize, length;
}List;  // ��̬����
struct List L;

// �������
// 1.�ж��Ƿ���Բ���  2.Ϊ��Ԫ���ڳ�λ�ã����ƣ� 3.���룬���³�������
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








