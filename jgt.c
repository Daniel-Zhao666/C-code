#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

struct Book
  {

	char name[10];//大江大河--阿耐
	short price;//价格

 };// ；--用来结束该类型

#include<string.h>

int main()
{
	struct Book a1 = { "大江大河", 66 };
	struct Book* pb = &a1;

	strcpy(a1.name,"大江东去");//strcpy为库函数，需要引用其头文件，只要是变量类型为字符串的都要用strcpy函数并附上头文件
	printf("%s\n",a1.name);
	//printf("%s\n",pb -> name);//利用指向操作符“->”进行指针变量的确定
	/*printf("%d\n", pb->price);*/

	/*printf("书名：%s\n", a1.name);
	printf("价格：%d元\n", a1.price);*/
	/*printf("%s\n",(*pb).name);
	
	printf("%d\n",(*pb).price);*/
	//a1.price = 30;
	//printf("修改后的价格: %d\n", a1.price);
	//return 0;
}




//int main()

//{

	/*printf("%d\n",sizeof(char*));
	printf("%d\n",sizeof(short*));
	printf("%d\n",sizeof(float*));*/
	/*printf("",sizeof(char*));*/
	/*double d = 3.16;
	double* pd = &d;
	printf("pd = %d\n",sizeof(pd));*/
	/**pd = 2.3;
	printf("%lf\n",d);
*/
	//int a = 1;
	//int* p = &a;//int*与int一样只是一个类型，此处*指的是其后的变量为指针变量
	////printf("%p\n",p);
	//*p = 2;//*+变量作为解引用符/间接访问操作符
	//printf("a = %d\n",a);
//	return 0;
//}