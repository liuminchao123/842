#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#define MAXSIZE 10010
#define ElemType int

struct LNode {
    int data;
    LNode* next;
}LNode, * LinkList;

//创建
LinkList initLinkList(int num) {
    LNode* head = (LNode*)malloc(sizeof(LNode));
    LinkList p = head;
    p->next = NULL;
    int elem;
    while (num--) {
        printf("输入：");
        scanf("%d", &elem);
        LNode* L = (LNode*)malloc(sizeof(LNode));
        L->data = elem;
        L->next = NULL;
        p->next = L;
        p = p->next;

    }
    return head;
}

//单链表逆置
void ReverseLinkList(LinkList& l) {
    LinkList head = l;
    LinkList p = head->next;
    //pr:p的前一个结点，pnx:p的后一个结点
    LinkList pnx, pr;
    head->next = NULL;
    if (!p || !(p->next)) {
        printf("该链表为空或者只有一个结点,不需要逆置！\n");
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

//打印
void display(LinkList p) {
    LinkList pp = p->next;
    while (pp) {
        int data = pp->data;
        printf("%d ", data);
        pp = pp->next;
    }
}
int main() {
    printf("输入元素个数：");
    int num;
    scanf("%d", &num);
    printf("初始化链表\n");
    LinkList LL1 = initLinkList(num);
    printf("\n打印链表\n");
    display(LL1);
    printf("\n单链表逆置\n");
    ReverseLinkList(LL1);
    display(LL1);
    return 0;
}

