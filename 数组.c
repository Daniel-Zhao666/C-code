#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

int main()
{
	int arr1[] = {1, 2, 3, 6, 8, 9};
	printf("%p\n", arr1);//��������ʾ��Ԫ�صĵ�ַ
	printf("%p\n", arr1 + 1);
	printf("%p\n", &arr1[0]);//��&+����������ʾ��ȡ��Ԫ�صĵ�ַ��ͬ��
	printf("%p\n", &arr1[0] + 1);
	printf("%p\n", &arr1);//��ʾȡ��������ĵ�ַ������Ԫ�ص�ַ��ʼ������ʱ����������ʾ��������
	printf("%p\n", &arr1 + 1);
	return 0;
}//ע��������sizeof��arr�����������Сʱ��������ȡ��Ԫ�صĵ�ַ����λ��byte

//void bubble_sort(int arr[], int sz)
//{
//	//ð�����򣬼�ѭ��Ԫ�غ�˳������
//	//ȷ��ð�����������
//	int i = 0;
//	/*int sz = sizeof(arr) / sizeof(arr[0]);*///���������е�Ԫ�ظ��������鴫��ʱ���Ǵ�����Ԫ�صĵ�ַ��ָ�룩
//	for (i = 0; i < sz - 1; i++)
//	{
//		int flag = 1;//����˴�����������Ѿ�����ȷ��ÿ��ð������
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)//������̬�仯�ıȽϴ�����������sz-1�������������޷�������μ��ٵıȽϴ���
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;//��ʱ����
//				flag = 0;//������������ݲ���ȫ����
//			}
//		}
//		if (flag == 1)
//		{
//			break;
//		}//��flag�ٴ�Ϊ1��������ѭ��
//
//	}
//}
//int main()
//{
//	int arr[] = { 7, 8, 9, 1, 3, 2, 6, 4, 5 };
//	int i = 0;//���������������е�Ԫ��
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr , sz);//ð������������ʱ�������ε�arr��ʾ��Ԫ�ص�ַ
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	int arr[3][3] = { { 1, 2, 3 }, { 4, 5, 6 } };//��ά�����ʼ����ʱ�����±겻��ʡ��
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 3; j++)
//		{
//			printf("&arr[%d][%d] = %p\n", i, j, &arr[i][j]);//��ά����洢��ʽͬһά����ַ���ε�����������֮�����
//			//һ������
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int arr[3][3] = { { 1, 2, 3 }, { 4, 5, 6 } };//��ά�����ʼ����ʱ�����±겻��ʡ��
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
//	//int arr2[3];//���������С��Ӧ���ǳ������ʽ
//	int arr[3] = {1, 2};//������δ��ȫ��ʼ�������飬Ĭ����0
//	char arr2[6] = {'c', 99, 'h'};//δ��ȫ��ʼ�������飬���Ĭ�Ϸ��á�\0���������ֶ�����ַ�����Ӧת����ASCIIֵ
//	char arr3[] = "abcde";//����\0
//	printf("%d\n", sizeof(arr2));//�������飨��һԪ�أ���ռ�ռ�Ĵ�С(6*1)
//	printf("%d\n", strlen(arr3));//���㣨��\0�⣩�ַ�����
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
//	//�������ڴ�Ĵ������������
//	return 0;
//}