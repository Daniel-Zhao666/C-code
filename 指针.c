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
//   }//C--����ָ�������ָ������ָ����Ԫ��ŭ֮���ָ��Ƚϣ�����֧��������ǰ��ָ��Ƚ�
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
//		p ++;//ָ��--����
//	}
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	int b = 6;
//	int* pa = &a;//��ʼ��ָ��
//	int* p = NULL;//���ÿ�ָ��
//	return 0;
//}

//int* test()
//{
//	int a = 6;//�ֲ��������������ڴ������ַ��ֻҪ�����õĺ������Զ��黹�ռ�
//	return &a;
//}
//int main()
//{
//	int* p = test();
//	printf("%d\n", *p);//Ѱַʱa�Ŀռ���ܱ����·�����Ҳ�����ַ
//	return 0;
//}


//����Ұָ��
//int main()
//{
//	//int *p;//�ֲ�����ָ�벻��ʼ����Ĭ��Ϊ���ֵ
//	//*p = 3;//�Ƿ�
//	int arr[10] = {0};
//	int *p = arr;
//	int i = 0;
//	for (i = 0; i < 13; i++)
//	{
//		*(p++) = i;//ָ����ָ��ķ�Χ�������鷶Χʱ����ʱpΪҰָ��
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

	//printf("%p\n", pc);//ָ�����;�����ָ����ǰ������ߵľ��루��������λ--byte��
	//printf("%p\n", pc + 1);
	/*return 0;
}*/


//int main()
//{
//	//printf("%d\n", sizeof(int*));// --4��32λƽ̨�ϵ�ָ���СΪ4��
//	//printf("%d\n", sizeof(char*));// --4
//	//printf("%d\n", sizeof(float*));// --4
//
//	int a = 0x223366;
//	int* pa = &a;//ָ�����;����˷��ʵ��ֽ��������ͣ� *p-����4byte��char��*p -����1byte��float��*p- ����4byte��
//	char* pc = &a;//�����ò�����
//	*pc = 1;
//	//printf("%p\n", pa);//����������Ͳ�ͬ������ַ��ͬ
//	//printf("%p\n", pc);
//
//	return 0;
//}