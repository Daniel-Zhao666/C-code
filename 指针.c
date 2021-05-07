#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//int main()
//{
//	int arr[9] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 9; i++)
//	{
//		*(p + i) = i;
//	}
//
//	for (i = 0; i < 9; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	/*for (i = 0; i < 9; i++)
//	{
//		printf("%p   ======  %p\n", p + i, &arr[i]);
//	}*/
//
//	return 0;
//}


//#define N_VALUES 5 
//int main()
//{
//   float values[N_VALUES];
//   float *vp;
//    
//   for (vp = &values[N_VALUES]; vp > &values[0];)
//   {
//     	*--vp = 0;
//   }//C--允许指向数组的指针与所指最后的元素怒之后的指针比较，而不支持数组最前的指针比较
//	return 0;
//}

//int my_strlen(char* str)
//{
//	char* start = str;
//	char* end = str;
//	while (*end != '\0')
//	{
//		end++;
//	}
//	return end - start;
//}
//
//int  main()
//{
//	char arr[] = "hello";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}


//int main()
//{
//	int arr[9] = {1,2,3,4,5,6,7,8,9};
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* p = arr;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *p);
//		p ++;//指针--整数
//	}
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	int b = 6;
//	int* pa = &a;//初始化指针
//	int* p = NULL;//运用空指针
//	return 0;
//}

//int* test()
//{
//	int a = 6;//局部变量，首先向内存申请地址，只要出调用的函数，自动归还空间
//	return &a;
//}
//int main()
//{
//	int* p = test();
//	printf("%d\n", *p);//寻址时a的空间可能被重新分配而找不到地址
//	return 0;
//}


//产生野指针
//int main()
//{
//	//int *p;//局部变量指针不初始化，默认为随机值
//	//*p = 3;//非法
//	int arr[10] = {0};
//	int *p = arr;
//	int i = 0;
//	for (i = 0; i < 13; i++)
//	{
//		*(p++) = i;//指针所指向的范围超出数组范围时，此时p为野指针
//	}
//	return 0;
//}

//int main()
//{
	//int   a = 0x223366;
	//int* pa = &a;
	//char* pc = &a;
	//printf("%p\n", pa);
	//printf("%p\n", pa + 1);

	//printf("%p\n", pc);//指针类型决定了指针向前或向后走的距离（步径：单位--byte）
	//printf("%p\n", pc + 1);
	/*return 0;
}*/


//int main()
//{
//	//printf("%d\n", sizeof(int*));// --4（32位平台上的指针大小为4）
//	//printf("%d\n", sizeof(char*));// --4
//	//printf("%d\n", sizeof(float*));// --4
//
//	int a = 0x223366;
//	int* pa = &a;//指针类型决定了访问的字节数（整型： *p-访问4byte，char：*p -访问1byte，float：*p- 访问4byte）
//	char* pc = &a;//解引用操作符
//	*pc = 1;
//	//printf("%p\n", pa);//所存变量类型不同，但地址相同
//	//printf("%p\n", pc);
//
//	return 0;
//}