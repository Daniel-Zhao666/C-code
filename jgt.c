#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

struct Book
  {

	char name[10];//�󽭴��--����
	short price;//�۸�

 };// ��--��������������

#include<string.h>

int main()
{
	struct Book a1 = { "�󽭴��", 66 };
	struct Book* pb = &a1;

	strcpy(a1.name,"�󽭶�ȥ");//strcpyΪ�⺯������Ҫ������ͷ�ļ���ֻҪ�Ǳ�������Ϊ�ַ����Ķ�Ҫ��strcpy����������ͷ�ļ�
	printf("%s\n",a1.name);
	//printf("%s\n",pb -> name);//����ָ���������->������ָ�������ȷ��
	/*printf("%d\n", pb->price);*/

	/*printf("������%s\n", a1.name);
	printf("�۸�%dԪ\n", a1.price);*/
	/*printf("%s\n",(*pb).name);
	
	printf("%d\n",(*pb).price);*/
	//a1.price = 30;
	//printf("�޸ĺ�ļ۸�: %d\n", a1.price);
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
	//int* p = &a;//int*��intһ��ֻ��һ�����ͣ��˴�*ָ�������ı���Ϊָ�����
	////printf("%p\n",p);
	//*p = 2;//*+������Ϊ�����÷�/��ӷ��ʲ�����
	//printf("a = %d\n",a);
//	return 0;
//}