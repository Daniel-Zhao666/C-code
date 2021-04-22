#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

#define Mim 1//#define定义标识符常量，当遇到常量是自动识别到标识符（代替常量）

int main()
{
	double   dh = 'c';
	double*  pdh = &dh;
	printf("%d\n",sizeof(pdh));
	/**pc = 'm';
	printf("%c\n", ch);*/
	return 0;
}
//指针的变量大小在32位的平台上对应为4个byte，在64位的平台上为8byte

//int main()
//{
//	int a = 1000;
//	int* p = &a;//定义一个变量来存放a的地址
//	//printf(" %p\n", p);//此时的p作为专用的指针变量，存放变量的地址
//	//printf(" %p\n", &a);
//	*p = 13;//*---解引用操作符
//	printf("a = %d\n", a);
	//return 0;
//}

//int main()
//{
//	int a = 3;
//	int c = 2;
//   extern int Add(int, int);//外部声明符号可以放置在局部变量和全局变量中
//
//	int sum = Add(a, c);
//	printf("sum = %d\n", sum);
//	return 0;
//}//普通的函数具有外部链接属性，即支持用外部声明符号进行链接，当函数被static修饰时将函数的属性变为内部

//
//int main()
//{
////static修饰全局变量时，是改变变量的作用域，使得静态的全局变量仅在自己的源文件中使用
//	extern int g_val;//extern--声明外部符号
//
//	printf("g_val = %d\n", g_val);
//	return 0;
// }


// void test()//void--空
// {
//	static int a = 1;//static用来修饰静态的局部变量a，
//	 a++;      //static使得局部变量的周期延长
//	printf("a = %d\n", a );
// }
//
//int main()
//{
//	int i = 0;
//	while (i < 6)
//	{
//		test();
//		  i++;
//	}
      	//typedef--类型重新定义
	//return 0;
 //}


//int实际上是属于有符号数字，
//()--函数调用符，[]--数组下标标识符，

// int main()
//{
//	int a = 1;
//	int b = 2;
//	int max = 0;
//	max = (a > b? a : b);
//
//	/*if (a > b)
//		max = a;
//	else
//		max = b;*/
//	printf("max = %d\n",max);
//	return 0;
//}
//

 /*int main()

{
	int a = 0;
	int b = 1;
	int c = a && b;//逻辑操作符
	printf("c = %d\n",c );
	return 0;
}
*/
//int main()
//{
//	int a = (int)2.16;//强制类型转换（不推荐使用）
//
//	return 0;
//}



//int main()
//{
//	int a = 3;
//	//int b = a++;//后置++，表示先赋值给另一变量，之后自身++，此时打印的结果为b=3、a=4
//	//int b = ++a;//前置++，先++然后赋值给变量
//	//int b = a--;//规则与后置++相似
//	int b = --a;//规则与前置--相似
//	printf("a = %d b = %d\n", a, b);
//	return 0;
//}





//int main()
//{
//	int a = 0;
//	int b = ~a;//按二进制位取反.负数在存储时，是存的二进制的补码
//	printf("%d\n",b);//打印的输出结果为原码，正数的补码是其本身，负数的补码为原码按位取反后再加1
//	//a = 0000_0000_0000_0000_0000_0000_0000_0000-- b = 1111_1111_1111_1111_1111_1111_1111_1111
//	//所以打印的输出结果为1111_1111_1111_1111_1111_1111_1111_1111减1后再按位取反，最高位为符号位（1：负数，0：正数）
//	//即1000_0000_0000_0000_0000_0000_0000_0001（负1）
//	return 0;
//}



//sizeof是操作符 
//int Mim(int x, int y)
//{
//	if (x > y)
//		return y;
//	else
//		return x;
//}
//
// int main()
// {
//	 int num1 = 10;
//	 int num2 = 30;
//	 int mim = 0;
//	 mim = Mim (num1, num2);
//	 printf("mim = %d\n", mim);
//	return 0;
//}