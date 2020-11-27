#include<stdio.h>
//自定义类型：结构体  枚举  联合
//结构体：
//1.结构体类型的声明
//2.结构的自引用
//3.结构体变量的定义和初始化
//4.结构体内存对齐
//5.结构体传参
//6.结构体实现位段（位段的填充&可移植性）
//struct Tag
//{
//	member-list;
//}variable-list;

//1.结构体类型的声明
//struct Stu
//{
//	char name[20];
//	char tele[12];
//	char sex[10];
//	int age;
//}s4,s5,s6; // 这里是变量列表
//struct Stu s3;  // 这里创建的s3,s4,s5,s6 都是全局变量
//int main()
//{
//	struct Stu s1;//其中s1,s2为局部变量
//	struct Stu s2;
//	return 0;
//}

//2.结构的自引用
//struct Node
//{
//	int date;
//	struct Node next;
//};
////这样的结构体是错的，你的每个struct Node里面都包含了一个int 和struct Node的类型，那么这个计算机得创建多大的空间才能够你使用呢？
//struct Node
//{
//	int date;
//	struct Node* next; // 可以考虑让这个指针指向一个空间，来进行内存的开辟
//};

//3.结构体变量的定义和初始化
//struct T
//{
//	double weight;
//	short age;
//};
//struct S
//{
//	char c;
//	struct T st;
//	int a;
//	double d;
//	char arr[20];
//};
//int main()
//{
//	struct S s = { 'c', {78.8,30}, 20, 3.14, "zhangsan" };
//	printf("%c  %lf %d %d %lf %s", s.c,s.st.weight,s.st.age, s.a, s.d, s.arr);
//return 0;
//}

//struct S1
//{
//	char c1;
//	int a;
//	char c2;
//};    12
//
//struct S2
//{
//	char c1;
//	char c2;
//	int a;
//};     8
//
//int main()
//{
//	struct S1 s1 = { 0 };
//	printf("%d\n", sizeof(s1));
//	struct S2 s2 = { 0 };
//	printf("%d\n", sizeof(s2));
//	return 0;
//}


//struct S3
//{
//	double d;
//	char c;
//	int i;
//};
//struct S4
//{
//	char c1;
//	struct S3 s3;
//	double d;
//};
//int main()
//{
//	struct S3 s3 = { 0 };
//	printf("%d\n", sizeof(s3));
//	struct S4 s4 = { 0 };
//	printf("%d\n", sizeof(s4));
//	return 0;
//}

//#include<stddef.h>
//size_t offsetof(structName,memberName);
//struct S
//{
//	char c;
//	int i;
//	double d;
//};
//int main()
//{
//	printf("%d\n", offsetof(struct S, c));
//	printf("%d\n", offsetof(struct S, i));
//	printf("%d\n", offsetof(struct S, d));
//}
//5.结构体传参

//struct S
//{
//	int a;
//	char c;
//	double d;
//};
//void Init(struct S* ps)
//{
//	ps->a = 100;
//	ps->c = 'd';
//	ps->d = 3.14;
//}
//void Print1(struct S tmp)
//{
//	printf("%d\n", tmp.a);
//	printf("%c\n", tmp.c);
//	printf("%lf\n", tmp.d);
//}  
//void Print2(const struct S* ps)
//{
//	printf("%d\n", ps->a);
//	printf("%c\n", ps->c);
//	printf("%lf\n", ps->d);
//}
//int main()
//{
//	struct S s = { 0 };
//	Init(&s);
//	Print1(s); // 因为这里我并不打算修改里面变量的内容，我只是想把它打印出来
//	Print2(&s);
//}

//6.结构体实现位段（位段的填充&可移植性）
//什么是位段?(这个位指的是二进制位)
//位段的声明和结构是类似的，有两个不同：
//1.位段的成员必须是int，unsigned int 或 signed int 
//2.位段的成员名后面有一个冒号和一个数字

//位段的内存分配
//1.位段的成员可以是int  unsigned int  signed int 或者是char （属于整形家族）类型
//2.位段的空间上是按照需要以4个字节（int）或者一个字节（char）的方式来开辟的
//3.位段设计很多不确定的因素，位段是不垮平台的，注重可移植的程序应该避免使用位段。
//struct S
//{
//	int a : 2;
//	int b : 5;
//	int c : 10;
//	int d : 30;
//};   //a占两个bit位，b占5个，c占10个bit为，这样一共占用了17个bit位，还剩下15个bit位，放不下30个bit位，
////所以剩下的30个bit位我需要重新开辟一个空间来放置，每次开放是以int类型开辟的，32个字节，所以一共需要的是8个字节的空间
//int main()
//{
//	struct S s;
//	printf("%d\n", sizeof(s));
//	return 0;
//}



//枚举（顾名思义就是一一列举）
//1.枚举的定义
//2.枚举的优点
//3.枚举的使用

////枚举的类型
//enum Day
//{
//	//枚举的可能取值
//	Mon,
//	Tues,
//	Wed,
//	Thur,
//	Fri,
//	Sat,
//	Sun
//};
//int main()
//{
//	enum Day s = Thur; // 这里的Thur必须是枚举里面所定义过的类型变量
//	return 0;
//}

//枚举的优点
//我们可以使用#define定义常量，为什么非要使用枚举？
//1.增加代码的可读性和可维护性
//2.和#define定义的笔试符比较枚举有类型检查，更加严谨
//3.放置了命名污染
//4.便于调试
//5.使用方便，一次可以定义多个常量

//联合
//1.联合类型的定义
//联合也是一种特殊的自定义类型，这种类型定义的变量也包含一系列的成员，特征是这些成员公用一块空间（所以联合也叫共用体）
//union Un
//{
//	char c;
//	int i;
//};// 这里你以为所占空间的大小会是5，错误的，是4。因为他们公用同一块空间，所以所占空间的大小是里面类型最大的空间
//int main()
//{
//	union Un u;
//	printf("%d\n", sizeof(u));
//	
//	
//	printf("%p\n", &u);
//	printf("%p\n", &(u.c));
//	printf("%p\n", &(u.i));
//	return 0;
//}

//2.联合的特点


//3.联合大小的计算

union Un
{
	int a;
	char arr[5];  //拿类型来算最大对齐数
};

int main()
{
	union Un u;
	printf("%d\n", sizeof(u)); //结果为8   int大小是4个字节，整体的大小应该是里面最大成员的整数倍
	return 0;
}
