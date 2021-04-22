#define _CRT_SECURE_NO_WARNINGS 1 

#include<stdio.h>//常量，用于调用库函数


//int main()
//{
//	{//int a进入{}时其生命周期开始
//		int a = 1;
//		printf("a = %d\n",a);
//	}//int a出{}时其生命周期结束（局部变量）
//
//	//所谓生命周期就是程序的作用时间，对于全局变量而言，其生命周期就是整个程序的作用时间
//	return 0;
//}



//int main()
//{
//	//未声明的标识符
//	extern int g_val;//声明外部变量，不同源文件之间的全局变量代码可以用extern来链接
//	printf("g_val = %d\n", g_val);
//	return 0;
//}


//int age = 23;//全局变量
//void test()//定义一个包含全局变量的外部函数，也可以实现代码的编译
//{
//	printf("test()--%d\n", age);
//}
//int main()
//{
//	printf("%d\n",age);
//	return 0;
//}

//int main()
//{
//	int age = 30; 
// printf("age = %d\n", age);//局部变量的作用域，即该变量何处可用，那么作用域就是哪个代码块，全局变量作用域为
//                          //整个工程
//	return 0;
//}


int main()

{
	int num1 = 1;
	int num2 = 2;
	int sum  = 3;//C++中可随时在需要处定义变量，C语言中不支持
	scanf("%d%d",&num1,&num2);//scanf_s（VS编译器推荐）代替scanf（C语言函数库自带）后可编译，但是此时的代码不具备跨平台编译性，
	//仅支持VS平台，只需在程序最开始添加#define _CRT_SECURE_NO_WARNINGS 1即可
	sum = num1 + num2;
	printf("sum = %d\n", sum);
	return 0;
}



//int  main()
//{       //计算2个数之和
//	int num1 = 0;
//	int num2 = 0;          
//	int sum = 0;//C语言语法规定，变量的定义类型应在当前代码块最前面
//
//	scanf("%d%d",&num1,&num2);//&为取址符
//	sum = num1 + num2;
//	printf("sum = %d\n", sum);
//	return 0;
//}

//int main()//主函数，有且仅有一个
//
//{
//
//	printf("hello brother\n");//打印函数，n为换行符
//	return 0;//返回整型int
//}
//int main()
//{
//	int age = 20;
//	printf("%d\n",age);
//	return 0;
//}
//int main()
//{
//	double d = 3.14;
//	printf("%lf\n", d);
//		return 0;
//}
//int main()
//{
//	printf("%d\n",sizeof(char));//向内存申请所需空间的大小函数，char--1字节（byte）,1byte=8bite(比特)存放0,1
//	printf("%d\n", sizeof(short));//申请结果为2--对应16bite
//	printf("%d\n", sizeof(int));//--4--32bite
//	printf("%d\n", sizeof(long));//--4
//	printf("%d\n", sizeof(long long));//--8--64bite
//	printf("%d\n", sizeof(float));//--4
//	printf("%d\n", sizeof(double));//--8
//	printf("%d\n", sizeof(long double));//--8
//	return 0;
//
//}
//int main()
//{
//	char age = 20;
//	printf("%d\n",age);
//	return 0;
//}
//int main()
//{
//	//年龄20
//	char age = 20;//向内存申请1个字节（8个比特位）用来存放20（二进制10100）
//	printf("%d\n",age);
//	return 0;
//}

////int main()
////{    
////	//定义变量为：类型+变量名+赋值
////	short age = 23;//向内存申请2个字节（16个bite）存放23
////	float weight = 95.6f;//向内存申请4个byte存放小数95.6，f表示单精度浮点类型，加上f可以不丢失精度
////	                    //当高精度存放在低精度时可能会丢失精度。
////	return 0;
////	//C语言标准中规定sizeof(long)>=sizeof(int)即可；
//}

//int a1 = 11;//全局变量
//int main()
//{
//	int a = 10;
//	printf("%d\n",a);//不建议将局部变量（“{}”内的）与全局变量（“{}”外的），命名相同，当全局变量与局部变量
//	//相同时，局部变量的优先级高于全局变量
//	return 0;
//}

