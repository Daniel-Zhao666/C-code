#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<assert.h>

void main()
{



}

//void main()
//{
//	char arr[] = "192.168.1.1";
//	char *p = ".";
//
//	char buf[1020] = { 0 };
//	strcpy(buf, arr);
//
//	char* ret = NULL;
//	for (ret = strtok(arr, p); ret != NULL; ret = strtok(NULL, p))
//	{
//		printf("%s\n",ret);
//	}
//
//}

//void main()
//{
//	//strstr - 查找子字符串
//	 char    *p1 = "abcdf";
//	 char    *p2 = "abc";
//
//	char* ret = strstr( p1, p2);//在p1中查找p2
//
//	if (ret == NULL)
//	{
//		printf("不存在\n");
//	}
//	else
//	{
//        printf("%s\n", ret);
//	}
//	
//}


//void main()
//{
//	//strncmp - 字符串比较
//
//	const char* p1 = "abcde";
//	char* p2 = "abcdef";
//	int ret = strncmp(p1, p2, 6);
//	printf("%d\n", ret);
//}

//int my_strcmp(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	while (*str1 == *str2)
//	{
//		if (*str1 == '\0')
//			{
//				return 0;
//			}
//			str1++;
//			str2++;
//	}
//		if (*str1 > *str2)
//				return 1;
//		else
//				return -1;
//}
//
//void main()
//{
//	char* p1 = "abcd";
//	char* p2 = "abc";
//	int ret = my_strcmp(p1, p2);
//	printf("ret = %d\n", ret);
//}

//char* my_strcat(char* dest, const char* src)
//{
//	char* ret = dest;
//	assert(dest != NULL);
//	assert(src);
//	//1.找到目标地址字符串的‘\0’
//	while (*dest != '\0')
//	{
//		dest++;
//	}
//	//2.追加
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}

//void main()
//{
//	char arr1[10] = "hi";
//	char arr2[]   = "hello";
//	my_strcat(arr1, arr2);
//	printf("%s\n", arr1);
//}

//char* my_strcpy(char* dest, const char* src)
//{
//	assert(dest != NULL);
//	assert(src  != NULL);
//	char* ret = dest;
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}

//void main()
//{
//	char arr1[30] = "abcde";
//	char arr2[] = "fgh";
//
//	my_strcpy(arr1, arr2);
//	printf("%s\n",arr1);
//}


//int my_strlen(const char* str)
//{
//	int count = 0;
//	assert(str != NULL);
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}



//void main()
//{
//	//size_t strlen(unsigned int -> 无符号数) 
//	if (my_strlen("abc") - my_strlen("abcd") > 0)
//	{
//		printf("hello\n");
//	}
//	else
//	{
//		printf("hi\n");
//	}
//}