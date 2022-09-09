1. ## 颠倒数组元素次序

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
   



2. ## 判断整数是否为素数

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



## 3.水杨花数

1~2000的水仙花数。

水仙花是美味数字的n次方之和等于本身。n是这个数的位数。

```c
#include <stdio.h>
int main(){
    in
}
```

