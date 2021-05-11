#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>


double Pow( int x, int y)
{
	if (y < 0)
	{
		return (1.0 / (Pow(x, -y)));
	}
	else if (y == 0)
		return 1;
	else
		return  x * Pow(x, y - 1);
}

int main()
{
	int x = 0;
	int y = 0;
	scanf("%d%d", &x, &y);

	double ret = Pow(x, y);
	printf("ret = %lf\n", ret);
	return 0;
}

//int DigitalSum(unsigned int num)
//{
//	if (num > 9)
//	{
//		return DigitalSum(num / 10) + num % 10;
//	}
//	else
//	{
//		return num;
//	}
//}

//int main()
//{
//	unsigned int num = 0;
//	scanf("%d ", &num);
//	int ret = DigitalSum(num);
//	printf("ret = %d\n", ret);
//	return 0;
//}

//int find_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//void reverse_str(char* arr)
//{
//	char tmp = arr[0];
//	int len = find_strlen(arr);
//	arr[0] = arr[len - 1];
//	arr[len - 1] = '\0';//每交换一次，在最后一个字符后放置一个'\0'
//	if (find_strlen(arr + 1) >= 2)//当字符中下标为 1 时结束递归
//	reverse_str(arr + 1);
//	arr[len - 1] = tmp;
//}//递归实现字符串交换位置

//int main()
//{
//	char arr[] = "abcdefg";
//	reverse_str(arr);
//	printf("%s\n", arr);
//	return 0; 
//}


//
//void reverse_str(char arr[])
//{
//	int left = 0;
//	int right = find_strlen(arr) - 1;
//	while (left < right)
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
//
//int main()
//{
//	char arr[] = "abcd";
//	reverse_str(arr);
//	printf("%s\n", arr);
//	return 0;
//}

//void print_mult_table(int a)
//{
//	int i = 0;
//	for (i = 1; i <= a; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d= %-3d ", i , j, i * j);
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int a = 0;
//	scanf("%d ", &a);
//	print_mult_table(a);
//	return 0;
//}

//void print(int x)
//{
//	int i = 0;
//	printf("奇数位 : \n");
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d ", (x >> i) & 1);
//	}
//	printf("\n");
//
//	printf("偶数位 : \n");
//	for (i = 31; i >= 1; i -= 2)
//	{
//		printf("%d ", (x >> i) & 1);
//	}
//	printf("\n");
//}
//
//
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	print(a);
//	return 0;
//}


//int get_different_bit(int a , int b)
//{
//	int tmp = a ^ b;
//	int count = 0;
//	while (tmp)
//	{
//		tmp = tmp & (tmp - 1);
//		count++;
//	}
//	return count;
//}
//
//
//int main()
//{
//	int  a = 0;
//	int  b = 0;
//	scanf("%d%d", &a, &b);
//	int count = get_different_bit(a, b);
//	printf("count = %d\n", count);
//	return 0;
//}

//int count_bit_one(unsigned int x)//解决无符号数
//{
//	int count = 0;
//	while (x)
//	{
//		x = x & (x - 1);
//		count++;
//	}
	/*int i = 0;*/
	/*for (i = 0; i < 32; i++)
	{
		if (((x >> i) & 1) == 1)
		{
			count++;
		}
	}*/
	/*while (x)
	{
		if (x % 2 == 1)
		{
			count++;
 		}
		x = x / 2;
	}*/
//	return count;
//}

//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int count = count_bit_one(a);
//	printf("count = %d\n", count);//辗转相除（% --> /）
//	return 0;
//}


//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5 };
//	short *p = (short*)arr;//强制将数组的整型变量转换为short类型
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		*(p + i) = 0;
//	}
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	int arr1[5] = {1, 2, 3, 4, 5};
//	int arr2[5] = {6, 7, 8, 9, 10 };
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	int i = 0;
//	int tmp = 0;
//	for (i = 0; i < sz; i++)
//	{
//		 tmp = arr1[i];
//		 arr1[i] = arr2[i];
//		 arr2[i] = tmp;
//	}
//	return 0;
//}


//void Init(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = 0;
//	}
//}
//
//void Print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//		{
//		printf("%d ", arr[i]);
//	  }
//	printf("\n");
//}
//void Reverse(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//
//	while (left < right)
//	{
//		int tmp = arr[left];
//	    arr[left] = arr[right];
//	    arr[right] = tmp;
//	    left++;
//	    right--;
//	}
//}
//
//int main()
//{
//	int arr[6] = {1, 2, 3, 4, 5, 6 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//Init(arr, sz);//初始化数组为0
//	Print(arr, sz);//打印
//	Reverse(arr, sz);
//	Print(arr, sz);
//	return 0;
//}