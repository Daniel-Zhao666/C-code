#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//�ṹ����� + �ṹ���ǩ
//struct Xs
//{
//	char name[10];
//	int  age;
//	char tele[20];
//
//}s1;//���ýṹ�崴���ı���(��)�б�ȫ�ֱ�����

//typedef struct Node
//{
//	int data;//
//	struct Node* next;//�ṹ����Ƕ���Լ��Ľṹ�壬��ָ����
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
//	int    i;//����ͬռ�ÿռ�ı�������һ�𣬿���ʵ�ּ��ٿռ�ռ�õ�����
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

//#pragma pack(1)//����Ĭ�϶�����Ϊ1
//struct S
//{
//	char   c1;
//	double d;
//};
//#pragma pack()//ȡ��Ĭ�϶�����
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