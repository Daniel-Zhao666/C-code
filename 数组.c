#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

int main()
{
	int arr1[] = {1, 2, 3, 6, 8, 9};
	printf("%p\n", arr1);//数组名表示首元素的地址
	printf("%p\n", arr1 + 1);
	printf("%p\n", &arr1[0]);//“&+数组名”表示仅取首元素的地址，同上
	printf("%p\n", &arr1[0] + 1);
	printf("%p\n", &arr1);//表示取整个数组的地址（从首元素地址开始），此时的数组名表示整个数组
	printf("%p\n", &arr1 + 1);
	return 0;
}//注：当遇到sizeof（arr）计算数组大小时，不在是取首元素的地址，单位是byte

//void bubble_sort(int arr[], int sz)
//{
//	//冒泡排序，即循环元素后按顺序排列
//	//确定冒泡排序的趟数
//	int i = 0;
//	/*int sz = sizeof(arr) / sizeof(arr[0]);*///计算数组中的元素个数，数组传参时，是传输首元素的地址（指针）
//	for (i = 0; i < sz - 1; i++)
//	{
//		int flag = 1;//假设此次排序的数据已经有序，确定每趟冒泡排序
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)//产生动态变化的比较次数；若保持sz-1（常数），则无法产生逐次减少的比较次数
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;//临时变量
//				flag = 0;//本次排序的数据不完全有序
//			}
//		}
//		if (flag == 1)
//		{
//			break;
//		}//若flag再次为1，则跳出循环
//
//	}
//}
//int main()
//{
//	int arr[] = { 7, 8, 9, 1, 3, 2, 6, 4, 5 };
//	int i = 0;//以升序排列数组中的元素
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr , sz);//冒泡排序函数，此时函数传参的arr表示首元素地址
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	int arr[3][3] = { { 1, 2, 3 }, { 4, 5, 6 } };//二维数组初始化的时候，列下标不可省略
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 3; j++)
//		{
//			printf("&arr[%d][%d] = %p\n", i, j, &arr[i][j]);//二维数组存储方式同一维。地址依次递增，相邻行之间相差
//			//一个类型
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int arr[3][3] = { { 1, 2, 3 }, { 4, 5, 6 } };//二维数组初始化的时候，列下标不可省略
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 3; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//int main()
//{
//
//	//int arr[9];
//	//int arr2[3];//创建数组大小是应该是常量表达式
//	int arr[3] = {1, 2};//整型中未完全初始化的数组，默认置0
//	char arr2[6] = {'c', 99, 'h'};//未完全初始化的数组，其后默认放置“\0”，以数字定义的字符，对应转换到ASCII值
//	char arr3[] = "abcde";//放置\0
//	printf("%d\n", sizeof(arr2));//计算数组（单一元素）所占空间的大小(6*1)
//	printf("%d\n", strlen(arr3));//计算（除\0外）字符个数
//	printf("%d\n", strlen(arr2));
//
//	return 0;
//}


//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int j = 0;
//	for (j = 0; j < sz; j++)
//	{
//		printf("&arr[%d]= %p\n" , j, &arr[j]);
//
//	}
//	//数组在内存的存放中是连续的
//	return 0;
//}