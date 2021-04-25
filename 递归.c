#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>

int Fib(int n)
{
	int a = 1;
	int b = 1;
	int c = 1;
	while (n > 2)
	{
		c = a + b;
		a = b;
		b = c;
		n--;//减少重复计算的次数
	}
	return c;// 1 1 2 3 5 8 13 21 34 55（斐波那契数）
}//采用循环处理，以加快运算速度

int main()
{

	int n = 0;
	int ret = 0;
	scanf("%d", &n);
	ret = Fib(n);
	printf("ret = %d\n", ret);
	return 0;
}

//int Fac1(int n)
//{
//	int j = 1;
//	int ret = 1;
//	for (j = 1; j <= n; j++)
//	{
//		ret *= j;
//	}
//	return ret;
//}//采用for循环解决
//
//
//int Fac2(int n)
//{
//	if (n <= 1)
//	{
//		return  1;
//	}
//	else
//	{
//		return n * Fac2(n - 1);//递归的形式循环调用
//	}
//}
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	/*ret = Fac1(n);*/
//	ret = Fac2(n);
//	printf("%d\n", ret);
//	return 0;
//}




//int my_strlen(char* str)
//{
//	if (*str != '\0')//int count = 0;//定义计数器
//		return 1 + my_strlen(str + 1);//while (*str != '\0')
//	else  //{
//		return 0; //无中间变量     //	count++;//计数器自+
//	                  //	str++;//字符串自+
//	                 //}return count;
//}
//
//int main()
//{
//	char arr[] = "bit";
//	 int len = strlen(arr);//求字符串长度
//	 //printf("%d\n", len);
//	int len = my_strlen(arr);//arr数组，在传参数是不是整个数组而是首个元素的地址
//	printf("len = %d\n", len);
//	return 0;
//}


//void print(int n)
//{
//	if (n > 9)
//	{
//		print(n/10);//取商
//	}
//	printf("%d ", n % 10);//%--取余数
//}
//
//
//int main()
//{
//
//	unsigned int num = 0;
//	scanf("%d ", &num);
//	print(num);
//
//	return 0;
//}