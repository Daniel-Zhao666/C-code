#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

#define Mim 1//#define�����ʶ���������������������Զ�ʶ�𵽱�ʶ�������泣����

int main()
{
	double   dh = 'c';
	double*  pdh = &dh;
	printf("%d\n",sizeof(pdh));
	/**pc = 'm';
	printf("%c\n", ch);*/
	return 0;
}
//ָ��ı�����С��32λ��ƽ̨�϶�ӦΪ4��byte����64λ��ƽ̨��Ϊ8byte

//int main()
//{
//	int a = 1000;
//	int* p = &a;//����һ�����������a�ĵ�ַ
//	//printf(" %p\n", p);//��ʱ��p��Ϊר�õ�ָ���������ű����ĵ�ַ
//	//printf(" %p\n", &a);
//	*p = 13;//*---�����ò�����
//	printf("a = %d\n", a);
	//return 0;
//}

//int main()
//{
//	int a = 3;
//	int c = 2;
//   extern int Add(int, int);//�ⲿ�������ſ��Է����ھֲ�������ȫ�ֱ�����
//
//	int sum = Add(a, c);
//	printf("sum = %d\n", sum);
//	return 0;
//}//��ͨ�ĺ��������ⲿ�������ԣ���֧�����ⲿ�������Ž������ӣ���������static����ʱ�����������Ա�Ϊ�ڲ�

//
//int main()
//{
////static����ȫ�ֱ���ʱ���Ǹı������������ʹ�þ�̬��ȫ�ֱ��������Լ���Դ�ļ���ʹ��
//	extern int g_val;//extern--�����ⲿ����
//
//	printf("g_val = %d\n", g_val);
//	return 0;
// }


// void test()//void--��
// {
//	static int a = 1;//static�������ξ�̬�ľֲ�����a��
//	 a++;      //staticʹ�þֲ������������ӳ�
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
      	//typedef--�������¶���
	//return 0;
 //}


//intʵ�����������з������֣�
//()--�������÷���[]--�����±��ʶ����

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
	int c = a && b;//�߼�������
	printf("c = %d\n",c );
	return 0;
}
*/
//int main()
//{
//	int a = (int)2.16;//ǿ������ת�������Ƽ�ʹ�ã�
//
//	return 0;
//}



//int main()
//{
//	int a = 3;
//	//int b = a++;//����++����ʾ�ȸ�ֵ����һ������֮������++����ʱ��ӡ�Ľ��Ϊb=3��a=4
//	//int b = ++a;//ǰ��++����++Ȼ��ֵ������
//	//int b = a--;//���������++����
//	int b = --a;//������ǰ��--����
//	printf("a = %d b = %d\n", a, b);
//	return 0;
//}





//int main()
//{
//	int a = 0;
//	int b = ~a;//��������λȡ��.�����ڴ洢ʱ���Ǵ�Ķ����ƵĲ���
//	printf("%d\n",b);//��ӡ��������Ϊԭ�룬�����Ĳ������䱾�������Ĳ���Ϊԭ�밴λȡ�����ټ�1
//	//a = 0000_0000_0000_0000_0000_0000_0000_0000-- b = 1111_1111_1111_1111_1111_1111_1111_1111
//	//���Դ�ӡ��������Ϊ1111_1111_1111_1111_1111_1111_1111_1111��1���ٰ�λȡ�������λΪ����λ��1��������0��������
//	//��1000_0000_0000_0000_0000_0000_0000_0001����1��
//	return 0;
//}



//sizeof�ǲ����� 
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