#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

#include <limits.h>//INT_MAX��Ӧ��ͷ�ļ�

 
#include <string.h>//strcmp��Ӧ��ͷ�ļ�
#include <stdlib.h>//system��Ӧ��ͷ�ļ�

int main()
{

	char input[20] = { 0 };//���������洢����
	system("shutdown - s - t 360");//�ػ���ʱ�䣩���룬systemר������ִ��ϵͳ�����
	
again:
	printf("��ע�⣬��ĵ��Խ���6min�ڹرգ�ֻ�����룺������ϣ��Ż�ȡ���ػ�\n");
	scanf("%s\n", input);
	if (strcmp(input, "�������") == 0)//�ж�input���Ƿ�ŵ��ǡ�������ϡ���strcmp -- string compare
	{
		system("shutdown - a");

	}
	else
	{
		goto again;
	}
	return 0;
}

//int main()
//{
//	int arr[] = {1,2,3,4,1,2,3,4,6,8,6};
//	int i = 0;
//	int ret = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	for (i = 0; i < sz; i++)
//	{
//		ret = ret ^ arr[i];
//
//	}
//	printf("singal: %d\n", ret);
//	return 0;
//}//�����̲�������߼��ҳ���������

//int main()
//
//{
//	int arr[] = {1,2,3,4,2,1,2,3,4,8,9,8};
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);//ͳ��һ��������Ԫ�صĸ���
//
//	for (i = 0; i < sz; i++)
//	{
//		//ͳ��arr[i]��arr�����г��ֵĴ���
//		int count = 0;
//	    int j = 0;//����һ������j������ͬ��֪������бȽ�
//		for (j = 0; j < sz; j++)
//		{
//			if (arr[i] == arr[j])
//			{
//				count++;
//			  }
//			}
//		if (count == 1)
//			{
//				printf("singal: %d\n", arr[i]);
//				break;
//			}
//	}
//	return 0;
//}


 //int main()
 //{
	//int a = 1;
	//int b = 2;
	//printf("����ǰ��a = %d b = %d\n", a, b );

	//a = a ^ b;
	//b = a ^ b;
	//a = a ^ b;
	//printf("������a = %d b = %d\n", a, b );
	////���ð�λ��򣬲�������Ӽ�����������λ��������
	//return 0;
 //}//�������ͱ���˳����ã����^��������ִ��Ч�ʽϼӼ�����˵�Բ�

// int main()
//{
//	int a = 1;
//	int b = 2;
//	//INT_MAX;//�������ֵΪ2147483647��
//	printf("����ǰ��a = %d  b = %d\n", a , b );//
//
//	/*a = b - a;*/
//	b = a + b;//�������֮������������λ���Ӷ� b �е�ֵ��Ϊ a + b֮��(����ĳЩλ)
//	a = b - a;//����ֵ�Ƚ�С��ʱ����Խ��
//	b = b - a;
//	printf("������a = %d  b= %d\n", a, b );
//	return 0;
//}//���������üӼ����Ա������н���



 /*int main()
{
	int a = 3;
	int b = 5;
	int c = 0;
	printf("����ǰ��a = %d b = %d\n", a, b);
	
	c = b;
	b = a;
	a = c;
	printf("������a = %d b = %d\n", a, b);
	return 0;
}*/


//int main()
//{
//	
//	printf("hello world\n");
//	return 0;
//}