#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

typedef struct china{
	char province[10];
	char city[6];
	int population;

}china;//typedef用来重定义结构体
 
void Print(china* ps)
{
	printf("province = %s\n", ps -> province);
	printf("city     = %s\n", ps -> city);
	printf("population = %s\n", ps -> population);
}//避免开辟空间（首选传址）

//int main()
//{
//	china s = {"四川", "成都", "1000万"};//初始化
//	Print(&s);
//	return 0;
//}