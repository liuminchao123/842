#define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>

int main() {
    int num;
    printf("请输入一个整数:");
    scanf("%d", &num);
    num = F(num);
    printf("%d\n", num);
}

int F(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    return F(n - 1) + F(n - 2);
}