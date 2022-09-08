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

