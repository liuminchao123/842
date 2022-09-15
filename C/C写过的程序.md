## 颠倒数组元素次序

```c
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#define LEN 9  // 定义数组长度


void main() {
	void exchange(int array[]);  // 交换元素函数
	void swap(int* a, int* b);	// 交换值函数
	void printer(int array[]);	// 打印数组

	int a[LEN] ;
	for (int i = 0; i < LEN; i++)
		a[i] = i;
	printf("数组初始化为：");
	printer(a);
	exchange(a);
}

void exchange(int array[]) {
	int i = 0;
	int j = LEN - 1;

	for (int num = 0; num < LEN; num++) {
		if ((i <= LEN / 2) && (j >= LEN / 2)) {
			swap(array + i, array + j);
		}
		else break; // 交换完成 跳出循环

		printf("第%d次交换元素：", i+1);
		printer(array);
		i++;
		j--;
	}
}

void swap(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

void printer(int array[]) {
	for (int i = 0; i < LEN; i++) {
		printf("%d,", *(array + i));
	}
	printf("\n");
}
```

```c
数组初始化为：0,1,2,3,4,5,6,7,8,
数组初始化为：0,1,2,3,4,5,6,7,8,
第1次交换元素：8,1,2,3,4,5,6,7,0,
第2次交换元素：8,7,2,3,4,5,6,1,0,
第3次交换元素：8,7,6,3,4,5,2,1,0,
第4次交换元素：8,7,6,5,4,3,2,1,0,
第5次交换元素：8,7,6,5,4,3,2,1,0,
```



## 判断整数是否为素数

素数又称质数，1不是素数，2是素数

```c
#include <stdio.h>

void main() {
	int judgement(int a);
	int a, b;

	printf("请输入一个整数：");
	scanf("%d", &a);
	b = judgement(a);
	if (b == 1)
		printf("该数为素数\n");
	else
		printf("该数不为素数\n");
}

int judgement(int a) {
	int i = 2;
    if (a == 1) return 0;
    if(a == 2) return 1;    // 2为素数
	for (; i < a / 2; i++) {
		if (a % i == 0) return 0;
	}
	return 1;
}
```



## 水杨花数

1~2000的水仙花数。

水仙花是美味数字的n次方之和等于本身。n是这个数的位数。

```c
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
	int num;
	printf("1~20000之间的水杨花数有：");
	for (num = 1; num < 20000; num ++) {
		if (judgement(num) == 1)
			printf("%d, ", num);
	}
}

int judgement(int num) { // 判断该数是否为水花数
	int sum = 0;
	int temp = 0;
	int index = getnum(num);  // 获取位数
	for (int i = 1; i <= index; i++) {
		temp = get_ele(num, i);  // 获取num的第i位
		temp = getn(temp, index);	// 获取第i位的index次幂
		sum += temp;   //
	}
	if (sum == num) {  // 相等就是水仙花数
		return 1;
	}
	return 0;
}

int get_ele(int num, int i) {  // 获取num的第i位
	if (i == 1) return num % 10;
	for(; i > 1; i --)	 // 去掉后i-1位
		num = num / 10;  
	num = num % 10;	// 得到第i位
	return num;
}

int getnum(int num) {  // 获取数字的位数
	int i;
	for (i = 1; num / 10 != 0; i++) {
		num = num / 10;
	}
	return i;  // 返回获取的位数
}

int getn(int num, int i) {   // 获得num的i次幂
	int q = num;  // 设置乘数
	for (int j = 1; j < i; j++)
		num = num * q;   // 这里不是 num * num
	return num;
}
```

```
1~20000之间的水杨花数有：1, 2, 3, 4, 5, 6, 7, 8, 9, 153, 370, 371, 407, 1634, 8208, 9474,
```





## 计算完数

求2到20000之间所有完数。所有真因数的和等于本身的数字称为完数

```c
#include <stdio.h>

void main() {
	void exe();
	int judgement(int num);

	exe();
}

void exe() {
	printf("2~20000之间所有完数：");
		for (int num = 2; num <= 20000; num++) {
			if (judgement(num) == 1)
				printf("%d, ", num);
		}
}

int judgement(int num) {  // 判断该数是否为完数
	int sum = 0;
	for (int i = 2; i < num; i++) {
		if (num % i == 0)
			sum = sum + i;
	}
	sum++;   // 还有1
	if (sum == num)
		return 1;
	return 0;
}
```



## 求最小公倍数

```c
#include <stdio.h>

void main() {
	void exe();
	int maxshare(int a, int b);
	int minshare(int a, int b, int maxele);
	int min(int a, int b);

	exe();
}

void exe() {
	int a, b;
	int maxele, minele;
	printf("请输入两个整数：");
	scanf("%d %d", &a, &b);
	maxele = maxshare(a, b);
	minele = minshare(a, b, maxele);
	printf("最小公倍数为：%d", minele);
}

int minshare(int a, int b, int maxele) { // 计算最小公倍数
	int i = a / maxele;
	int j = b / maxele;
	return maxele * i * j;
}

int maxshare(int a, int b) {  // 计算最大公因数
	int minab = min(a, b);
	for (int i = minab; i > 0; i--) {
		if (a % i == 0 && b % i == 0)
			return i;
	}
}

int min(int a, int b) {  // 返回较小数
	if (a < b) return a;
	return b;
}
```

```c
请输入两个整数：2 3
最小公倍数为：6
请输入两个整数：3 7
最小公倍数为：21
```



## 判断闰年

判断任意年份是否为闰年，需要满足以下条件中的任意一个：

* 该年份能被 4 整除同时不能被 100 整除
* 该年份能被400整除

```c
# include <stdio.h>

int main() {
	int judgement(int year);

	int year;
	printf("请输入一个年份：");
	scanf("%d", &year);
	if (judgement(year)) 
		printf("该年为闰年！");
	else
		printf("该年不为闰年！");
}

int judgement(int year) {
	if (year % 400 == 0)
		return 1;
	if (year%4 == 0 && year%100 != 0)
		return 1;
	return 0;
}
```



# C教材例题

## 求pi的近似

![image-20220915205447073](https://s2.loli.net/2022/09/15/knNLY5EibMw7Zp3.png)

```c
int main() {
    double pi = 0;
    double j;  // 加数
    int sign = 1;  // 符号控制
    
    for (int i = 0;; i++) {
        j = 2 * i + 1;
        j = 1 / j;   
        
        if (j < 1e-6) break;
        pi = pi + j*sign;
        sign = -sign;
    }
    
    pi = pi * 4;
    printf("pi = %10.8f", pi);
}
pi = 3.14159065
```



## 斐波那契数列

![image-20220915212004576](https://s2.loli.net/2022/09/15/VIK4O8GWbe7QhFA.png)

```c
// q
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
```





# C教材习题

4.5

```c
#include <stdio.h>
#include <math.h>

int main() {
	int a;
	while (1) {
		scanf("%d", &a);
		if (a <= 1000)
			break;
		else
			printf("请重新输入！\n");
	}
	a = (int)sqrt(a);
	printf("%d", a);
}
```

```
20000
请重新输入！
36
6
```

