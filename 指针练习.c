#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	char arr[] = {'a', 'b', 'c', 'd', 'e'};

	printf("%d\n", strlen(arr));//寻找 “\0”  -> 随机值
	printf("%d\n", strlen(arr + 0));
	   //printf("%d\n", strlen(*arr));//非法访问地址，将首元素对应的ASCII值作为起始位置，往后进行计算字符串长度
	  //printf("%d\n", strlen(arr[1]));

	printf("%d\n", strlen(&arr));//随机值
	printf("%d\n", strlen(&arr + 1));//随机值 -5
	printf("%d\n", strlen(&arr[0] + 1));//随机值  -1


	//char arr[] = {'a', 'b', 'c', 'd', 'e' };
	//printf("%d\n", sizeof(arr));//字符数组大小
	//printf("%d\n", sizeof(arr + 0));
	//printf("%d\n", sizeof(*arr));//首元素地址1byte
	//printf("%d\n", sizeof(arr[1]));
	//printf("%d\n", sizeof(&arr));//取的是数组的地址，但打印时仍然是平台为准
	//printf("%d\n", sizeof(&arr + 1));
	//printf("%d\n", sizeof(&arr[0] + 1));

	//int a[] = { 1, 2, 3, 4 };//sizeof + 数组名 -> 整个数组大小；& + 数组名表示整个数组
	//printf("%d\n", sizeof(a));//整个数组的大小
	//printf("%d\n", sizeof(a + 0));
	//printf("%d\n", sizeof(*a));
	//printf("%d\n", sizeof(a + 1));//表示首元素地址，+1仅代表跳过一个元素
	//printf("%d\n", sizeof(a[1]));//第二个元素大小
	//printf("%d\n", sizeof(&a));//表示取出数组的地址，sizeof在计算大小时仍然是以平台为标准 -> 4byte/8byte
	//printf("%d\n", sizeof(*&a));//&a->表示取出数组的地址，解引用之后访问整个数组，sizeof计算数组大小时仍为整个数组大小
	//printf("%d\n", sizeof(&a + 1));//&a访问整个数组之后，+1表示跳过这个数组的首位置，到数组的末位置，计算大小时还是按平台
	//printf("%d\n", sizeof(&a[0]));//首元素地址大小
	//printf("%d\n", sizeof(&a[0] + 1));//次元素大小

	return 0;
}

//void qsort(void *base,
//	size_t num,
//  size_t  width,
//  int(*cmp)(const void *e1, const *e2)
//	);

//struct Stu{
//	char name[20];
//	int  age;
//};
//
//int cmp_int(const void* e1, const void *e2)
//{
//	if (*(int*)e1 == *(int*)e2)
//		return 0;
//	else if (*(int*)e1 > *(int*)e2)
//		return  1;
//	else
//		return -1;
//}
//
//void test1()
//{
//	int a = 1;
//	int* pa = &a;
//	int arr[6] = { 6, 5, 4, 3, 2, 1 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//    qsort(arr, sz, sizeof(arr[0]), cmp_int);//首参数排序数组起始，第二：数组大小，第三：每个元素大小，4：排序函数实现
//
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//
//int cmp_float(const void*e1, const void*e2)
//{
//	/*if (*(float*)e1 == *(float*)e2)
//		return 0;
//	else if (*(float*)e1 > *(float*)e2)
//		return 1;
//	else
//		return -1;*/
//	return (int)(*(float*)e1 - *(float*)e2);
//}
//
//
//void test2()
//{
//	float f[] = {6.0, 3.0, 4.0, 2.0, 5.0, 1.0};
//	int sz = sizeof(f) / sizeof(f[0]);
//	qsort(f, sz, sizeof(f[0]), cmp_float);
//	int j = 0;
//	for (j = 0; j < sz; j++)
//	{
//		printf("%f ", f[j]);
//	}
//}
//
//int cmp_stu_age(const void*e1, const void*e2)
//{
//	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
//}
//
//int cmp_stu_name(const void*e1, const void*e2)
//{
//	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);//字符串比较strcmp（string.h）
//}
//
//void test3()
//{
//	struct Stu s[3] = { { "你好", 30 }, { "我好", 25 }, { "大家好", 10 } };
//	int sz = sizeof(s) / sizeof(s[0]);
//	qsort(s, sz, sizeof(s[0]),cmp_stu_age);
//	//qsort(s, sz, sizeof(s[0]), cmp_stu_name);
//}
//
////程序员在调用bubble_sort函数时并不知道将要排序的数据类型
////也不清楚待比较的两个元素的类型
//void Swap(char* buf1, char*buf2,int width)//未知交换字符数量的多少，故传宽度进行限定
//{
//	int i = 0;
//	for (i = 0; i < width; i++)
//	{
//		char tmp = *buf1;
//		*buf1 = *buf2;
//		*buf2 = tmp;
//		*buf1++;
//		*buf2++;
//	}
//}
//void bubble_sort(void*base, int sz, int width, int(*cmp)(void*e1 ,void*e2))
//{
//	int i = 0;
//	//确定排序趟数
//	for (i = 0; i < sz - 1; i++)
//	{
//		//每一趟比较的对数
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			//比较两个元素
//			if (cmp((char*)base + j*width, (char*)base + (j + 1)*width) > 0)
//			{
//				//交换
//				Swap((char*)base + j*width, (char*)base + (j + 1)*width, width);
//			}
//		}
//	}
//}

//int cmp_int1(const void*e1, const void*e2)
//{
//	return *(int*)e1 - *(int*)e2;
//}
//void test4()
//{
//	int arr[9] = {8, 7, 6, 5, 4, 3, 2, 1, 0};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz, sizeof(arr[0]),cmp_int);
//}

//int main()
//{
//	//test1();
//	 //test2();
//	test3();
//	//test4();
//	return 0;
//}

//int main()
//{
//	int a = 1;
//	void* p = &a;//void*-->不能进行解引用访问,也不可进行加减运算。
//	return 0;
//}


//void menu()
//{
//	printf("######################\n");
//	printf("###  1.Add    2.Sub###\n");
//	printf("###  3.Mul    4.Div###\n");
//	printf("###  5.Xor    0.exit###\n");
//	printf("######################\n");
//}


//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return  x - y;
//}
//int Mul(int x, int y)
//{
//	return  x * y;
//}
//int Div(int x, int y)
//{
//	return  x / y;
//}
//
//int Xor(int x, int y)
//{
//	return  x ^ y;
//}

//int main()
//{
//	int x = 0;
//	int y = 0;
//	int input = 0;
//	//转移表
//	int(*pfArr[])(int, int) = {0, Add, Sub, Mul, Div, Xor};//pfArr是一个函数指针数组
//	//通过访问下标找到对应的函数，后进行调用
//	do
//	{
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		if (input >= 1 && input <= 5)
//		{
//			printf("请输入两个操作数:>");
//			scanf("%d%d", &x, &y);
//			int ret = pfArr[input](x, y);
//			printf("%d\n", ret);
//		}
//		else if (input == 0)
//		{
//			printf("退出\n");
//		}
//		else
//		{
//			printf("选择出错\n");
//		}
//
//	} while (input);
//	return 0;
//}

//void Calc(int (*pf)(int, int))
//{
//	int x = 0;
//	int y = 0;
//	printf("请输入两个操作数:>");
//	scanf("%d%d", &x, &y);
//	printf("%d\n", pf(x,y));
//}
//int main()
//{
//	/*int x = 0;
//	int y = 0;*/
//	int input = 0;
//	do
//	{
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		
//		switch (input)
//		{
//		case 1:
//			Calc(Add); /*  printf("%d\n", Add(x, y));*/
//			break;
//		case 2:
//			Calc(Sub);/*	printf("请输入两个操作数:>");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", Sub(x, y));*/
//			break;
//		case 3:
//			Calc(Mul);  /*printf("请输入两个操作数:>");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", Mul(x, y));*/
//			break;
//		case 4:
//			Calc(Div);
//		/*	printf("请输入两个操作数:>");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", Div(x, y));*/
//			break;
//		case 5:
//			Calc(Xor);/*	printf("请输入两个操作数:>");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", Xor(x, y));*/
//			break;
//		case 0:
//			printf("退出\n");
//			break;
//		default:
//			printf("选择错误\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}

//char* my_strcpy(char* dest, const char* src);//写一个函数指针 pf 指向 my_strcpy
// --> char* (*pf)(char*, const char*)

//写一个函数指针数组 pfArr 用于存放4个my_strcpy函数的地址
//--> char* (*pfArr[4])(char*, const char*)

//int main()
//{
//	int*  arr[5];
//	int (*pa)(int, int) = Add;
//	int(*parr[4])(int, int) = { Add, Sub, Mul, Div };
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d ", parr[i](1, 1));
//	}
//	return 0;
//}

//void(* signal(int, void(*)(int))  )(int);//signal函数有int、viod(*)(int)->函数指针变量，空返回
//signal函数的返回类型也为空，函数指针指向的变量参数为int
//(*(void(*)())0)()--把0强制类型转化为：void(*)()的函数指针类型 - 0作为该函数的地址并调用

//int Add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}
//void main()
//{
//	int (*pa)(int, int) = Add;
//	printf("%d\n", (*pa)(2,3));
//	
//}

//void print(int *p, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//}
//
//int main()
//{
//	int arr[6] = { 1, 2, 3, 4, 5, 6 };
//	int *p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(p, sz);
//	return 0;
//}

//void print2(int (*p)[3], int x, int y)
//{
//	int i = 0;
//	for (i = 0; i < x; i++)
//	{
//		int j = 0;
//		for (j = 0; j < y; j++)
//		{
//			printf("%d ", p[i][j]);
//			//printf("%d ", *(p[i] + j));
//			//printf("%d ", *(*(p + i) + j));
//			//printf("%d ", (*(p + i))[j]);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int arr[3][3] = { { 1, 2, 3 }, { 4, 5, 6 }, { 7, 8, 9 } };
//
//	print2(arr, 3, 3);
//	return 0;
//}


//int main()
//{
//	char* arr[5];
//	char* (*pa)[5] = &arr;//数组地址 char* -> 所指数组类型，*pa -> *说明pa(变量名称)为指针，所指元素为5
//	//[] -> 优先级高于*，&arr --> 数组地址
//	//数组指针
//	return 0;
//}

//int main()
//{
//	int arr1[] = {1, 2, 3, 4};
//	int arr2[] = {5, 6, 7, 8};
//	int arr3[] = {9, 8, 6, 7};
//
//	int* parr[] = {arr1, arr2, arr3};
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d ",*(parr[i] + j));
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	char arr1[] = "abcd";
//	char arr2[] = "abcd";
//
//	const char* p1 = "abcd";
//	const char *p2 = "abcd";//以指针的形式命名，常量字符，存储字符时，仅用一个地址存储即可
//	 
//	if (p1 == p2)
//	{
//		printf("很好\n");
//	}
//	else
//	{
//		printf("好\n");
//	}
	

	//if (arr1 == arr2)
	//{
	//	printf("你好\n");
	//}//创建的字符数组所处空间不同，即不同数组所指向的首元素地址不同
	//else
	//{
	//	printf("好\n");
	//}
//	return 0;
//}


//int main()
//{
//	 const char* p  = "abcd";//存放首元素地址，常量字符串
//	  // *p = 's';
//	 //printf("%s\n", p);
//	//printf("%c\n", *p);//打印一个字符
//	//printf("%s\n", p );
//
//	return 0;
//}