#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

void main()
{
	char* c[] = {"ENTER", "NEW", "POINT", "FIRST"};
	char* *cp[] = { c + 3, c + 2, c +1, c };
	char* * *cpp = cp;

	printf("%s\n", **++cpp);//指向 c + 2 
	printf("%s\n", *--*++cpp + 3);//++ -- 仅针对cpp中的内容
	printf("%s\n", *cpp[-2] + 3);//两次 ++ 后cpp地址，指向 c + 1 的位置, * *(cpp - 2) + 3 ；*一次读取到c+3的空间，
	// **（两次） -> 拿到 c + 3 空间对应存放的字符串首元素的位置（char* 中 -> FIRST），+3 -> 表示字符向后移动3，打印ST
	printf("%s\n", cpp[-1][-1] + 1);//上一次的 [cpp-2]后 cpp的地址并未改变，cpp[-1]后，指针由c+1 -> c+2，
	//cpp[-1][-1] -> c+1(c + 2 - 1) 找到对应的字符为“NEW”，cpp[-1][-1] + 1 -> EW（打印）
	//cpp[-1][-1] + 1 -> *(*(cpp - 1) -1) + 1
}


//void main()
//{
	//char* a[] = {" work ", " at ", " alibaba "};//常量字符串“首字符”的地址放到数组中 --> w a a 
	//char* *pa = a;// *pa -> 类型为 char*

	//pa++;// pa++ -> char* + 1表示跳过一个char*的字符
	//printf("%s\n", *pa);

//}


//void main()
//{
	//int aa[2][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9,10 };
	//int *ptr1 = (int *)(&aa + 1);//  &aa -> 表示取出整个二维数组的地址（第一行的地址），+1跳过一个整型到第二行末尾
	// &aa -> 数组指针 强转为int * 的ptr1 
	//int *ptr2 = (int *)(*(aa + 1));//首元素地址的aa，+1后表示

	//printf("%d, %d\n", *(ptr1 - 1), *(ptr2 - 1));
//}



//void main()
//{
//	int a[5][5];
//	int(*p)[4];
//	p = a;
//	printf("%p, %d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
//}


//void main()
//{
	//int a[3][2] = {(0, 1),(2, 3), (4, 5)};//逗号表达式，以表达式最后一个元素为准，此题初始化元素仅有1 3 5
	//int *p;
	//p = a[0];
  	//printf("%d\n", p[0]);
//}


//void main()
//{

	//int a[4] = {1, 2, 3, 4};
	
	//int *ptr1 = (int*)(&a + 1);//跳过一个数组长度，转到数组最后一个元素末尾，强制类型转换为int*，放到ptr1中
	//int *ptr2 = (int*)((int)a + 1);//+ 1 后地址相差一个字节
	//printf("%x\n %x", ptr1[-1], *ptr2);// x% -> 打印16进制
//}


//struct Test
//{
//	int num;
//	char* pcName;
//	short sDate;
//	char cha[2];
//	short sBa[4];
//}* p;//结构体指针变量
//
////若结构体Test类型变量大小为20byte
//
//void main()
//{
//	p = (struct Test*)0x100000;
//	printf("%p\n", p + 0x1);
//	printf("%p\n",(unsigned long)p + 0x1);
//	printf("%p\n",(unsigned int*)p + 0x1);
//}


//void main()
//{
//	int a[5] = { 1, 2, 3, 4, 5 };
//	int *ptr = (int *)(&a + 1);
//	printf("%d, %d\n", *(a + 1), *(ptr - 1));
//}


//int main()
//{
	


	//int a[3][4] = { 0 };
	//printf("%d\n", sizeof(a));// 48
	//printf("%d\n", sizeof(a[0][0])); //  4
	//printf("%p\n", &a[0][0]);
	//printf("%p\n",a[0] + 1);
	//printf("%d\n", sizeof(a[0]));// a[0]相当于第一行作为一维数组的数组名，sizeof（arr[0]）->将数组名单独放在arr[0]中，
								//类似于计算第一行的大小  -> 16

	//printf("%d\n", sizeof(a[0] + 1));// -> 4  a[0]放在表达式当中，表示首元素的地址,即为首行第一个元素的地址
	//printf("%d\n", sizeof(*(a[0] + 1)));// 4

	//printf("%d\n", sizeof(a + 1));//a为二维数组数组名，无sizeof(a)，也无&(a)，所以a是首元素地址
	    //把二维数组看成一维数组时，二维数组的首元素是其第一行，此时的a是第一行首元素的地址，a + 1 -> 第二行的地址
	//printf("%d\n", sizeof(*(a + 1)));//计算第二行元素大小

	//printf("%d\n", sizeof(&a[0] + 1));//  -> 第二行地址
	//printf("%d\n", sizeof(*(&a[0] + 1)));//第二行元素大小
	//printf("%d\n", sizeof(*a));//a是首元素地址，第一行的地址，*a为第一行，sizeof(*a)计算第一行大小
	//printf("%d\n", sizeof(a[3]));//不会访问第四行元素，相当于访问a[0]

	//char *p = "abcde";//将首元素传到p中
	
	//printf("%d\n", strlen(p));  // 5
	//printf("%d\n", strlen(p + 1));   // 4 
	//printf("%d\n", strlen(*p));      // error
	//printf("%d\n", strlen(p[0]));    // error
	//printf("%d\n", strlen(&p));     // 随机 p的空间与 字符空间不同
	//printf("%d\n", strlen(&p + 1)); // 随机
	//printf("%d\n", strlen(&p[0] + 1));// 4


	//printf("%d\n", sizeof(p));//计算指针变量的大小 4/8
	//printf("%d\n", sizeof(p + 1)); // 访问下一个元素的地址，并计算其大小
	//printf("%d\n", sizeof(*p));// 1
	//printf("%d\n", sizeof(p[0]));// -> 等同于 *（p + 0）== 'a' 
	//printf("%d\n", sizeof(&p));// 4/8
	//printf("%d\n", sizeof(&p + 1));// 4/8
	//printf("%d\n", sizeof(&p[0] + 1));// 4


	//char arr[] = "abcde";//a ~ \0

	//printf("%d\n", strlen(arr));// 5
	//printf("%d\n", strlen(arr + 0));// 5 
	//printf("%d\n", strlen(*arr));// error
	//printf("%d\n", strlen(arr[1]));// error
	//printf("%d\n", strlen(&arr));// 5
	//printf("%d\n", strlen(&arr + 1));// 随机
	//printf("%d\n", strlen(&arr[0] + 1));// 4
	
	//printf("%d\n", sizeof(arr));//计算数组所占空间的大小
	//printf("%d\n", sizeof(arr + 0)); // 4/8
	//printf("%d\n", sizeof(*arr));// 1
	//printf("%d\n", sizeof(arr[1]));// 1
	//printf("%d\n", sizeof(&arr));// 4/8
	//printf("%d\n", sizeof(&arr + 1));
	//printf("%d\n", sizeof(&arr[0] + 1));//打印地址时，与测试平台有关


//	return 0;
//}
