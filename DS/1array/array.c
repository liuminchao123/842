#define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>
# include <stdlib.h>
# define MaxSize 100    //�������Ա����󳤶�
//˳���ṹ��ͷ�ļ�(��̬���䣩
typedef struct   //����ṹ��
{
    int *data;
    int length;
}List;     //����ṹ�������

int main() {
    List initlist();
    int initArray(int array[], int len);
    void printer(List L);
    List plusArray(List L1, List L2, List L3);
    void swap(int* a, int* b);
    List swapArray(List L, int m, int n);


    List L1 = initlist(10);
    initArray(L1.data, L1.length);
    L1 = swapArray(L1, 2, 8);
    printer(L1);
}



//��ʼ��˳���
List initlist(int length)     //(sqlist &l)����ᱨ��
{
    List L;     
    L.data = (int*)malloc(MaxSize * sizeof(int)); //˳����Ԫ��
    L.length = length;           //˳���ĵ�ǰ����
    return L;
}

// ��Ԫ�����˳���Ԫ��
void printer(List L) {
    for (int i = 0; i < L.length; i++)
        printf("L.data[%d] = [%d]\n", i, L.data[i]);
}

// ��ʼ������
int initArray(int array[], int len) {
    for (int i = 0; i < len; i++) {
        array[i] = i + 1;
    }
}

// ���������е�Ԫ��
void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

List swapArray(List L,int len1,int len2) {
    for (int i = 0; i < len1 && i < len2; i++) {
        swap(&L.data[i], &L.data[i + len1]);
    }
    if (len1 == len2) return L;
    if (len1 > len2) {
        for (int i = 0, j = len1; i < len1; i++) {
            swap(&L.data[j], &L.data[j + 1]);
            j++;
        }
    }
    else {
        for (int i = 0, j = len1; i < len2; i++) {
            swap(&L.data[j], &L.data[j + 1]);
            j++;
        }
    }
    return L;
}





