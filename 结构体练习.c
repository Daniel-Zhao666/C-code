#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

typedef struct china{
	char province[10];
	char city[6];
	int population;

}china;//typedef�����ض���ṹ��
 
void Print(china* ps)
{
	printf("province = %s\n", ps -> province);
	printf("city     = %s\n", ps -> city);
	printf("population = %s\n", ps -> population);
}//���⿪�ٿռ䣨��ѡ��ַ��

//int main()
//{
//	china s = {"�Ĵ�", "�ɶ�", "1000��"};//��ʼ��
//	Print(&s);
//	return 0;
//}