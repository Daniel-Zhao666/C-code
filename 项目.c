#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>



int main()
{
	
	long arr[100] = {0};//100������Ԫ�ص�����
	//100��sizeof(long) = 400
	int sz = 0;
	printf("%d\n",sizeof(arr));
	sz = sizeof(arr) / sizeof(arr[0]);
	printf("sz = %d\n",sz);//���������Ԫ�ظ��� = �������С/ÿ������Ĵ�С
//	int a = 1;
//	printf("%d\n",sizeof(a));//��λ--�ֽ�
//	printf("%d\n",sizeof(int));
//	printf("%d\n",sizeof a );
//	/*printf("%d\n",sizeof int);*///sizeof����ֱ�Ӵ�ӡ���������ͣ�������ֱ�Ӵ�ӡ����
	return 0;
}


//int main()
//{  
//
//	int a = 1;
//	int b = 2;
//	int c = a ^ b;
//	printf("c = %d\n",c);
//	//&--��λȡ�룬|--��λȡ��^__��λ�����ͬΪ0������Ϊ1����^~__��λͬ����ͬΪ1������Ϊ0��
//	return 0;
//}

//int main()
//{
//	int b = 3;
//	int a = b << 2;//���ƶ����Ƶ�λ
//	printf("%d\n",a);
//	printf("%d\n",b);
//	return 0;
//}

//int main()
//{ 
//	int a = 5%2;//%ȡģ��������
//	printf("%d\n", a);
//	return 0;
//}


//int main()
//
//{
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};//���ͺ��10��Ԫ�صļ��ϣ�
//	printf("%d\n",arr[0]);//C�������������±����ʽ�������������Ԫ�أ�0~n-1���±꣩��arr[5]--���ʵ�6��Ԫ��
//	//ѭ����ӡ
//	int i = 0;
//	while (i < 10)
//	{
//		printf( "%d",arr[i]);
//		i++;
//	}
//	return 0;
//}


//#include <string.h>
// int Add(int x, int y)//AddΪ�Զ��庯��,���ص�zΪ���ͣ�int��������Add����ӦΪint.Add�еġ�{}���ڲ�Ϊ������--ִ������
//{
//	int z = x + y;
//	return z;//����ͺ��ֵ���ص�sum1,sum2
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
//	printf("����cdut\n");
//	while (line <= 300)//while�����ѭ�����
//	{
//		printf("Ŭ��ѧϰ%d\n",line) ;
//		line++;
//	}
//	if (line > 300)
//		printf("˳����ҵ��cdut\n");
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
//	printf("������\n");
//	printf("�Ƿ��㹻Ŭ����(1/0)>:");
//	scanf("%d\n",&input);&inputȡ����ĵ�ַ��
//	if (input == 1)//if_else������ж����
//		printf("��ǰ;\n");
//	else
//		printf("�����\n");
//	return 0;
//}

//int main()
//
//{
// printf("%c\n",'\x62');//ASCII���У��ַ�0��9��Ӧʮ���Ƶ�48��57���ַ�A��Z��Ӧʮ���Ƶ�65��90���ַ�a��z��Ӧʮ����97��123��
//	return 0;
//}

 
/*--C����ע�ͷ�ʽ������Ƕ��
//  int main()
//{
////	printf("%d\n",strlen("c:\test\32\21.1.16"));
////	//��\32��--��ʾ2��8���ƣ�O�����֣�����ʾΪ1���ַ�
////	//32��Ϊ8���ƴ����10�������֣�26������ΪASCII������Ӧ���ַ�
////	printf("%c\n",'\132');// ASCII��ķ�Χ0~7����\ddd��--��ʾ1~3��8��������
//	return 0;
//}
//��\xdd��--dd��ʾ2��16���ƣ�H������
*/


//int main()
//{
//	//printf("%c\n",'\'');//��\'��--ת�嵽��ͨ�ַ���%c��ʾ��ӡ�ַ�
//	printf("%c\n",'\"');
//	return 0;
//}


//int main()
//{
//	printf("c:\\test\\32\\test.2.1\n");//��\t��--ˮƽ�Ʊ��,"\v"--��ֱ�Ʊ������\\����ת�塰\������ͨ��б�ܣ�
//	//����ת����Ҫ������
//	//��\?��--��д��������ʺ�ʱʹ�ã������������Ҫ����
//	return 0;
//}

//strlen���ַ������������#include<string.h>��ͷ�ļ�ʹ��
//int main()
//{
//	char arr1[] = "abcd";//���飨�ַ�������ĩβĬ�Ϸ�"\0 " 
//	//��\0����ʾ�ַ����Ľ�����־,��������
//	char arr2[] = { 'a', 'b', 'c', 'd','\0'};//���ӡ�\0�����ӡ���Ϊ���ֵ����\n����ʾ�����ַ�
//	printf("%d\n",strlen(arr1));//��%s����ʾ��ӡ�ַ���,%d��ӡ����
//	printf("%d\n",strlen(arr2));//strlen--�����ַ�������
//	return 0;
//}


////ö��(�ؼ���enum)������һһ�о٣�
//
// enum clour
// {
//     RED,
//     YELLOW,
//     BLUE
// };//�˴��ֺ�(;)������
// int main()
//{
//	enum Color color = RED;
//	printf("color = %d\n",color);
//	return 0;
//}
//


//#define MAX 1
////define����ĳ���
//int main()
//{
//	int arr[MAX] = { 0 };//{0}��ʼ��
//	printf("MAX = %d\n",MAX);
//	return 0;
//}

//const���εĳ�����
//int main()
//
//{
//	const int n = 1;
//	int arr[10] = { 0 };// n��ʱ�ǳ�����������ֱ�Ӽӵ������У�ֻ�н���������Ϊ�������ſɱ���,{0}--�����ʼ��
// // const	int num = 4;//���泣����ֱ��д������ֵ��num�ϣ�const��ʾ�����ԣ���constʱ�ñ�������仯
// // //num�����������ڱ�����constֻ��������г�����
//	//printf(" %d\n", num);
//	// num = 8;
//	printf(" %d\n", n);
//	return 0;
//}//ctrl+F7�����е��ԣ�����������
