#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main()
{
	int ch = 0;
	while ((ch=getchar()) != EOF)//EOF--end of file的缩写，即文件结束标识符
	{

		putchar(ch);
	}
	return 0;
}

 /*int main()
{
	int ch = getchar();
	putchar(ch);
	printf("%c\n",ch);
	return 0;
}*/


//int main()
//{
//	int j = 1;
//
//	while (j <= 10)
//	{   
//		
//		if (j == 6)
//			/*break;*/
//			continue;
//		printf("%d\n", j);
//		j++;
//	}
//	//while循环中的break是用于永久终止循环，即直接终止，continue--终止内部循环（跳转到判断语句中进行）
//	//其后的代码不再执行。
//}


//int main()
//{
//	int n = 1;
//	int m = 2;
//	switch (n)
//	{
//	case 1: m++;
//	case 2: n++;
//	case 3:
//		switch (n)//允许switch嵌套使用
//		{
//		case 1: n++;
//		case 2: m++; n++; break;
//		}
//	case 4: m++;
//		break;
//	}
//	printf("m = %d , n = %d", m, n);
//	return 0;
//}

// int main()
//
//{
//	int day = 0;
//	scanf("%d ", &day);
//	switch (day)//switch语句中的变量应为整型--int 
//	{
//	 case 1:
//	 	printf("星期一\n");
//		break;//case之后的break可以不用有（case内的情况相同时），仅保留一个break即可
//	 case 2:
//	 	printf("星期二\n");
//		break;
//	 case 3://case语句中的变量为整型的常量表达式
//	 	printf("星期三\n");
//		break;//跳出switch语句
//	 case 4:
//	 	printf("星期四\n");
//		break;
//	 case 5:
//	 	printf("星期五\n");
//		break;
//	 case 6:
//	 	printf("星期六\n");
//		break;
//	 case 7:
//		printf("星期天\n");
//		break;
//	 default:
//		printf("无输出\n");
//		break;
//	}
//	
//	return 0;
//}//switch -- case 语句（条件语句）


//int main()
//
//{
//	int j = 0;
//	/*while (j <= 100)
//	{
//		printf("%d ",j);
//		j+=2;
//
//	}*/
//
//	while (j <= 100)
//	{
//		if (j%2 == 0)
//			printf("%d ",j);
//		j++;
//	}
//	return 0;
//}//找偶数


//int main()
//
//{
//	int num = 1;
//	if (3 == num)//“=”赋值语句，不是判断（==）语句，所以能够输出，为方便检查代码，当遇到常、变量比较大小时采用（常量）在前,而变量在后的形式
//	{
//		printf("hello\n");
//	}
//	else
//		printf("world\n");
//	return 0;
//}


//int main()
//{
//	int a = 1;
//	int b = 2;
//	if (a == 1)
//	{
//		if (b == 3)
//			printf("hello\n");
//		else
//			printf("hi\n");//else和距离它自己最近的尚未匹配的if进行匹配，构成一个完整的语句
//	}
//	return 0;
//}

//int main()
//{
//
//	int age = 80;
//	if (age < 18)
//		printf("age = 青少年\n", age);
//
//
//	else {
//		   if (18 <= age && age < 30)//判断语句中，采用逻辑关系操作符执行代码，而不用数学运算符
//			printf("age = 青年\n", age);//同样一个判断语句中，如果存在多个执行程序，那么需要用代码块--“{}”
//		   else if (30 <= age && age < 50)
//			printf("age = 中年 \n", age);
//		   else if (50 <= age && age < 70)
//			printf("age = 老年\n", age);
//		   else
//			printf("age = 耄耋之年\n", age);
//	}//分成2个逻辑来编写程序。

	//else if (18 <= age && age < 30)//判断语句中，采用逻辑关系操作符执行代码，而不用数学运算符
	//	printf("age = 青年\n", age);
	//else if (30 <= age && age < 50)
	//	printf("age = 中年 \n", age);
	//else if (50 <= age && age < 70)
	//	printf("age = 老年\n", age);
	//else
	//	printf("age = 耄耋之年\n",age);
//	return 0;
//}