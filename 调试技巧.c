#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<assert.h>

int my_strlen(const char* str )
{
	int count = 0;
	assert(str != NULL);
	//��ָ֤�����Ч��
	while (*str != '\0')//��ָ��Ԫ��δ��\0ʱ�����������ַ�
	{
		count++;
		str++;
	}
	return count;
}

int main()
{
	char arr[] = "abcdef";
	int len = my_strlen(arr);
	printf("%d\n", len);
	return 0;
}

//int main()
//{
//	 int num = 6;
//	 int* const p = &num;
	 //int * const p = &num;
	//const��ָ�����*���ʱ�����ε���*p������ͨ���޸ĵ�ַ���ı�*p��num������)
	//const��ָ�����*�ұ�ʱ�����ε��Ǳ���p����Ӱ��*p��ʹ�ã�,��ʱ�ı���p���ɱ��޸�
	/**p = 8;
	p = &n;
	printf("%d\n", num);

	return 0;
}*/

//char* my_strcpy(char* dest, const char* src)//const�������Զ����ɸ��ģ�����MSDN
//{
//	char* ret = dest;//����ret�����ʼ��Ŀ�ĵ�ַ
//	assert(dest != NULL);//����
//	assert(src  != NULL);//����
//	//��srcָ����ַ���������dest�Ŀռ䣨������\0����
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;//���ر��������Ŀ���ַ
//}

//void my_strcpy(char* dest , char* src)
//{
//	assert(dest != NULL);//������ͷ�ļ�assert.h��
//	assert(src != NULL);
//	while (*dest++ = *src++)
//	{
//		;
//	}
//
//}

//void my_strcpy(char* dest, char* src)
//{
//	if (dest != NULL && src != NULL)//������ָ��
//	{
//         while (*dest++ = *src++)
//        {
//        	;
//        }
//	}
//}

//void my_strcpy(char* dest, char* src)
//{
//	while (*src != '\0')
//	{
//		*dest = *src;
//		src++;
//		dest++;
//	}//�����ַ�hello
//	*dest = *src;//��\0����������arr1
//}

//int main()
//{
//	char arr1[] = "******";
//	char arr2[] = "hello";
//	my_strcpy(arr1, arr2);//��NULL����ָ�룩ʱ���������
//	printf("%s\n", arr1);
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
//	//ջ����ʹ��Ĭ��Ϊ �ȸߵ�ַ ��͵�ַ���������±�������ɵ͵��߶��仯��
//
//	printf("%p\n", arr);//relase�����Ż���������
//	printf("%p\n", &i);
//
//	system("pause");
//
//	for (i = 0; i <= 10; i++)
//	{
//		printf("hello\n");
//		arr[i] = 0;
//	}//�����ڷ��ʵĹ����п��ܴ�����ֲ������غϣ�Խ�磩��������Ӷ�������ѭ��
//	
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int sum = 0;
//	int n = 0;
//	int ret = 1;
//	scanf("%d", &n);  
//	for (i = 1; i <= n; i++)
//	{
//		int j = 0;
//		ret = 1;
//		for (j = 1; j <= i; j++)
//		{
//			ret *= j;
//		}
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}//����n�Ľ׳�