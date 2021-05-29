#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<assert.h>
#include<math.h>

int Findnum(int arr[3][3], int k, int *px, int *py)
{       
	//杨氏矩阵：从左往右递增，从上往下递增
	    int x = 0;
		int y = *py - 1;
	while (x <= *px - 1 && y >= 0)
	{		//从右上或者左下角开始寻找数字
			if (arr[x][y] > k)
			{
				y--;
			}
			else if (arr[x][y] < k)
			{
				x++;
			}
			else
			{
				*px = x;
				*py = y;
				return 1;
			}
	}
 //未找到	
	return 0;
}
void main()
{
	int arr[3][3] = { { 1, 2, 3 }, { 2, 3, 4 }, { 3, 4, 5 } };
	int k = 3;
	int x = 3;
	int y = 3;

	//返回型参数，通过传地址
	int ret = Findnum(arr, k, &x, &y);
	if (ret == 1)
	{
		printf("已找到\n");
		printf("下标是: %d %d\n", x, y);
	}
	else
	{
		printf("没找到\n");
	}
}

//int if_left_move(char* str1, char* str2)
//{
	//首先判断字符串的长度，避免原字符串中出现的子串的不完整（即子串缺失但是在原串中仍然可以找到的情况）
//	int len1 = strlen(str1);
//	int len2 = strlen(str2);
//	if (len1 != len2)
	//	return 0;

	//int len = strlen(str1);
	//在str1字符中追加一个str1字符串
	//strncat(str1,str1)->用于追加不同字符
	//strncat(str1, str1, 6);
	//判断str2指向的字符串是否是str1指向的字符串的子串
	//strstr--用于找子串
	//char* ret = strstr(str1, str2);
	//if (ret == NULL)
	//{
	//	return 0;
	//}
	//else
	//{
		//return 1;
	//}
//}

//void main()
//{
//	char arr1[30] = "abcdef";
//	char arr2[] = "cdefab";
//	int ret = if_left_move(arr1, arr2);
//	if (ret == 1)
//	{
//		printf("Yes\n");
//	}
//	else
//	{
//		printf("No\n");
//	}
//}


//三步交换
//void reverse(char* left, char* right)
//{
//	assert(left != NULL);
//	assert(right != NULL);
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//
//void left_move(char *arr, int k)
//{
//	assert(arr);
//	int len = strlen(arr);
//	assert(k <= len);
//
//	reverse(arr, arr + k - 1);//逆序左端
//	reverse(arr + k, arr + len - 1);//逆序右端
//	reverse(arr, arr + len - 1);//逆序前两部后，形成的整个数组
//}

//int if_left_move(char* s1, char* s2)
//{
//	int len = strlen(s1);
//	int i = 0;
//	for (i = 0; i < len; i++)
//	{
//		left_move(s1, 1);
//		int ret = strcmp(s1, s2);
//		if (ret == 0)
//			return 1;
//	}
//	return 0;
//}

//void main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "cdefab";
//	int ret = if_left_move(arr1, arr2);
//	if (ret == 1)
//		printf("Yes\n");
//	else
//		printf("No\n");
//}

//void left_move(char * arr, int k)
//{
//	assert(arr != NULL);
//	int i = 0;
//	int len = strlen(arr);
//	for (i = 0; i < k; i++)
//	{
//		//左旋转1个字符
//		char tmp = *arr;//产生一个空间用于存放所要旋转的数组
//		//2step，左旋操作
//		int j = 0;
//		for (j = 0; j < len - 1; j++)
//		{
//			*(arr + j) = *(arr + j + 1);
//		}
		//3step
		//*(arr + len - 1) = tmp;
//	}
//}


//void main()
//{
//	char arr[] = "abcdef";
//	left_move(arr, 2);//左旋函数,2个字符
//
//	printf("%s\n", arr);
//
//}

//void main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	int e = 0;
//	for (a = 1; a <= 5; a++)
//	{
//		for (b = 1; b <= 5; b++)
//		{
//			for (c = 1; c <= 5; c++)
//			{
//				for (d = 1; d <= 5; d++)
//				{
//					for (e = 1; e <= 5; e++)
//					{
//						if (((a == 3) + (b == 2) == 1) &&
//							((b == 2) + (e == 4) == 1) &&
//							((c == 1) + (d == 2) == 1) &&
//							((c == 5) + (d == 3) == 1) &&
//							((a == 1) + (e == 4) == 1))
//						{
//							if (a * b * c * d * e == 120)
//								printf("a= %d b= %d c= %d d= %d e= %d\n", a, b, c, d, e);
//						}
//					}
//				}
//			}
//		}
//	}
//}

//void main()
//{
//	//寻找说谎者，共有4人，其中3人所说为真（1），1人所说为假（0）
//	int x = 0;
//	for (x = 'A'; x <= 'D'; x++)
//	{
//		if ((x != 'A') + (x == 'C') + (x == 'D') + (x != 'D') == 3)
//		{
//			printf("x = %c\n", x);
//		}
//	}
//}

//打印杨辉三角
//void main()
//{
//	int arr[10][10] = { 0 };
//	int i = 0;
//	int j = 0;
//	//第0列以及对角线的所有元素赋值为1
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j < 10; j++)
//		{
//			if (j == 0)
//			{
//				arr[i][j] = 1;
//			}
//			if (i == j)
//			{
//				arr[i][j] = 1;
//			}
			//计算从第1列，第2行开始后的元素
//			if (i >= 2 && j >= 1)
//			{
//				arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
//			}
//		}
//	}
//	//打印
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//
//}


//void main()
//{
//	unsigned char a = 200;//无符号数（%d）打印时会发生整型提升
//	unsigned char b = 100;//整型提升时，无符号数的高位补“0”，有符号数的高位依照最高位补
//	unsigned char c = 0;//char -> 1byte；short -> 2byte；int -> 4byte；
//
//	c = a + b;
//	printf("%d %d", a + b, c);
//}


//void print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//void move(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//
//	while (left < right)
//	{
//       while ((left < right)&& (arr[left] % 2 == 1))//防止出现全是奇（偶）数的情况
//	{
//		left++;//往右找奇数
//	}
//	  while ((left < right) && (arr[right] % 2 == 0))
//	{
//		right--;//往左找偶数
//	}
//	if (left < right)
//	{
//		int tmp    = arr[left];
//		arr[left]  = arr[right];
//		arr[right] = tmp;
//	}
//	}
//}

//void main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	move(arr, sz);
//	print(arr, sz);
//}

//void main()
//{
//	//喝汽水，每瓶汽水一块，每两个空瓶可换一瓶汽水，给20块，可以喝的汽水数是多少
//	int money = 0;
//	int empty = 0;
//	int total = 0;
//	scanf("%d", &money);
//	if (money == 0)
//		total = 0;
//	else
//		total = 2 * money - 1;
//	//买回来的汽水喝掉
//	total = money;
//	empty = money;
//	//喝掉后，用空瓶换回的汽水
//	while (empty  >= 2)
//	{
//		total += empty / 2;//汽水的总数
//		empty = empty / 2 + empty % 2;//每次喝水后的空瓶数，以及存在单数时剩得的空瓶数
//	}
	//printf("total = %d\n", total);
//}


//打印菱形
//void main()
//{
//	int line = 0;
//	scanf("%d\n", &line);
//	//打印上半部分
//	int i = 0;
//	for (i = 0; i < line; i++)
//	{
//		//打印空格
//		int j = 0;
//		for (j = 0; j < line - 1 - i; j++)
//		{
//			printf(" ");
//		}
//		//打印 *
//		for (j = 0; j < 2 * i + 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	//打印下半部分
//	for (i = 0; i < line - 1; i++)
//	{
//		int j = 0;
//		//打印空格
//		for (j = 0; j <= i; j++)
//		{
//			printf(" ");
//		}
//		//打印 *
//		for (j = 0; j < 2 * (line - 1 - i) - 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//}


//void main()
//{
//	int i = 0;
//	for (i = 0; i < 100000; i++)
//	{
//		//判断i是否为水仙花数（每个位置上的数的3次方之和 = 原来的数）
//		//计算i的位数  -- n位数
//		int n = 1;
//		int tmp = i;
//		int sum = 0;
//		while (tmp /= 10)
//		{
//			n++;
//		}
//		//计算i的每一位数的n次方之和 sum
//		tmp = i;
//		while (tmp)
//		{
//			sum += pow(tmp % 10, n);//pow（math.h）
//			tmp /= 10;
//		}
//		//比较 i == sum
//		if (i == sum)
//		{
//			printf("%d ", i);
//		}
//	}
//}

//void main()
//{
//	int a = 0;
//	int n = 0;
//	scanf("%d %d", &a, &n);
//	int sum = 0;
//	int  i = 0;
//	int ret = 0;
//
//	for (i = 0; i < n; i++)
//	{
//		ret = ret * 10 + a;
//		sum += ret;
//	}
//	printf("%d\n", sum);
//}

//void reverse(char* str)
//{
//	assert(str);//断言str的有效性
//	int len = strlen(str);//计算字符串长度
//	char* left = str;
//	char* right = str + len - 1;//计算末字符下标
//
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}

//void main()
//{
//	char arr[100] = {0};
//	//scanf("%s", arr);
//	gets(arr);//读取一行
//	//逆序函数
//	reverse(arr);
//	printf("%s\n", arr);
//}
