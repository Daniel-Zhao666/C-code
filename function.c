#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<math.h>

 /*int Add(int x, int y)
{
	 int z = x + y;
	 return z;
}*/

#include "add.h"

int main()
{//自定义函数用双引号，调用库函数使用<>
	int a = 10; //一般将函数定义、声明放在头文件中（即新建一个头文件），而函数实现在.c(新建一个放置函数定义的)文件中，使用时直接调用
	int b = 0;
	int sum = 0;
	sum = Add(a, b);
	printf("%d\n ", sum);
	return 0;
}


//void Add(int* p)
//{
//	(*p)++;//++的优先级高于解地址操作符
//}
//int main()
//{//实现每调用一次函数，num的值会增1
//	int num = 0;
//	Add(&num);
//		printf("num = %d\n", num);
//	Add(&num);
//		printf("num = %d\n", num);
//	Add(&num);
//		printf("num = %d\n", num);
//	return 0;
//}


//int binary_search(int arr[], int k, int sz)//接收的数组中不是单个变量的大小，实际上是接收其地址
//{
//  //算法实现（二分查找）
//	int left = 0;
//	int right = sz - 1;//不可在函数中计算数组里面的元素的个数，win 32平台计算数组大小实质上为4个byte
//	while (left <= right)//=不可少，否则可能会失去所需元素
//	{
//		int mid = (left + right) / 2;//定义中间元素，并求其下标
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11 };
//	int k = 11;
//	int sz = sizeof(arr) / sizeof(arr[0]);//传递数组的首个元素地址
//	int ret = binary_search(arr, k, sz);
//	if (ret == -1)
//	{
//		printf("没找到对应的数字\n");
//	}
//	else
//	{
//		printf("找到数字，下标为：%d\n", ret);
//	}
//	return 0;
//}

//int is_leap_year(int y)
//{
//	if (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0))
//		return 1;
//	else
//		return 0;
//}
//
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (1 == is_leap_year(year))
//		{
//			printf("%d ", year);
//		}
//	}
//
//	return 0;
//}

//int is_prime(int n)
//{
//	int i = 0;
//	for (i = 2; i <= sqrt(n); i++)
//	{
//		if (n%i == 0)
//			return 0;
//	}
//	return 1;
//}
//
// int main()
//{
//	int j = 0;
//	for (j = 1; j <= 10; j++)
//	{
//		if (is_prime(j) == 1)
//		printf("%d ", j);
//	}
//	return 0;
//}

//void Swap1(int x, int y)
//{
//	int tmp = 0;
//	tmp = x;
//	  x = y;
//	  y = tmp;
//}//此时的Swap函数并没有达到交换变量的目的，说明函数中的x、y和a、b变量不在
////内存中的相同空间
//
//void Swap2(int* pa, int* pb )//引入指针变量Swap1、Swap2（同属于形式参数）
//                            //形参实例化之后相当于实参的一份临时拷贝
//{
//	int tmp = 0;
//	tmp = *pa;
//	*pa = *pb;//*--解地址操作符
//	*pb = tmp;
//}
//
//int main()
//{
//	int a = 1;
//	int b = 2;
//	Swap1(a, b);  /*int tmp = 0;*/
//	printf("a= %d b= %d\n", a, b);
//	              //tmp = a;
//	              //  a = b;
//	              //  b = tmp;
//	Swap2(&a, &b);
//	  printf(" a=%d b=%d\n", a, b);
//	return 0;
//}


//int get_min(int x, int y)
//{
//	if (x > y)
//		return y;
//	else
//		return x;
//}
//int main()
//{
//	int m = 6;
//	int n = 8;
//	int min = get_min(m , n);
//	printf(" min = %d\n", min);
//	return 0;
//}

//int main()
//{
//
//	char arr[] = "CDUT";
//
//	memset(arr, '*', 2);//memset(头文件string.h),void * memset(void*ptr, int value, size_t num)
//	printf("%s,\n", arr);
//
//	return 0;
//}