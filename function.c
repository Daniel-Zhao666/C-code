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
{//�Զ��庯����˫���ţ����ÿ⺯��ʹ��<>
	int a = 10; //һ�㽫�������塢��������ͷ�ļ��У����½�һ��ͷ�ļ�����������ʵ����.c(�½�һ�����ú��������)�ļ��У�ʹ��ʱֱ�ӵ���
	int b = 0;
	int sum = 0;
	sum = Add(a, b);
	printf("%d\n ", sum);
	return 0;
}


//void Add(int* p)
//{
//	(*p)++;//++�����ȼ����ڽ��ַ������
//}
//int main()
//{//ʵ��ÿ����һ�κ�����num��ֵ����1
//	int num = 0;
//	Add(&num);
//		printf("num = %d\n", num);
//	Add(&num);
//		printf("num = %d\n", num);
//	Add(&num);
//		printf("num = %d\n", num);
//	return 0;
//}


//int binary_search(int arr[], int k, int sz)//���յ������в��ǵ��������Ĵ�С��ʵ�����ǽ������ַ
//{
//  //�㷨ʵ�֣����ֲ��ң�
//	int left = 0;
//	int right = sz - 1;//�����ں����м������������Ԫ�صĸ�����win 32ƽ̨���������Сʵ����Ϊ4��byte
//	while (left <= right)//=�����٣�������ܻ�ʧȥ����Ԫ��
//	{
//		int mid = (left + right) / 2;//�����м�Ԫ�أ��������±�
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
//	int sz = sizeof(arr) / sizeof(arr[0]);//����������׸�Ԫ�ص�ַ
//	int ret = binary_search(arr, k, sz);
//	if (ret == -1)
//	{
//		printf("û�ҵ���Ӧ������\n");
//	}
//	else
//	{
//		printf("�ҵ����֣��±�Ϊ��%d\n", ret);
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
//}//��ʱ��Swap������û�дﵽ����������Ŀ�ģ�˵�������е�x��y��a��b��������
////�ڴ��е���ͬ�ռ�
//
//void Swap2(int* pa, int* pb )//����ָ�����Swap1��Swap2��ͬ������ʽ������
//                            //�β�ʵ����֮���൱��ʵ�ε�һ����ʱ����
//{
//	int tmp = 0;
//	tmp = *pa;
//	*pa = *pb;//*--���ַ������
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
//	memset(arr, '*', 2);//memset(ͷ�ļ�string.h),void * memset(void*ptr, int value, size_t num)
//	printf("%s,\n", arr);
//
//	return 0;
//}