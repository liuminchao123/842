## 一个字符占两个字节





## scanf里面不要有逗号

```c
scanf("%d %d", &a, &b);   // 正确
scanf("%d, %d", &a, &b);   // 错误
```



## struct有非法的大小为零的数组

```c
	struct Student {   // 数据类型声明  声明了一个Student类型
		char name[];
		int age;
		char gender;
	};
```

错误 

一个结构体可以包含一个大小为0的数组，但是必须处于结构体末尾，并且其不占用结构体内存空间

```c
	struct Student {   // 数据类型声明  声明了一个Student类型
		int age;
		char gender;
		char name[];  // 在末尾
	};
```

或是 声明长度

```c
	struct Student {   // 数据类型声明  声明了一个Student类型
		char name[10];
		int age;
		char gender;
	};
```



## 在for中定义的i

```c
int getnum(int num) {  // 获取数字的位数
	for (int i = 1; num / 10 == 0; i++) {
		num = num / 10;
	}
	return i;  // 返回获取的位数
}
```

会报错

 ![image-20220909212205209](https://s2.loli.net/2022/09/09/ZqsuDXyHJ4gd3LA.png)

应该为

```c
int getnum(int num) {  // 获取数字的位数
	int i;
	for (i = 1; num / 10 == 0; i++) {
		num = num / 10;
	}
	return i;  // 返回获取的位数
}
```

