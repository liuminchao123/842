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
   
   

