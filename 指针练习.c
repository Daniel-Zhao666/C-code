#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	char arr[] = {'a', 'b', 'c', 'd', 'e'};

	printf("%d\n", strlen(arr));//Ѱ�� ��\0��  -> ���ֵ
	printf("%d\n", strlen(arr + 0));
	   //printf("%d\n", strlen(*arr));//�Ƿ����ʵ�ַ������Ԫ�ض�Ӧ��ASCIIֵ��Ϊ��ʼλ�ã�������м����ַ�������
	  //printf("%d\n", strlen(arr[1]));

	printf("%d\n", strlen(&arr));//���ֵ
	printf("%d\n", strlen(&arr + 1));//���ֵ -5
	printf("%d\n", strlen(&arr[0] + 1));//���ֵ  -1


	//char arr[] = {'a', 'b', 'c', 'd', 'e' };
	//printf("%d\n", sizeof(arr));//�ַ������С
	//printf("%d\n", sizeof(arr + 0));
	//printf("%d\n", sizeof(*arr));//��Ԫ�ص�ַ1byte
	//printf("%d\n", sizeof(arr[1]));
	//printf("%d\n", sizeof(&arr));//ȡ��������ĵ�ַ������ӡʱ��Ȼ��ƽ̨Ϊ׼
	//printf("%d\n", sizeof(&arr + 1));
	//printf("%d\n", sizeof(&arr[0] + 1));

	//int a[] = { 1, 2, 3, 4 };//sizeof + ������ -> ���������С��& + ��������ʾ��������
	//printf("%d\n", sizeof(a));//��������Ĵ�С
	//printf("%d\n", sizeof(a + 0));
	//printf("%d\n", sizeof(*a));
	//printf("%d\n", sizeof(a + 1));//��ʾ��Ԫ�ص�ַ��+1����������һ��Ԫ��
	//printf("%d\n", sizeof(a[1]));//�ڶ���Ԫ�ش�С
	//printf("%d\n", sizeof(&a));//��ʾȡ������ĵ�ַ��sizeof�ڼ����Сʱ��Ȼ����ƽ̨Ϊ��׼ -> 4byte/8byte
	//printf("%d\n", sizeof(*&a));//&a->��ʾȡ������ĵ�ַ��������֮������������飬sizeof���������Сʱ��Ϊ���������С
	//printf("%d\n", sizeof(&a + 1));//&a������������֮��+1��ʾ��������������λ�ã��������ĩλ�ã������Сʱ���ǰ�ƽ̨
	//printf("%d\n", sizeof(&a[0]));//��Ԫ�ص�ַ��С
	//printf("%d\n", sizeof(&a[0] + 1));//��Ԫ�ش�С

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
//    qsort(arr, sz, sizeof(arr[0]), cmp_int);//�ײ�������������ʼ���ڶ��������С��������ÿ��Ԫ�ش�С��4��������ʵ��
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
//	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);//�ַ����Ƚ�strcmp��string.h��
//}
//
//void test3()
//{
//	struct Stu s[3] = { { "���", 30 }, { "�Һ�", 25 }, { "��Һ�", 10 } };
//	int sz = sizeof(s) / sizeof(s[0]);
//	qsort(s, sz, sizeof(s[0]),cmp_stu_age);
//	//qsort(s, sz, sizeof(s[0]), cmp_stu_name);
//}
//
////����Ա�ڵ���bubble_sort����ʱ����֪����Ҫ�������������
////Ҳ��������Ƚϵ�����Ԫ�ص�����
//void Swap(char* buf1, char*buf2,int width)//δ֪�����ַ������Ķ��٣��ʴ���Ƚ����޶�
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
//	//ȷ����������
//	for (i = 0; i < sz - 1; i++)
//	{
//		//ÿһ�˱ȽϵĶ���
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			//�Ƚ�����Ԫ��
//			if (cmp((char*)base + j*width, (char*)base + (j + 1)*width) > 0)
//			{
//				//����
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
//	void* p = &a;//void*-->���ܽ��н����÷���,Ҳ���ɽ��мӼ����㡣
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
//	//ת�Ʊ�
//	int(*pfArr[])(int, int) = {0, Add, Sub, Mul, Div, Xor};//pfArr��һ������ָ������
//	//ͨ�������±��ҵ���Ӧ�ĺ���������е���
//	do
//	{
//		menu();
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		if (input >= 1 && input <= 5)
//		{
//			printf("����������������:>");
//			scanf("%d%d", &x, &y);
//			int ret = pfArr[input](x, y);
//			printf("%d\n", ret);
//		}
//		else if (input == 0)
//		{
//			printf("�˳�\n");
//		}
//		else
//		{
//			printf("ѡ�����\n");
//		}
//
//	} while (input);
//	return 0;
//}

//void Calc(int (*pf)(int, int))
//{
//	int x = 0;
//	int y = 0;
//	printf("����������������:>");
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
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		
//		switch (input)
//		{
//		case 1:
//			Calc(Add); /*  printf("%d\n", Add(x, y));*/
//			break;
//		case 2:
//			Calc(Sub);/*	printf("����������������:>");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", Sub(x, y));*/
//			break;
//		case 3:
//			Calc(Mul);  /*printf("����������������:>");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", Mul(x, y));*/
//			break;
//		case 4:
//			Calc(Div);
//		/*	printf("����������������:>");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", Div(x, y));*/
//			break;
//		case 5:
//			Calc(Xor);/*	printf("����������������:>");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", Xor(x, y));*/
//			break;
//		case 0:
//			printf("�˳�\n");
//			break;
//		default:
//			printf("ѡ�����\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}

//char* my_strcpy(char* dest, const char* src);//дһ������ָ�� pf ָ�� my_strcpy
// --> char* (*pf)(char*, const char*)

//дһ������ָ������ pfArr ���ڴ��4��my_strcpy�����ĵ�ַ
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

//void(* signal(int, void(*)(int))  )(int);//signal������int��viod(*)(int)->����ָ��������շ���
//signal�����ķ�������ҲΪ�գ�����ָ��ָ��ı�������Ϊint
//(*(void(*)())0)()--��0ǿ������ת��Ϊ��void(*)()�ĺ���ָ������ - 0��Ϊ�ú����ĵ�ַ������

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
//	char* (*pa)[5] = &arr;//�����ַ char* -> ��ָ�������ͣ�*pa -> *˵��pa(��������)Ϊָ�룬��ָԪ��Ϊ5
//	//[] -> ���ȼ�����*��&arr --> �����ַ
//	//����ָ��
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
//	const char *p2 = "abcd";//��ָ�����ʽ�����������ַ����洢�ַ�ʱ������һ����ַ�洢����
//	 
//	if (p1 == p2)
//	{
//		printf("�ܺ�\n");
//	}
//	else
//	{
//		printf("��\n");
//	}
	

	//if (arr1 == arr2)
	//{
	//	printf("���\n");
	//}//�������ַ����������ռ䲻ͬ������ͬ������ָ�����Ԫ�ص�ַ��ͬ
	//else
	//{
	//	printf("��\n");
	//}
//	return 0;
//}


//int main()
//{
//	 const char* p  = "abcd";//�����Ԫ�ص�ַ�������ַ���
//	  // *p = 's';
//	 //printf("%s\n", p);
//	//printf("%c\n", *p);//��ӡһ���ַ�
//	//printf("%s\n", p );
//
//	return 0;
//}