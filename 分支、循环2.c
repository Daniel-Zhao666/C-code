#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<stdlib.h>

int main()
{
	int j = 0;
	int ch = 0;
	char password[20] = { 0 };
	
	for (j = 0; j < 3; j++)
	{
		printf("Please input your password:>");
        scanf("%s\n", password);
		if (strcmp(password, "123456") == 0)//==�������ڱȽ��ַ���,�����ÿ⺯��strcmp��ͷ�ļ�string��
		{
			printf("log in successful\n");
			break;
		}

		else
		{
			printf("���������¼ʧ��\n");
		}
	}
	if (3 == j)
			printf("���������������ϵͳ���Զ��˳�����\n");
	return 0;
}


// int main()
//{
//	 char arr1[] = "love you forever!";
//	 char arr2[] = "*****************";//�����������飬�Դ���ַ�
//	 int left = 0;
//	 //int right = sizeof(arr1) / sizeof(arr1[0]) - 2;//���������С��arr1�������õ�Ԫ�س����е��⣬���н�����־����\0������Ϊ�õ�ʵ��
//	 ////��Ҫ�滻��Ԫ�أ�Ӧ�á�-2��
//
//	 int right = strlen(arr1) - 1;//strlen����ַ������ȣ�������\0��
//	 while (left <= right)
//	 {
//		 arr2[left] = arr1[left];
//		 arr2[right] = arr1[right];
//		 printf("%s\n",arr2);
//		 Sleep(1000);//���ÿ⺯��Sleep(��Ӧͷ�ļ�Ϊwindows.h)������ʵ����ʱ��ӡ����λΪms��
//		 system("cls");//����������stdlib.h��
//		 left ++;
//		 right--;
//	 }
//      printf("%s\n",arr2);
//	return  0;
//}



//int main()//���ֲ������������е�Ԫ��
//{
//	int arr[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int k = 11;
//
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left  = 0;//Ԫ�����±�
//	int right = sz - 1;//���±�
//
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			printf("���ҵ����±�Ϊ�� %d\n" , mid);
//			break;
//		}
//	}
//
//	if (left > right)
//	{
//		printf("û�ҵ�\n" );
//	}
//	return 0;
//}//Ѱ�����������е�����Ԫ��


//int main()//�Ż�֮��
//{
//
//	int ret = 1;
//	int n = 0;
//	int sum = 0;
//	for (n = 1; n <= 3; n++)
//	{
//		ret = n * ret;
//		sum = sum + ret;
//	}
//	printf("sum = %d\n", sum);
//	return 0;
//}



//int main()
//{
//
//	int ret = 1;
//	int n = 0;
//	int j = 0;
//	int sum = 0;
//
//	for (n = 1; n <= 3; n++)
//	{
//		ret = 1;//������ret = 1ʱ��������ۻ��Ľ�����˴����㵽3ʱ�����2�еģ�
//      for (j = 1; j <= n; j++)
//	    {
//		ret = j * ret;
//	    }
//	  sum = sum + ret;
//	}
//	
//	printf("sum = %d\n", sum);
//	return 0;
//}



//int main()
//{
//	
//	int ret = 1;
//	int n = 0;
//	int j = 0;
//	scanf("%d ", &n );
//	for (j = 1; j <= n; j++)
//	{
//	    ret = j * ret;
//	
//	}
//		printf("ret = %d\n", ret);
//	return 0;
//}


//int main()
//{
//	int j = 1;
//	do
//	{
//		printf("%d ", j);
//		j++;
//	} 
//	while (j <= 10);
//	return 0;
//}


//int main()
//
//{
//	int x, y;
//	for (x = 0, y = 0; x < 3 || y < 3; ++x, y++)
//	{
//		printf("hello world\n");
//	}
//	return 0;
//}//ע�⸳ֵ�����ж����������

//int main()
//{
//	int i = 0;
//	int j = 0;
//
//	for (; i < 3; i++)
//	{
//		for (j = 0; j < 6; j++)//���Ա�����forѭ���в�������ʡ��
//		{
//
//			printf("hello\n");
//		}
//	}
//	return 0;
//}


//int main()
//{
//	int j = 0;
//	for (j = 1; j <= 10; j++)
//	{
//if (5 == j)//if���ͬ����forѭ����ʹ��
//		continue;//break;//forѭ���е�breakͬwhileѭ������ͬ����forѭ����continue�ܹ�
////�������е�������whileѭ��������tontinue��ֱ�����������������裬�Ӷ�������ѭ����
//		printf("%d ", j);
//	}
//	
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	while (i <= 10)
//	{
//
//		if (5 == i)
//			continue;
//		printf("%d ", i );
//		i++;
//	}
//	return 0;
//}

 //int main()
 //{
	// int i = 0;

	// for (i = 1; i <= 10; i++)//��ʼ�����жϡ�����
	// {
	//	 printf("%d ", i );
	// }
	//return 0;
 //}//forѭ�����Խ���ʼ����䡢ѭ������(while)���������֣�j++/i++������һ��


//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch <'0' || ch> '9')//ֻ��ӡ�����ַ���������ӡ�����ַ�
//			continue;
//		putchar(ch);
//	}
//		return 0;
//}


//int  main()
//{
//	int ret = 0;//����һ�����ձ���
//	int ch = 0;
//	char password[10] = { 0 };
//		printf("��������:>");
//	scanf("%s", password);//�������벢���䱣����password�����У�����passwordʱ�ַ��л���пո��ַ���\n������ʱ������ret��
//	//��ʱ�����������ڣ�\n������Ҫ��������
//	while ((ch = getchar()) != '\n')//getchar();//����\n����ȡ
//	{
//		;//�����
//	}
//	printf("�Ƿ�ȷ��(Y/N):>");
//	ret = getchar();//getchar�����scanf�У������������ַ���\n��
//	if (ret == 'Y')
//	{
//		printf("ȷ�ϳɹ�\n");
//
//	}
//	else
//	{
//		printf("���ٴ�ȷ�������������\n");
//	}
//	//printf("%d\n", '\n');
//	return 0;
//}


//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//
//		putchar(ch);//ctrl + z ȡ��ִ�д���
//
//	}
//
//	return 0;
//}