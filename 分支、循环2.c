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
		if (strcmp(password, "123456") == 0)//==不可用于比较字符串,故引用库函数strcmp（头文件string）
		{
			printf("log in successful\n");
			break;
		}

		else
		{
			printf("输入出错，登录失败\n");
		}
	}
	if (3 == j)
			printf("三次密码输入出错，系统将自动退出程序\n");
	return 0;
}


// int main()
//{
//	 char arr1[] = "love you forever!";
//	 char arr2[] = "*****************";//定义两个数组，以存放字符
//	 int left = 0;
//	 //int right = sizeof(arr1) / sizeof(arr1[0]) - 2;//计算数组大小，arr1中所放置的元素除已有的外，还有结束标志符“\0”，故为得到实际
//	 ////所要替换的元素，应该“-2”
//
//	 int right = strlen(arr1) - 1;//strlen求解字符串长度（不计算\0）
//	 while (left <= right)
//	 {
//		 arr2[left] = arr1[left];
//		 arr2[right] = arr1[right];
//		 printf("%s\n",arr2);
//		 Sleep(1000);//引用库函数Sleep(对应头文件为windows.h)，阔以实现延时打印，单位为ms。
//		 system("cls");//清屏函数（stdlib.h）
//		 left ++;
//		 right--;
//	 }
//      printf("%s\n",arr2);
//	return  0;
//}



//int main()//二分查找有序数组中的元素
//{
//	int arr[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int k = 11;
//
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left  = 0;//元素左下标
//	int right = sz - 1;//右下标
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
//			printf("已找到，下标为： %d\n" , mid);
//			break;
//		}
//	}
//
//	if (left > right)
//	{
//		printf("没找到\n" );
//	}
//	return 0;
//}//寻找有序数组中的需求元素


//int main()//优化之后
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
//		ret = 1;//当不加ret = 1时，会产生累积的结果（此处计算到3时，会把2中的）
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
//}//注意赋值语句和判断语句间的区别

//int main()
//{
//	int i = 0;
//	int j = 0;
//
//	for (; i < 3; i++)
//	{
//		for (j = 0; j < 6; j++)//初试变量在for循环中不可随意省略
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
//if (5 == j)//if语句同样在for循环中使用
//		continue;//break;//for循环中的break同while循环中相同，在for循环中continue能够
////继续进行调整，而while循环中遇到tontinue会直接跳过（调整）步骤，从而进入死循环。
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

	// for (i = 1; i <= 10; i++)//初始化、判断、调整
	// {
	//	 printf("%d ", i );
	// }
	//return 0;
 //}//for循环阔以将初始化语句、循环变量(while)、调整部分（j++/i++）连在一起


//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch <'0' || ch> '9')//只打印数字字符，而不打印其他字符
//			continue;
//		putchar(ch);
//	}
//		return 0;
//}


//int  main()
//{
//	int ret = 0;//定义一个接收变量
//	int ch = 0;
//	char password[10] = { 0 };
//		printf("输入密码:>");
//	scanf("%s", password);//输入密码并将其保存在password数组中，输入password时字符中会带有空格字符（\n），此时会引入ret中
//	//此时缓冲区还存在（\n），需要将其消掉
//	while ((ch = getchar()) != '\n')//getchar();//将“\n”读取
//	{
//		;//空语句
//	}
//	printf("是否确认(Y/N):>");
//	ret = getchar();//getchar会读出scanf中（缓冲区）的字符（\n）
//	if (ret == 'Y')
//	{
//		printf("确认成功\n");
//
//	}
//	else
//	{
//		printf("请再次确认您输入的密码\n");
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
//		putchar(ch);//ctrl + z 取消执行代码
//
//	}
//
//	return 0;
//}