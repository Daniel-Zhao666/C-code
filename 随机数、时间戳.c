#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
//#include<math.h>
#include<stdlib.h>
//#include<time.h>
#include<string.h>

int main()
{
	char input[20] = { 0 };
	system("shutdown -s -t 360");
again:
	printf("��ע�⣬��ĵ��Խ���6����֮��ػ��������룺hello CDUT��ȡ���ػ�\n������>:");
	scanf("%s ", input);
	if (strcmp(input, "hello CDUT") == 0)
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}
	return 0;
}

//void menu()
//{   printf("###################\n");
//	printf("# 1. play  0.exit #\n");
//	printf("###################\n");
//}
//	
//void game()
//{   
//	int ret = 0;
//	int guess = 0;//�����û��������ֽ��д洢
//	      //��ʱ��������������ʼ��(time_t time(time_t *timer))
//	     // time_t��������Ϊlong
//     ret = rand()%10+1;//1.�����������rand���������ɲ���0~32767�������,����rand֮ǰ������srand����MSDN������
//	 printf("ret = %d\n ", ret);
//	 while (1)
//	 { 
//		 printf("�������:>");
//		 scanf("%d ", &guess);
//		 if (guess > ret)
//		 {
//			 printf("������˼���´���һ��Ŷ\n");
//		 }
//		 else if (guess < ret)
//		 {
//			 printf("������˼����С��\n");
//		 }
//		 else
//		 {
//			 printf("congratulations! ����Ŷ\n"); 
//			 break;
//		 }
//	 }
//}
//
//int main()
//{   int input = 0;
//    srand((unsigned int)time(NULL));//srand��Ҫ������̬�����ʱ��NULL--��ָ��
//     //���Բ���timeʱ�루ʱ�������ǰʱ������ڼ������ʼʱ��1970.1.1.0:0:0��,�������е���һ�κ󣬲��ٴ�game��ѭ������
//	do
//  {   
//	menu();
//	printf("��ѡ��>:");
//	scanf(" %d ", &input);
//	switch (input)
//	{
//	  case 1:
//	  	game();//ѡ��1�Ϳ�ʼ��Ϸ
//	  	break;
//	  case 0:
//	  	printf("��Ϸ����\n");//ѡ��0�ͽ�����Ϸ
//	  	break;
//	  default:
//		printf("ѡ�����\n");//�������ʱ���������
//		break;
//	}
//  } 
//  while (input);
//     return 0;
//}
	

//int main()
//{
//	int arr[] = { -1, -2, -3, -6, 1, 0, 2, 3, 6, 8, 10 };
//	int min = arr[0];//�������еĵ�һ��Ԫ�ظ�ֵ���������ɱ�����ָ�ֵ�Ƚϳ�������
//	int j = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	while (j < sz)
//	{
//		if (arr[j] < min)
//		{
//			min = arr[j];
//		}
//		j++;
//	}
//	printf("min = %d\n", min);
//	return 0;
//}

//int main()
//{
//	int s;
//	double sum, t, d;
//     sum = 1.0;
//	 d = 2.0;
//	 s = 1;
//    while (d <= 100)
//		{
//		  s = (-1)*s;
//		  t = s*(1 / d);
//		  sum = sum + t;
//		  d++;
//	     }
//     printf("%f\n", sum);
//	 return 0;
//}

//int main()
//{
//	int j = 0;
//	double sum = 0.0;
//	int flag = 1;
//	for (j = 1; j <= 100; j++)
//	{
//		sum += flag*1.0/j;
//		flag = -flag;
//	}
//	printf("sum = %lf\n", sum );
//	return 0;
//}


//int main()
//{
//	int j = 0;
//	int count = 0;
//	for (j = 1; j <= 100; j++)
//	{
//		if (j % 10 == 9)
//			count++;
//	    if (j / 10 == 9)
//			count++;
//	}
//
//	printf("\ncount = %d ", count);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 9; i++)
//	{
//
//		int j = 1;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d =%-2d ", i, j, j*i);
//		}
//		printf("\n");
//	}
//	return 0;
//}



//int main()
//{
//	int i = 0;
//	int count = 0;
//
//	for (i = 101; i < 300; i += 2)//>2���������ż������Ϊ����
//	{
//
//		int j = 0;
//		for (j = 2; j <= sqrt(i); j++)//ֻ���ж�j�Ƿ�С��sqrt(i)��ʵ���Ͼ�������֪���Ƿ��г���1���䱾���������������
//		{
//			if (i %j == 0)
//			{
//				break;
//			}
//		}
//		if (j > sqrt(i))//sqrt��math.h��
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//
//	printf("\ncount = %d\n", count);
//	return 0;
//}//����101~300���ڵ�����

 /*int main()
{
	int year = 0;
	int count = 0;
	for (year = 2000; year <= 3000; year++)
	{
		if (((year % 4 == 0) && (year % 100 == 0)) || (year % 400 == 0))
		{
			printf("%d ", year);
			count++;
		}
	}
     printf("\ncount = %d\n", count);
	 return 0;
}*/



//int main()
//{
//	int a = 16;
//	int b = 32;
//	int r = 0;
//	scanf("%d%d", &a,&b);
//	while (r =a%b)
//	{
//		/*r = a%b;*/
//		a = b;
//		b = r;
//	}
//	printf("%d\n",b);
//	return 0;
//}


//int main()
//{
//	int j = 0;
//	for (j = 1; j < 100; j++)
//	{
//		if (j % 3 == 0)
//			printf(" %d",j);
//	}
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d%d",&a,&b,&c);
//	if (a > b)
//	{
//		int tmp = a;//����һ����ʱ����tmp
//		a = b;
//		b = tmp;
//	}//a��b����λ�ú�a��ֵΪ��С�ģ����������������
//	if (a > c)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b > c)
//	{
//		int tmp = c;
//		c = b;
//		b = tmp;
//	}
//
//	printf("%d %d %d\n", a, b, c);
//	return 0;
//}//�����㷨Ϊ��С�����˳���ӡ��������Ϊa<b&a<c&b<c��Ϊ�Ӵ�С��ӡ�������