#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<assert.h>
#include<math.h>

int Findnum(int arr[3][3], int k, int *px, int *py)
{       
	//���Ͼ��󣺴������ҵ������������µ���
	    int x = 0;
		int y = *py - 1;
	while (x <= *px - 1 && y >= 0)
	{		//�����ϻ������½ǿ�ʼѰ������
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
 //δ�ҵ�	
	return 0;
}
void main()
{
	int arr[3][3] = { { 1, 2, 3 }, { 2, 3, 4 }, { 3, 4, 5 } };
	int k = 3;
	int x = 3;
	int y = 3;

	//�����Ͳ�����ͨ������ַ
	int ret = Findnum(arr, k, &x, &y);
	if (ret == 1)
	{
		printf("���ҵ�\n");
		printf("�±���: %d %d\n", x, y);
	}
	else
	{
		printf("û�ҵ�\n");
	}
}

//int if_left_move(char* str1, char* str2)
//{
	//�����ж��ַ����ĳ��ȣ�����ԭ�ַ����г��ֵ��Ӵ��Ĳ����������Ӵ�ȱʧ������ԭ������Ȼ�����ҵ��������
//	int len1 = strlen(str1);
//	int len2 = strlen(str2);
//	if (len1 != len2)
	//	return 0;

	//int len = strlen(str1);
	//��str1�ַ���׷��һ��str1�ַ���
	//strncat(str1,str1)->����׷�Ӳ�ͬ�ַ�
	//strncat(str1, str1, 6);
	//�ж�str2ָ����ַ����Ƿ���str1ָ����ַ������Ӵ�
	//strstr--�������Ӵ�
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


//��������
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
//	reverse(arr, arr + k - 1);//�������
//	reverse(arr + k, arr + len - 1);//�����Ҷ�
//	reverse(arr, arr + len - 1);//����ǰ�������γɵ���������
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
//		//����ת1���ַ�
//		char tmp = *arr;//����һ���ռ����ڴ����Ҫ��ת������
//		//2step����������
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
//	left_move(arr, 2);//��������,2���ַ�
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
//	//Ѱ��˵���ߣ�����4�ˣ�����3����˵Ϊ�棨1����1����˵Ϊ�٣�0��
//	int x = 0;
//	for (x = 'A'; x <= 'D'; x++)
//	{
//		if ((x != 'A') + (x == 'C') + (x == 'D') + (x != 'D') == 3)
//		{
//			printf("x = %c\n", x);
//		}
//	}
//}

//��ӡ�������
//void main()
//{
//	int arr[10][10] = { 0 };
//	int i = 0;
//	int j = 0;
//	//��0���Լ��Խ��ߵ�����Ԫ�ظ�ֵΪ1
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
			//����ӵ�1�У���2�п�ʼ���Ԫ��
//			if (i >= 2 && j >= 1)
//			{
//				arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
//			}
//		}
//	}
//	//��ӡ
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
//	unsigned char a = 200;//�޷�������%d����ӡʱ�ᷢ����������
//	unsigned char b = 100;//��������ʱ���޷������ĸ�λ����0�����з������ĸ�λ�������λ��
//	unsigned char c = 0;//char -> 1byte��short -> 2byte��int -> 4byte��
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
//       while ((left < right)&& (arr[left] % 2 == 1))//��ֹ����ȫ���棨ż���������
//	{
//		left++;//����������
//	}
//	  while ((left < right) && (arr[right] % 2 == 0))
//	{
//		right--;//������ż��
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
//	//����ˮ��ÿƿ��ˮһ�飬ÿ������ƿ�ɻ�һƿ��ˮ����20�飬���Ժȵ���ˮ���Ƕ���
//	int money = 0;
//	int empty = 0;
//	int total = 0;
//	scanf("%d", &money);
//	if (money == 0)
//		total = 0;
//	else
//		total = 2 * money - 1;
//	//���������ˮ�ȵ�
//	total = money;
//	empty = money;
//	//�ȵ����ÿ�ƿ���ص���ˮ
//	while (empty  >= 2)
//	{
//		total += empty / 2;//��ˮ������
//		empty = empty / 2 + empty % 2;//ÿ�κ�ˮ��Ŀ�ƿ�����Լ����ڵ���ʱʣ�õĿ�ƿ��
//	}
	//printf("total = %d\n", total);
//}


//��ӡ����
//void main()
//{
//	int line = 0;
//	scanf("%d\n", &line);
//	//��ӡ�ϰ벿��
//	int i = 0;
//	for (i = 0; i < line; i++)
//	{
//		//��ӡ�ո�
//		int j = 0;
//		for (j = 0; j < line - 1 - i; j++)
//		{
//			printf(" ");
//		}
//		//��ӡ *
//		for (j = 0; j < 2 * i + 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	//��ӡ�°벿��
//	for (i = 0; i < line - 1; i++)
//	{
//		int j = 0;
//		//��ӡ�ո�
//		for (j = 0; j <= i; j++)
//		{
//			printf(" ");
//		}
//		//��ӡ *
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
//		//�ж�i�Ƿ�Ϊˮ�ɻ�����ÿ��λ���ϵ�����3�η�֮�� = ԭ��������
//		//����i��λ��  -- nλ��
//		int n = 1;
//		int tmp = i;
//		int sum = 0;
//		while (tmp /= 10)
//		{
//			n++;
//		}
//		//����i��ÿһλ����n�η�֮�� sum
//		tmp = i;
//		while (tmp)
//		{
//			sum += pow(tmp % 10, n);//pow��math.h��
//			tmp /= 10;
//		}
//		//�Ƚ� i == sum
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
//	assert(str);//����str����Ч��
//	int len = strlen(str);//�����ַ�������
//	char* left = str;
//	char* right = str + len - 1;//����ĩ�ַ��±�
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
//	gets(arr);//��ȡһ��
//	//������
//	reverse(arr);
//	printf("%s\n", arr);
//}
