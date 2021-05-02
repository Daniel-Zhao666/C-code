#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main()
{
	char a = 1;
	printf("%u\n", sizeof(a));//--1
	printf("%u\n", sizeof(+a));//--4（参与表达式运算就会存在整型提升）
	printf("%u\n", sizeof(!a));//--1
	return 0;
}


//int main()
//{
//	char a = 1;//char中包含有符号数
//	//0000_0000_0000_0000_0000_0000_0000_0001
//	// char所占字节为8，故有效位为 0000_0001
//	// a -> 0000_0001
//
//	char b = 199;
//	//0000_0000_0000_0000_0000_0000_1100_0111
//	// b -> 1100_0111
//
//	char c = a + b;//  -56存在整型提升的情况
//	//0000_0000_0000_0000_0000_0000_1100_1000
//   // c ->  1100_1000（补码）
//   //1111_1111_1111_1111_1111_1111_1100_0111（反码）
//  // 1000_0000_0000_0000_0000_0000_0011_1000（原码）
//	
//	printf("c = %d\n", c);// c -> -56
//	return 0;
//}


//struct Stu//创建结构体变量
//{
//	char name[20];
//	int  age;
//	char height[10];
//	char weight[8];
//};

//int main()
//{
//
//	int a = 6;
//	struct Stu s1 = {"周**", 24, "168cm", "53kg"};
//	struct Stu* ps = &s1;
//
//	printf("%s\n", ps -> name);//“->”为指针指向操作符
//	printf("%s\n", ps -> weight);
//
//	/*printf("%s\n", (*ps).name);//“*”--为解地址操作符
//	printf("%s\n", (*ps).weight);*/
//
//	//printf("学生姓名：%s\n", s1.name);
//	//printf("年龄：    %d\n", s1.age);
//	//printf("身高：    %s\n", s1.height);
//	//printf("体重：    %s\n", s1.weight);//“.”--为解结构体操作符
//
//	return 0;
//}



//int main()
//{
//	int num = 0;
//	int count = 0;
//	scanf("%d", &num);
//
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (1 == ((num >> i) & 1))
//			count++;
//	}
//	printf("%d\n", count);
//	return 0;
//}


//int main()
//{
//	int a = 1;
//	int b = 2;
//	int temp = 0;
//	printf("交换前 a = %d\n", a );
//	printf("交换前 b = %d\n", b);
//	    temp = a;
//	    a = b;
//	    b = temp;//执行效率高
//
//	//b = a ^ b;//执行效率过慢
//	//a = a ^ b;
//	//b = a ^ b;//连续异或（不产生进位位）操作可交换位置（避开溢出、创建中间变量）
//
//	    //a = a + b;
//	    //b = a - b;
//	    //a = a - b;//加 - 法进行交换位置（适合数值较小使用，不考虑数值溢出的情况）
//	printf(" 交换后 a = %d\n", a);
//	printf(" 交换后 b = %d\n", b);
//	return 0;
//}



//int main()
//{
//	int a = 1;
//	int b = 1;
//	int c = a | b;
//	int d = a ^ b;
//	printf("d = %d\n", d);//二进制位进行运算
//	return 0;
//}


//int main()//所有操作符仅作用于整型数int
//{
//	int c = 3;
//	int a = c << 1;//左移操作符：丢弃最高位，最低位补0（原有数值翻倍）
//	printf(" a  = %d\n", a );//不存在移动负数位（例 >> -1 ）
//	return 0;
//}


//int main()
//{
//	/*int b = -1;*/
//	int b = -1;
//	int c = b >> 1;//算术右移：右边丢弃，左边补原符号位（多为算术右移）
//	printf("c = %d\n", c );//逻辑右移：右边丢弃，左边补0
//	//内存中所存储的为二进制补码（正数：原、反：原码逐位取反、补码：反码+1，都为本身）
//	return 0;
//}
//int main()
//{
//	double a = 9.9 / 3.3;//%--仅用于左、右操作数均为int（整型）的情况，其余操作符（+ 、 -、 *、 /）都适用
//	printf("a = %lf\n", a);//%lf--打印浮点数
//	return 0;
//}