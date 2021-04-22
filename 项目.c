#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>



int main()
{
	
	long arr[100] = {0};//100个整型元素的数组
	//100个sizeof(long) = 400
	int sz = 0;
	printf("%d\n",sizeof(arr));
	sz = sizeof(arr) / sizeof(arr[0]);
	printf("sz = %d\n",sz);//计算数组的元素个数 = 总数组大小/每个数组的大小
//	int a = 1;
//	printf("%d\n",sizeof(a));//单位--字节
//	printf("%d\n",sizeof(int));
//	printf("%d\n",sizeof a );
//	/*printf("%d\n",sizeof int);*///sizeof不可直接打印变量的类型，但可以直接打印变量
	return 0;
}


//int main()
//{  
//
//	int a = 1;
//	int b = 2;
//	int c = a ^ b;
//	printf("c = %d\n",c);
//	//&--按位取与，|--按位取或，^__按位异或（相同为0，相异为1），^~__按位同或（相同为1，相异为0）
//	return 0;
//}

//int main()
//{
//	int b = 3;
//	int a = b << 2;//左移二进制的位
//	printf("%d\n",a);
//	printf("%d\n",b);
//	return 0;
//}

//int main()
//{ 
//	int a = 5%2;//%取模（余数）
//	printf("%d\n", a);
//	return 0;
//}


//int main()
//
//{
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};//整型后的10个元素的集合，
//	printf("%d\n",arr[0]);//C语言中我们以下标的形式访问数组里面的元素（0~n-1个下标），arr[5]--访问第6个元素
//	//循环打印
//	int i = 0;
//	while (i < 10)
//	{
//		printf( "%d",arr[i]);
//		i++;
//	}
//	return 0;
//}


//#include <string.h>
// int Add(int x, int y)//Add为自定义函数,返回的z为整型（int），所以Add函数应为int.Add中的“{}”内部为函数体--执行运算
//{
//	int z = x + y;
//	return z;//将求和后的值返回到sum1,sum2
//}
//
//
// int main()
// {
//	 int num1 = 0;
//	 int num2 = 0;
//	 int sum =  0;
//	 printf("%c30,%c60 >:");
//	 scanf("%d %d", &num1, &num2);
//	 sum = Add(num1, num2);
//	 printf("sum = %d\n",sum);
//	 return 0;
// }

//int main()
//{
//	int num1 = 30;
//	int num2 = 60;
//	int sum1 = 0;
//	int sum2 = 0;
//	int a = 1000;
//	int b = 3000;
//
//	sum1 = Add(num1, num2);
//	sum2 = Add(a, b);
//	printf("sum1 = %d\n",sum1);
//	printf("sum2 = %d\n",sum2);
//	return 0;
//}

//int main()
//{
//	int line = 0;
//	printf("加入cdut\n");
//	while (line <= 300)//while引起的循环语句
//	{
//		printf("努力学习%d\n",line) ;
//		line++;
//	}
//	if (line > 300)
//		printf("顺利毕业于cdut\n");
//	return  0;
//}

//int main()
//{
//	printf("hello cdut\n");
//	return 0;
//}
//int main()
//{
//	int input = 0;
//	printf("加入理工\n");
//	printf("是否足够努力？(1/0)>:");
//	scanf("%d\n",&input);&input取输入的地址，
//	if (input == 1)//if_else引起的判断语句
//		printf("好前途\n");
//	else
//		printf("家里蹲\n");
//	return 0;
//}

//int main()
//
//{
// printf("%c\n",'\x62');//ASCII码中（字符0…9对应十进制的48…57，字符A…Z对应十进制的65…90，字符a…z对应十进制97…123）
//	return 0;
//}

 
/*--C语言注释方式，不可嵌套
//  int main()
//{
////	printf("%d\n",strlen("c:\test\32\21.1.16"));
////	//“\32”--表示2个8进制（O）数字，仅表示为1个字符
////	//32作为8进制代表的10进制数字（26），作为ASCII码所对应的字符
////	printf("%c\n",'\132');// ASCII码的范围0~7，“\ddd”--表示1~3个8进制数字
//	return 0;
//}
//“\xdd”--dd表示2个16进制（H）数字
*/


//int main()
//{
//	//printf("%c\n",'\'');//“\'”--转义到普通字符，%c表示打印字符
//	printf("%c\n",'\"');
//	return 0;
//}


//int main()
//{
//	printf("c:\\test\\32\\test.2.1\n");//“\t”--水平制表符,"\v"--垂直制表符，“\\”可转义“\”到普通的斜杠，
//	//而不转义想要的内容
//	//“\?”--书写连续多个问号时使用，即正常输出想要内容
//	return 0;
//}

//strlen求字符串长度是配合#include<string.h>的头文件使用
//int main()
//{
//	char arr1[] = "abcd";//数组（字符串），末尾默认放"\0 " 
//	//“\0”表示字符串的结束标志,不算内容
//	char arr2[] = { 'a', 'b', 'c', 'd','\0'};//不加“\0”则打印结果为随机值，“\n”表示换行字符
//	printf("%d\n",strlen(arr1));//“%s”表示打印字符串,%d打印长度
//	printf("%d\n",strlen(arr2));//strlen--计算字符串长度
//	return 0;
//}


////枚举(关键字enum)常量（一一列举）
//
// enum clour
// {
//     RED,
//     YELLOW,
//     BLUE
// };//此处分号(;)不可少
// int main()
//{
//	enum Color color = RED;
//	printf("color = %d\n",color);
//	return 0;
//}
//


//#define MAX 1
////define定义的常量
//int main()
//{
//	int arr[MAX] = { 0 };//{0}初始化
//	printf("MAX = %d\n",MAX);
//	return 0;
//}

//const修饰的常变量
//int main()
//
//{
//	const int n = 1;
//	int arr[10] = { 0 };// n此时是常变量，不可直接加到数组中，只有将常变量改为常数，才可编译,{0}--数组初始化
// // const	int num = 4;//字面常量（直接写出）赋值到num上，const表示常属性，当const时该变量不会变化
// // //num本质上是属于变量，const只是让其具有常属性
//	//printf(" %d\n", num);
//	// num = 8;
//	printf(" %d\n", n);
//	return 0;
//}//ctrl+F7仅运行调试，不弹出窗口
