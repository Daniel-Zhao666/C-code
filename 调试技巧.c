#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<assert.h>

int my_strlen(const char* str )
{
	int count = 0;
	assert(str != NULL);
	//保证指针的有效性
	while (*str != '\0')//当指针元素未到\0时，继续计数字符
	{
		count++;
		str++;
	}
	return count;
}

int main()
{
	char arr[] = "abcdef";
	int len = my_strlen(arr);
	printf("%d\n", len);
	return 0;
}

//int main()
//{
//	 int num = 6;
//	 int* const p = &num;
	 //int * const p = &num;
	//const在指针变量*左边时，修饰的是*p（不可通过修改地址而改变*p（num）参数)
	//const在指针变量*右边时，修饰的是变量p（不影响*p的使用）,此时的变量p不可被修改
	/**p = 8;
	p = &n;
	printf("%d\n", num);

	return 0;
}*/

//char* my_strcpy(char* dest, const char* src)//const（常属性而不可更改），见MSDN
//{
//	char* ret = dest;//定义ret保存最开始的目的地址
//	assert(dest != NULL);//断言
//	assert(src  != NULL);//断言
//	//将src指向的字符串拷贝到dest的空间（包括“\0”）
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;//返回被拷贝后的目标地址
//}

//void my_strcpy(char* dest , char* src)
//{
//	assert(dest != NULL);//（引用头文件assert.h）
//	assert(src != NULL);
//	while (*dest++ = *src++)
//	{
//		;
//	}
//
//}

//void my_strcpy(char* dest, char* src)
//{
//	if (dest != NULL && src != NULL)//跳过空指针
//	{
//         while (*dest++ = *src++)
//        {
//        	;
//        }
//	}
//}

//void my_strcpy(char* dest, char* src)
//{
//	while (*src != '\0')
//	{
//		*dest = *src;
//		src++;
//		dest++;
//	}//拷贝字符hello
//	*dest = *src;//将\0拷贝到数组arr1
//}

//int main()
//{
//	char arr1[] = "******";
//	char arr2[] = "hello";
//	my_strcpy(arr1, arr2);//传NULL（空指针）时，程序崩溃
//	printf("%s\n", arr1);
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
//	//栈区的使用默认为 先高地址 后低地址（岁数组下标的增长由低到高而变化）
//
//	printf("%p\n", arr);//relase存在优化程序的情况
//	printf("%p\n", &i);
//
//	system("pause");
//
//	for (i = 0; i <= 10; i++)
//	{
//		printf("hello\n");
//		arr[i] = 0;
//	}//数组在访问的过程中可能存在与局部变量重合（越界）的情况，从而产生死循环
//	
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int sum = 0;
//	int n = 0;
//	int ret = 1;
//	scanf("%d", &n);  
//	for (i = 1; i <= n; i++)
//	{
//		int j = 0;
//		ret = 1;
//		for (j = 1; j <= i; j++)
//		{
//			ret *= j;
//		}
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}//计算n的阶乘