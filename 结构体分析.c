#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//结构体变量 + 结构体标签
//struct Xs
//{
//	char name[10];
//	int  age;
//	char tele[20];
//
//}s1;//利用结构体创建的变量(名)列表（全局变量）

//typedef struct Node
//{
//	int data;//
//	struct Node* next;//结构体中嵌套自己的结构体，用指针解决
//}Node;
//
//void main()
//{
//	struct Node n1;
//	Node n2;
//
//}

//struct S1
//{
//	char c1;
//	int  a;
//	char c2;
//};
//
//struct S2
//{
//	char c1;
//	char c2;
//	int  a;
//};
//
//struct S3
//{
//	double d;
//	char   c;
//	int    i;//将相同占用空间的变量放在一起，可以实现减少空间占用的问题
//};

//void main()
//{
//	//struct S1 s1 = {0};
//	//printf("%d\n", sizeof(s1));
//	//struct S2 s2 = {0};
//	//printf("%d\n", sizeof(s2));
//	struct S3 s3 = { 0 };
//	printf("%d\n", sizeof(s3));
//}

//#pragma pack(1)//设置默认对齐数为1
//struct S
//{
//	char   c1;
//	double d;
//};
//#pragma pack()//取消默认对齐数
//
//void main()
//{
//	struct S s;
//	printf("%d\n", sizeof(s));
//
//}

struct S
{
	int    a;
	char   b;
	float  c;
};

void  Init(struct S* ps)
{
	ps -> a = 1;
	ps -> b = 'e';
	ps -> c = 3.0;
}

void Print1(struct S tmp)
{
  	printf("%d %c %f\n", tmp.a, tmp.b, tmp.c);
}

void Print2(const struct S* ps)
{
	printf("%d %c %f\n", ps->a, ps->b, ps->c);
}

void main()
{
	struct S s = { 0 };
	Init(&s);
	Print1(s);
	Print2(&s);
}