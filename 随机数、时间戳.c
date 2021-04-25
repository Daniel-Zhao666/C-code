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
	printf("请注意，你的电脑将在6分钟之后关机，若输入：hello CDUT就取消关机\n请输入>:");
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
//	int guess = 0;//定义用户所猜数字进行存储
//	      //以时间戳生成随机数起始点(time_t time(time_t *timer))
//	     // time_t数据类型为long
//     ret = rand()%10+1;//1.生成随机数（rand函数），可产生0~32767个随机数,调用rand之前需引用srand（见MSDN索引）
//	 printf("ret = %d\n ", ret);
//	 while (1)
//	 { 
//		 printf("请猜数字:>");
//		 scanf("%d ", &guess);
//		 if (guess > ret)
//		 {
//			 printf("不好意思，猜大了一点哦\n");
//		 }
//		 else if (guess < ret)
//		 {
//			 printf("不好意思，猜小了\n");
//		 }
//		 else
//		 {
//			 printf("congratulations! 不错哦\n"); 
//			 break;
//		 }
//	 }
//}
//
//int main()
//{   int input = 0;
//    srand((unsigned int)time(NULL));//srand需要产生动态随机数时，NULL--空指针
//     //可以采用time时针（时间戳：当前时间相对于计算机起始时间1970.1.1.0:0:0）,主函数中调用一次后，不再从game中循环调用
//	do
//  {   
//	menu();
//	printf("请选择>:");
//	scanf(" %d ", &input);
//	switch (input)
//	{
//	  case 1:
//	  	game();//选择1就开始游戏
//	  	break;
//	  case 0:
//	  	printf("游戏结束\n");//选择0就结束游戏
//	  	break;
//	  default:
//		printf("选择出错\n");//其余情况时，输入错误
//		break;
//	}
//  } 
//  while (input);
//     return 0;
//}
	

//int main()
//{
//	int arr[] = { -1, -2, -3, -6, 1, 0, 2, 3, 6, 8, 10 };
//	int min = arr[0];//将数组中的第一个元素赋值给变量，可避免出现负值比较出错的情况
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
//	for (i = 101; i < 300; i += 2)//>2以外的其他偶数均不为素数
//	{
//
//		int j = 0;
//		for (j = 2; j <= sqrt(i); j++)//只需判断j是否小于sqrt(i)（实际上就是找已知数是否有除开1和其本身外的其他因数）
//		{
//			if (i %j == 0)
//			{
//				break;
//			}
//		}
//		if (j > sqrt(i))//sqrt（math.h）
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//
//	printf("\ncount = %d\n", count);
//	return 0;
//}//查找101~300以内的素数

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
//		int tmp = a;//定义一个临时变量tmp
//		a = b;
//		b = tmp;
//	}//a、b交换位置后。a的值为较小的，后边两个代码类似
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
//}//以上算法为从小到大的顺序打印变量，若为a<b&a<c&b<c则为从大到小打印输出变量