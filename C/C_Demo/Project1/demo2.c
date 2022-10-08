#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#define MAXSIZE 10010
#define ElemType int

struct LNode {
    int data;
    LNode* next;
}LNode, * LinkList;

//����
LinkList initLinkList(int num) {
    LNode* head = (LNode*)malloc(sizeof(LNode));
    LinkList p = head;
    p->next = NULL;
    int elem;
    while (num--) {
        printf("���룺");
        scanf("%d", &elem);
        LNode* L = (LNode*)malloc(sizeof(LNode));
        L->data = elem;
        L->next = NULL;
        p->next = L;
        p = p->next;

    }
    return head;
}

//����������
void ReverseLinkList(LinkList& l) {
    LinkList head = l;
    LinkList p = head->next;
    //pr:p��ǰһ����㣬pnx:p�ĺ�һ�����
    LinkList pnx, pr;
    head->next = NULL;
    if (!p || !(p->next)) {
        printf("������Ϊ�ջ���ֻ��һ�����,����Ҫ���ã�\n");
    }
    else {
        pr = NULL;
        pnx = NULL;
    }
    while (p) {
        pnx = p->next;
        p->next = pr;
        pr = p;
        p = pnx;
    }
    head->next = pr;
}

//��ӡ
void display(LinkList p) {
    LinkList pp = p->next;
    while (pp) {
        int data = pp->data;
        printf("%d ", data);
        pp = pp->next;
    }
}
int main() {
    printf("����Ԫ�ظ�����");
    int num;
    scanf("%d", &num);
    printf("��ʼ������\n");
    LinkList LL1 = initLinkList(num);
    printf("\n��ӡ����\n");
    display(LL1);
    printf("\n����������\n");
    ReverseLinkList(LL1);
    display(LL1);
    return 0;
}

