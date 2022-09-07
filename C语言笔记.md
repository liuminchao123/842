## 第一章 C语言

#### 函数也有类型

```c
int main()   // 整型函数
```



#### 头文件 stdio

是 standard input & output 的缩写，文件后缀是.h

```c
#include <stdio.h>  // 为系统文件
#include "xxxxx.h"  // 先找当前目录（为用户编写），再找系统
```



#### 注释

```c
// 为单行
/*
……
*/   为多行注释
在字符串中// /* 不作为注释
```



#### 函数的声明 定义 调用

程序的编译是自上而下的

若main函数在最前面 需要首先声明函数

```c
int main(){
	int max(int x, inty); // 函数声明
    //
    int a = max(c, d); // h
}

int max(int x, int y){ // 函数的定义
    //
}
```



#### 程序结构

由一个或多个源程序文件构成

源程序包括

* 预处理指令

* 全局声明，在函数之外进行数据声明

  ```c
  #。。。。
  int a =1;  // 全局声明
  main(){
  	//
  }
  ```

* 程序总是从main函数开始执行



## 第二章 一些规则

### 主函数

* 一个项目只能有一个main函数

### 转义字符

```
\'   单撇号
\"  一个双撇号
\? 
\\  反斜线\
\b 退格
\a 警告
\f 换页
\n 换行
\r 回车
```



### 符号常量

在函数前定义，不占内存，代表一个值

```C
#define PI 3.1415926
```



### 常变量

在函数内定义

```
const int a = 3;
```



### 标识符

对变量，符号常量，函数，数组，类型等命名的规则

由字母，数字和下划线组成，第一个字符不可以为数字



### 数据类型

![img](D:\APP_Data\Typora_img\20151104162007701)

| 类型           | 存储大小 | 值范围                                     |
| :------------- | :------- | :----------------------------------------- |
| char           | 1 字节   | -128 到 127 或 0 到 255    -2^7~2^7        |
| unsigned char  | 1 字节   | 0 到 255                                   |
| signed char    | 1 字节   | -128 到 127                                |
| int            | 4 字节   | -2,147,483,648 到 2,147,483,647    2^31    |
| unsigned int   | 4 字节   | 0 到 4,294,967,295     2^32                |
| short          | 2 字节   | -32,768 到 32,767     2^15                 |
| unsigned short | 2 字节   | 0 到 65,535     2^16                       |
| long           | 4 字节   | -2,147,483,648 到 2,147,483,647       2^31 |
| unsigned long  | 4 字节   | 0 到 4,294,967,295     2^32                |

查看数据类型

```c
typeof()
```





### 字符变量

* 用char定义 

* 占一个字节，整型变量

* 类型   signed char -128~128

* unsigned char   0~255

  ```c
  char c = '?';  // 实际上系统把？对应的ASCⅡ 63 赋值给了c
  ```

  ```c
  #include <stdio.h>
  
  int main() {
  	char c = '?';
  	printf("%c\n", c);
  	printf("%d", c);
  }
  ?
  63
  ```

* 可以直接将0~127 直接赋值给字符变量

  ```c
  #include <stdio.h>
  
  int main() {
  	char c = 63;  // 直接赋值
  	printf("%c\n", c);
  	printf("%d", c);
  }
  ?
  63
  ```



#### 浮点型数据

float

* float 单精度浮点型 4字节

  ```
  float a = 3.14.15f;   // 强制制顶常量的类型 为float
  
  ```

  

double

* 双精度浮点型 8字节



### 运算符

```c
指针运算符   * &
求字节数运算符  sizeof
条件运算符  ？ ：
位运算符  >>  <<  ~ |   ^ &
```

#### 算术运算符

```
-a  a的算术复值
```

#### 关系运算符

```c
< <= > >= 优先级高
== != 优先级低
```



#### 优先级

* 关系运算符高于算术运算符
* 关系运算符也高于赋值运算符

### 除法

* 两个师叔相除的结果为双精度实数，两个整数相除的结果为整数

自增自减运算符

```
++ 
--
```



不同数据类型的混合运算



### 强制类型转换

```c
(double)a
(int)(x+y)
(float)(5%3)
```

原来的不变

```c
int main() {
	int a = 10;
	float b;
	b = (float)a;
	printf("a=%d, b=%f", a, b);
}
a=10, b=10.000000
```



## 第三章 语句

### 控制语句

```c
if()  else
continue
break
switch
goto
```

if

```c
if(a > b){
	//
}else if(a = b){
    //
}else{
    //
}
```



### 赋值语句

```c
int a,b,c=5;  // 只对c进行了初始化
int a=1, b=2, c=3;  
int a=b=c=1;  // 错误
```



### 输入输出语句

#### 格式字符

* d 有符号的十进制整数

* f 实数，小数形式输出

  * %f 小数部分输出6位

  * 指定数据宽度和小数位数，用%m.nf

    ```c
    printf("%20.15f", a);
    // 20表示数据占20列，其中包括15位小数  小数点占一列
    ```
    ```c
    int main() {
    	int a = 10;
    	float b;
    	b = (float)a / 3;
    	printf("a=%d\n", a);
    	printf("b=%7.5f\n", b);
    	printf("b=%7.2f", b);
    }
    a=10
    b=3.33333
    b=   3.33  // 前面有3位空位
    ```
  
  * 输出的数据左对齐，在前面加负号
  
    ```c
    int main() {
    	int a = 10;
    	float b;
    	b = (float)a / 3;
    	printf("a=%d\n", a);
    	printf("b=%7.5f\n", b);
    	printf("b=%7.2f", b);
    }
    a=10
    b=3.33333
    b=   3.33
    b=3.33     // 左对齐 右端补空格
    ```
  
* e格式符    以指数形式输出实数

  ```c
  // 小数位数6位，指数部分占5列
  ```

* o格式符   八进制整数形式输出

  ```c
  int main() {
  	int a = 256;
  	printf("a=%o", a);
  }
  400
  ```

* x格式符  十六进制整数输出

  ```c
  int main() {
  	int a = 256;
  	printf("a=%x", a);
  }
  100
  ```

  

#### printf

```c
printf("%d", a);  // 注意没有&
pinrtf("a=%d, b=%c\n", a, b);
printf("%5d, %d", 12, -34);
```



#### scanf

* 除了数组，都要加地址符号&
* scanf自动换行，不要再加换行符`\n`

```c
scanf(格式控制, 地址表列);
scanf("%d", &a);   // a要先定义
scanf("a=%d", &a);  // 键盘输入时，要a=11  这种形式 a=y
```

多个数据连续输入时

```c
scanf("%c%c%c", &a, &b, &c);  // 输入时 不要有空格和逗号
```

```c
int main() {
	char a, b, c;
	scanf("%c%c%c", &a, &b, &c);
	printf("a=%c, b=%c, c=%c\n", a, b, c);

	scanf("%c%c%c", &a, &b, &c);
	printf("a=%c, b=%c, c=%c", a, b, c);
}
abc
a=a, b=b, c=c
a b c
a=a, b= , c=b
```

输入数值时，需要在数值之间加入空格

#### putchar函数

输出一个字符

#### getchar函数

获取一个字符

```c
char a;
a = getchar();
putchar(a);
```



### 选择语句

```cc
if(){
	//
}else if(){
    //
}else{
    //
}
```



### switch语句

```c
int main() {
	int a;
	scanf("%d", &a);
	switch (a) {
		case 1: printf("a=1"); 
			break;
		case 2: printf("a=2");
			break;
		default: printf("error\n");
	}
	return 0;
}
1
a=1
2
a=2
3
error
```



### 循环

while

```c
int main() {
	int a=0;
	while (a < 4) {       // 先判断
		printf("a=%d\n", a);
		a++;
	}

	do {
		printf("a=%d\n", a);   // 先执行
		a++;
	} while (a < 8);
	return 0;
}
a=0
a=1
a=2
a=3
a=4
a=5
a=6
a=7

```

for

```c
int main() {
	int a;
	for (a = 0; a < 5; a++) {
		printf("a=%d\n", a);
	}
	return 0;
}
a=0
a=1
a=2
a=3
a=4

```



改变循环的状态

* break 跳出当前循环

  ```c
  int main() {
  	int a;
  	for (a = 0; a < 10; a++) {
  		printf("a=%d\n", a);
  		if (a == 5)
  			break;
  	}
  	return 0;
  }
  a=0
  a=1
  a=2
  a=3
  a=4
  a=5
  
  ```

* continue 跳出本次循环

  ```c
  int main() {
  	int a;
  	for (a = 0; a < 5; a++) {
  		if (a == 5)
  			continue;
  		printf("a=%d\n", a);
  
  	}
  	return 0;
  }
  a=0
  a=1
  a=2
  a=3
  a=4
  
  ```





## 第四章 数组

* 统一数据类型

* 有序数据的集合

* **在C语言中，数组名代表该数组第一个元素的地址，也是数组的起始地址**

  ```c
  scanf("%d", a[0]);   // 不需要加&
  ```

  

### 整型数组

```c
int main() {
	int a[10];
	int i = 0;
    for (i = 0; i < 10; i++) {
		printf("a[%d] = %d\n", i, a[i]);
	}
	for (; i < 10; i++) {
		a[i] = i*100;
	}
	for (i = 0; i < 10; i++) {
		printf("a[%d] = %d\n", i, a[i]);
	}
	return 0;
}
a[0] = 0
a[1] = 100
a[2] = 200
a[3] = 300
a[4] = 400
a[5] = 500
a[6] = 600
a[7] = 700
a[8] = 800
a[9] = 900

```

在定义时，可以部分初始化，未赋值的默认为0

* 字符数组，默认为\0
* 指针数组，默认为NULL

```c
int main() {
	int a[10] = { 1,2,3 };
	int i = 0;

	for (i = 0; i < 10; i++) {
		printf("a[%d] = %d\n", i, a[i]);
	}
	return 0;
}
a[0] = 1
a[1] = 2
a[2] = 3
a[3] = 0
a[4] = 0
a[5] = 0
a[6] = 0
a[7] = 0
a[8] = 0
a[9] = 0

```

```c
//全部赋值0
a[10] = {0};
//直接赋值
int a[] = {1,2,3};  // 默认长度为3
```



### 字符数组

```c
//定义
char a[] = "I am an boy.";  // a[]一般无数字
char a[] = {'a', 'b', 'c'};
char a[2] = {'d', 'e'};
```

```c
int main() {
	char a[5];
	int i;
	for (i = 0; i < 5; i++) {  // 挨个赋值
		a[i] = 65 + i;  // 65为A的ASCⅡ码
	}
	for (i = 0; i < 5; i++) {
		printf("a[%d]=%c\n", i, a[i]);
	}
	return 0;
}
a[0]=A
a[1]=B
a[2]=C
a[3]=D
a[4]=E

```

#### 字符串

* 实际长度：字符个数 + 1
* 有效长度：字符个数
* 初始化长度时，按实际长度来

```c
int main() {
	char a[5];
	int i;
	for (i = 0; i < 5; i++) {
		a[i] = 65 + i;
	}
	printf("%s", a);
	return 0;
}
ABCDE
```



#### 字符结束标志

* `\0` 为结束标志
* 遇到它，表示字符串结束，前面为有效长度
* 用字符数组存储字符串常量时，会在后面自动加一个`\0` 作为结束符
* 遇到`\0` 就停止读入或输出

```C
int main() {
	char a[10];
	int i;
	for (i = 0; i < 9; i++) {
		a[i] = 65 + i;
	}
	printf("%s", a);
    a[5] = '\0';
    printf("%s", a);
	return 0;
}
ABCDEFGHI
ABCDE
```



#### 字符串处理函数

* 需要加头文件 `<string.h>` 

```c
int main() {
	char str1[];
	char str2[] = "bitch";
	char str3[] = "842";
	char str4[] = "bitca";
	gets(str1);  // 从键盘获取字符串
	puts(str1);   // 输出字符串

	strcpy(str1, str3);  // 将str3赋值到str1中
	printf("%s\n", str1);

	strcat(str2, str3);   // 拼接str2和str3 然后存到str2中
	printf("%s\n", str2);
	printf("%d",strcmp(str2, str4));  
    // 比较大小 按ASCⅡ码比较 相同为0，大于为正，小于为负
}
big
big
842
bitch842
1
```

```c
int main() {
	char str1[] = "bitch";
	char str2[] = "BITCH";
	int len;
	
	len = strlen(str1);  // 测有效长度
	printf("%d\n", len);  // 5
	printf("%s\n", _strupr(str1));
	printf("%s\n", _strlwr(str2));
}
5
BITCH
bitch

```



### 二维数组

定义

```c
数据类型 数组名[3][4]; // 数字任意  按行存放
int a[3][4];  // 2 3行等价
int a[0][4], a[1][4], a[2][4]; // 定义了三个一维数组a[0], a[1], a[2] 均有四个元素
```

初始化

```c
int a[3][2] = {{1,2}, {3,4}, {5,6}};
int a[3][2] = {1, 2, 3, 4, ,5 ,6};    // 1 2行等价
int a[3][4] = {{1}, {2}, {3}};   // 部分赋值，其他默认为0
```



## 第五章 函数



```c
#include <stdio.h>

int main(){
	// 一些函数声明
	// 一些函数调用
}

int a(){  // 函数定义
	//
}
void a(){
	//
}
```



### 局部变量和全局变量

* 局部变量

  ```c
  int b = 1; // 全局变量
  main(){
  	int a = 1;  // 局部变量  在该函数内部有效
  }
  ```



### 内部函数和外部函数

* 内部函数

  ```c
  static int fun(int a, int b){
     // 只能被本文件内部调用
  }
  ```

* 外部函数

  ```c
  extern int fun(int a, int b){
  	// 可以被其他文件调用
  }
  ```

**demo1.c**

```c
#include <stdio.h>

void main() {
	extern int max(int a, int b);

	int a, b;
	scanf("%d", &a);
	scanf("%d", &b);
	printf("%d", max(a, b));
}
```

**demo2.c**

```c
extern void max(int a, int b) {
	if (a > b) return a;
	return b;
}
```

```
1
2
3
```



### 形参和实参

* 形参：函数被调用时，将传来的参数拷贝一份存到栈中，为形参
* 值为单向传递，实参到形参

首先，先来看第一段程序：

```c

12345
```

通过main函数的调用，我们发现x,y并未实现交换：

```c
int main(){
    void swap(int x, int y);
    int x = 1;
    int y = 37;

    swap(x, y);  // x y 为实际参数

    printf("x:%d; y:%d\n",x,y);
    return 0;
}
void swap(int x, int y) {  // x y 为形参
    int temp = y;
    y = x;
    x = temp;
}
x:1; y:37;
```

* 整形x和y在函数swap内为按值传递，按值传递时，函数不会访问当前调用的实参
* 函数会复制一份变量值，存储在当前运行栈中，因此改变这些值不会影响实参的值
* 一旦函数结束了，函数的活动记录将从栈中弹出，这些局部值也就消失了

* 实参的内容没有被改变，在函数调用时无需保存和恢复实参的值
* 如果没有按值传递机制，那么每个没有被声明为const 的参数就可能会随每次函数调用而被改变。按值传递的危害最小，需要用户做的工作也最少。毫无疑问，按值传递是参数传递合理的缺省机制。



## 第六章 指针

* 内存中每一个字节都有一个对应的编号，也就是地址
* 地址指向该变量单元
* 将地址形象化称为 指针，通过它能找到变量的地址单元
* 地址 + 数据的类型信息 两者同时具备才能对数据进行存取
* `int a;`  ` &a` 称为 整型变量a的地址

```c
int a = 1;
int b;
printf("%d", a);  // 为直接访问方式，通过变量名访问变量，按照整形数据的存储方式取出a
scanf("%d", &b); // 从键盘读入，放到变量b的地址对应的存储单元中
```

* 存放变量地址的变量——指针变量

```c
int a = 1;
int *id_a;  // 定义为整型指针变量  *表示该变量为指针变量
id_a = &a;  // 指向了变量a的地址  存入a的地址
printf("%d", id_a);  // 通过变量地址访问变量 为间接访问
```

* 指针变量 = 数据类型 + 变量地址

```c
// 地址只能用地址符&表示，不可使用数值
int *a = 100; // 错误
int *a = &b;
```

* *的使用

```c
void main() {
	int a = 1;
	int* id_a = &a;
    
	printf("id_a = %d\n", id_a);  // 打印a的地址
	printf("*id_a = %d\n", *id_a);   // 打印地址对应的变量a
    *id_a = 2;	// 修改变量a的值
    printf("*id_a = %d", *id_a);   
}
id_a = 15726572
*id_a = 1
*id_a = 2
```

* 通过传递变量地址来实现变量值的真正改变

```c
void main() {
	void swap(int a, int b);
	void id_swap1(int *a, int *b);
    void id_swap2(int )
	int a = 1;
	int b = 2;
	int* id_a = &a;
	int* id_b = &b;
	swap(a, b);
	printf("a = %d, b = %d\n", a, b);
	id_swap(id_a, id_b);
	printf("a = %d, b = %d\n", a, b);
}

void swap(int a, int b) {
	int c = a;
	a = b;
	b = c;
}

void id_swap1(int* a, int* b) {  // 传递过来a b的地址，*a *b 得到a b的值
	int c = *a;   // 对 a b的值进行交换
	*a = *b;
	*b = c;
}
```



### 指针引用数组

* 在C语言中，数组名代表该数组第一个元素的地址，也是数组的起始地址

  ```c
  int a[3] = {1,2,3};
  int *p = &a[0];  // 通过首元素地址指向数组地址
  int *p = a;  // 通过数组名称指向数组地址
  ```

* 引用数组地址时，指针可进行加减

  ```c
  void main() {
  	int a[4] = {1,2,3,4};
  	int* p = a;
  	int i = 0;
  
  	for(; i < 4; i++) {
  		printf("a[%d]=%d ", i, *(p + i));  // 加一就是下一个元素的地址
  	}
  	printf("\n");
  	p = p + 4;
  	for (; i > 0; i--) {
  		printf("a[%d]=%d ", 4-i, *(p - i));  // 减一就是上一个元素的地址
  	}
  }
  a[0]=1 a[1]=2 a[2]=3 a[3]=4
  a[0]=1 a[1]=2 a[2]=3 a[3]=4
  ```

* `[]` 实际为变址运算符，a[i] 为 a+i

  ```c
  array[i] 与  *（array + i)   等价
  ```

* 计算数组元素的相对距离：两地址指针相减（相加无意义）

  ```c
  void main() {
  	int a[9] = {1,2,3,4,5,6,7,8,9};
  	int* p = a;
  	
  	printf("%d, ", p + 9);
  	printf("%d, ", p + 3);
  	printf("%d", (p + 9) - (p + 3));
  }
  6224864, 6224840, 6
  ```

* 用数组名作为函数参数

  ```c
  void main() {
  	void fun(int arr[]);
  	int a[9] = {1,2,3,4,5,6,7,8,9};
  	
  	fun(a);  // 数组名
  }
  void fun(int arr[]){
  	//
  }
  
  或者为
  void main() {
  	void fun(int *arr);  // arr为地址， *arr为数组
  	int a[9] = {1,2,3,4,5,6,7,8,9};
  	
  	fun(a);  // 数组名
  }
  void fun(int *arr){     // arr为地址， *arr为数组
  	//
  }
  ```

* 因为通过地址传递，可以改变实参的值

  ```c
  void main() {
  	void change(int array[]);
  
  	int a[9] = {1,2,3,4,5,6,7,8,9};
  	int* p = a;
  	
  	change(a);
  	for (int i = 0; i < 9; i++)
  		printf("%d ", *(a + i));
  }
  
  void change(int array[]) {
  	array[0] = 1000;
  }
  1000 2 3 4 5 6 7 8 9
  ```




### 多维数组指针引用

P244



### 指针引用字符串

* 通过字符数组定义和存放字符串

* 通过数组名+下标引用字符串中的一个字符， 或直接通过%s输出

  ```c
  void main() {
  	char str[] = "I love China!";  // 无需指定长度
  	printf("%s\n", str);
  	printf("%c", str[7]);
  }
  I love China!
  C
  ```

* 用字符指针变量指向字符串常量

  ```c
  void main() {
  	char *str = "I love China!"; // 将字符串I love China!首元素地址付给指针变量
  	printf("%s\n", str);  
      // printf发现你传的是%s，它就知道你的参数是一个地址，然后顺着这个地址把字符串一直输出，直到'\0'为止
  	printf("%c", str[7]);
  }
  I love China!
  C
  ```



### 字符指针变量和字符数组的区别

P262



### 函数的指针

* 定义了一个函数后，编译时会为函数分配内存空间，内存有个起始地址（函数的入口地址）

* 函数名代表函数的起始地址

  ```c
  int (*p)(int, int);
  ```

  ```c
  void main() {
  	int max(int a, int b);
  	int (*p)(int a, int b);
  
  	int a, b, c;
  	p = max;
  	scanf("%d, %d", &a, &b);
  	c = (*p)(a, b);
  	printf("max{a,b} = %d", c);
  }
  
  int max(int a, int b) {
  	if (a > b) return a;
  	return b;
  }
  ```



### 指针数组

```c
数据类型 *数组名[数组长度];   // 定义
int *p[4];   // 定义一个指针数组 []优先级高于* p先形成p[]数组 再与*结合为指针
int(*p)[4]; // 这是指向一维数组的指针变量
```



### 指针引用二维数组

P243

首地址问题

```c
int a[3][2] = { {1,2}, {3,4}, {5,6} };
// 可以看成定义了三个具有两个元素的一维数组，a[0][2], a[1][2], a[2][2];
// a代表二维数组的首元素地址，首元素指的是a[0] 一个一维数组
// 对应的 a+1 代表 a[1]数组的地址
// 对应的 a+2 代表 a[2]数组的地址
```

```c
void main() {
	int a[3][2] = { {1,2}, {3,4}, {5,6} };
	printf("%d\n", a[0][0]);  // 正常引用
	printf("%d\n", *a[0]);	// a[0]代表一个一维数组，名字本身为地址，指向第一个元素
	printf("%d", a);  // 为二维数组的首地址, 也为一维数组a[0][2]的地址
    printf("%d", *a);  // 

}
1
1
7338108
```

