#define _CRT_SECURE_NO_WARNINGS 1 

#include<stdio.h>//���������ڵ��ÿ⺯��


//int main()
//{
//	{//int a����{}ʱ���������ڿ�ʼ
//		int a = 1;
//		printf("a = %d\n",a);
//	}//int a��{}ʱ���������ڽ������ֲ�������
//
//	//��ν�������ھ��ǳ��������ʱ�䣬����ȫ�ֱ������ԣ����������ھ����������������ʱ��
//	return 0;
//}



//int main()
//{
//	//δ�����ı�ʶ��
//	extern int g_val;//�����ⲿ��������ͬԴ�ļ�֮���ȫ�ֱ������������extern������
//	printf("g_val = %d\n", g_val);
//	return 0;
//}


//int age = 23;//ȫ�ֱ���
//void test()//����һ������ȫ�ֱ������ⲿ������Ҳ����ʵ�ִ���ı���
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
// printf("age = %d\n", age);//�ֲ������������򣬼��ñ����δ����ã���ô����������ĸ�����飬ȫ�ֱ���������Ϊ
//                          //��������
//	return 0;
//}


int main()

{
	int num1 = 1;
	int num2 = 2;
	int sum  = 3;//C++�п���ʱ����Ҫ�����������C�����в�֧��
	scanf("%d%d",&num1,&num2);//scanf_s��VS�������Ƽ�������scanf��C���Ժ������Դ�����ɱ��룬���Ǵ�ʱ�Ĵ��벻�߱���ƽ̨�����ԣ�
	//��֧��VSƽ̨��ֻ���ڳ����ʼ���#define _CRT_SECURE_NO_WARNINGS 1����
	sum = num1 + num2;
	printf("sum = %d\n", sum);
	return 0;
}



//int  main()
//{       //����2����֮��
//	int num1 = 0;
//	int num2 = 0;          
//	int sum = 0;//C�����﷨�涨�������Ķ�������Ӧ�ڵ�ǰ�������ǰ��
//
//	scanf("%d%d",&num1,&num2);//&Ϊȡַ��
//	sum = num1 + num2;
//	printf("sum = %d\n", sum);
//	return 0;
//}

//int main()//�����������ҽ���һ��
//
//{
//
//	printf("hello brother\n");//��ӡ������nΪ���з�
//	return 0;//��������int
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
//	printf("%d\n",sizeof(char));//���ڴ���������ռ�Ĵ�С������char--1�ֽڣ�byte��,1byte=8bite(����)���0,1
//	printf("%d\n", sizeof(short));//������Ϊ2--��Ӧ16bite
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
//	//����20
//	char age = 20;//���ڴ�����1���ֽڣ�8������λ���������20��������10100��
//	printf("%d\n",age);
//	return 0;
//}

////int main()
////{    
////	//�������Ϊ������+������+��ֵ
////	short age = 23;//���ڴ�����2���ֽڣ�16��bite�����23
////	float weight = 95.6f;//���ڴ�����4��byte���С��95.6��f��ʾ�����ȸ������ͣ�����f���Բ���ʧ����
////	                    //���߾��ȴ���ڵ;���ʱ���ܻᶪʧ���ȡ�
////	return 0;
////	//C���Ա�׼�й涨sizeof(long)>=sizeof(int)���ɣ�
//}

//int a1 = 11;//ȫ�ֱ���
//int main()
//{
//	int a = 10;
//	printf("%d\n",a);//�����齫�ֲ���������{}���ڵģ���ȫ�ֱ�������{}����ģ���������ͬ����ȫ�ֱ�����ֲ�����
//	//��ͬʱ���ֲ����������ȼ�����ȫ�ֱ���
//	return 0;
//}

