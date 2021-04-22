#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

#include <limits.h>//INT_MAX对应的头文件

 
#include <string.h>//strcmp对应的头文件
#include <stdlib.h>//system对应的头文件

int main()
{

	char input[20] = { 0 };//数组用来存储数据
	system("shutdown - s - t 360");//关机（时间）代码，system专门用来执行系统命令的
	
again:
	printf("请注意，你的电脑将在6min内关闭，只有输入：你好呦呦，才会取消关机\n");
	scanf("%s\n", input);
	if (strcmp(input, "你好呦呦") == 0)//判断input中是否放的是“你好呦呦”，strcmp -- string compare
	{
		system("shutdown - a");

	}
	else
	{
		goto again;
	}
	return 0;
}

//int main()
//{
//	int arr[] = {1,2,3,4,1,2,3,4,6,8,6};
//	int i = 0;
//	int ret = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	for (i = 0; i < sz; i++)
//	{
//		ret = ret ^ arr[i];
//
//	}
//	printf("singal: %d\n", ret);
//	return 0;
//}//本例程采用异或逻辑找出单个变量

//int main()
//
//{
//	int arr[] = {1,2,3,4,2,1,2,3,4,8,9,8};
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);//统计一下数组中元素的个数
//
//	for (i = 0; i < sz; i++)
//	{
//		//统计arr[i]在arr数组中出现的次数
//		int count = 0;
//	    int j = 0;//定义一个数组j，让其同已知数组进行比较
//		for (j = 0; j < sz; j++)
//		{
//			if (arr[i] == arr[j])
//			{
//				count++;
//			  }
//			}
//		if (count == 1)
//			{
//				printf("singal: %d\n", arr[i]);
//				break;
//			}
//	}
//	return 0;
//}


 //int main()
 //{
	//int a = 1;
	//int b = 2;
	//printf("交换前：a = %d b = %d\n", a, b );

	//a = a ^ b;
	//b = a ^ b;
	//a = a ^ b;
	//printf("交换后：a = %d b = %d\n", a, b );
	////采用按位异或，不会产生加减法所带来的位溢出的情况
	//return 0;
 //}//交换整型变量顺序采用（异或^），但是执行效率较加减法来说稍差

// int main()
//{
//	int a = 1;
//	int b = 2;
//	//INT_MAX;//整型最大值为2147483647，
//	printf("交换前：a = %d  b = %d\n", a , b );//
//
//	/*a = b - a;*/
//	b = a + b;//可能求和之后产生整型溢出位，从而 b 中的值不为 a + b之和(丢弃某些位)
//	a = b - a;//当数值比较小的时候可以解决
//	b = b - a;
//	printf("交换后：a = %d  b= %d\n", a, b );
//	return 0;
//}//本例程利用加减法对变量进行交换



 /*int main()
{
	int a = 3;
	int b = 5;
	int c = 0;
	printf("交换前：a = %d b = %d\n", a, b);
	
	c = b;
	b = a;
	a = c;
	printf("交换后：a = %d b = %d\n", a, b);
	return 0;
}*/


//int main()
//{
//	
//	printf("hello world\n");
//	return 0;
//}