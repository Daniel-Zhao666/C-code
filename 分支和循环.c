#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main()
{
	int ch = 0;
	while ((ch=getchar()) != EOF)//EOF--end of file����д�����ļ�������ʶ��
	{

		putchar(ch);
	}
	return 0;
}

 /*int main()
{
	int ch = getchar();
	putchar(ch);
	printf("%c\n",ch);
	return 0;
}*/


//int main()
//{
//	int j = 1;
//
//	while (j <= 10)
//	{   
//		
//		if (j == 6)
//			/*break;*/
//			continue;
//		printf("%d\n", j);
//		j++;
//	}
//	//whileѭ���е�break������������ֹѭ������ֱ����ֹ��continue--��ֹ�ڲ�ѭ������ת���ж�����н��У�
//	//���Ĵ��벻��ִ�С�
//}


//int main()
//{
//	int n = 1;
//	int m = 2;
//	switch (n)
//	{
//	case 1: m++;
//	case 2: n++;
//	case 3:
//		switch (n)//����switchǶ��ʹ��
//		{
//		case 1: n++;
//		case 2: m++; n++; break;
//		}
//	case 4: m++;
//		break;
//	}
//	printf("m = %d , n = %d", m, n);
//	return 0;
//}

// int main()
//
//{
//	int day = 0;
//	scanf("%d ", &day);
//	switch (day)//switch����еı���ӦΪ����--int 
//	{
//	 case 1:
//	 	printf("����һ\n");
//		break;//case֮���break���Բ����У�case�ڵ������ͬʱ����������һ��break����
//	 case 2:
//	 	printf("���ڶ�\n");
//		break;
//	 case 3://case����еı���Ϊ���͵ĳ������ʽ
//	 	printf("������\n");
//		break;//����switch���
//	 case 4:
//	 	printf("������\n");
//		break;
//	 case 5:
//	 	printf("������\n");
//		break;
//	 case 6:
//	 	printf("������\n");
//		break;
//	 case 7:
//		printf("������\n");
//		break;
//	 default:
//		printf("�����\n");
//		break;
//	}
//	
//	return 0;
//}//switch -- case ��䣨������䣩


//int main()
//
//{
//	int j = 0;
//	/*while (j <= 100)
//	{
//		printf("%d ",j);
//		j+=2;
//
//	}*/
//
//	while (j <= 100)
//	{
//		if (j%2 == 0)
//			printf("%d ",j);
//		j++;
//	}
//	return 0;
//}//��ż��


//int main()
//
//{
//	int num = 1;
//	if (3 == num)//��=����ֵ��䣬�����жϣ�==����䣬�����ܹ������Ϊ��������룬���������������Ƚϴ�Сʱ���ã���������ǰ,�������ں����ʽ
//	{
//		printf("hello\n");
//	}
//	else
//		printf("world\n");
//	return 0;
//}


//int main()
//{
//	int a = 1;
//	int b = 2;
//	if (a == 1)
//	{
//		if (b == 3)
//			printf("hello\n");
//		else
//			printf("hi\n");//else�;������Լ��������δƥ���if����ƥ�䣬����һ�����������
//	}
//	return 0;
//}

//int main()
//{
//
//	int age = 80;
//	if (age < 18)
//		printf("age = ������\n", age);
//
//
//	else {
//		   if (18 <= age && age < 30)//�ж�����У������߼���ϵ������ִ�д��룬��������ѧ�����
//			printf("age = ����\n", age);//ͬ��һ���ж�����У�������ڶ��ִ�г�����ô��Ҫ�ô����--��{}��
//		   else if (30 <= age && age < 50)
//			printf("age = ���� \n", age);
//		   else if (50 <= age && age < 70)
//			printf("age = ����\n", age);
//		   else
//			printf("age = ���֮��\n", age);
//	}//�ֳ�2���߼�����д����

	//else if (18 <= age && age < 30)//�ж�����У������߼���ϵ������ִ�д��룬��������ѧ�����
	//	printf("age = ����\n", age);
	//else if (30 <= age && age < 50)
	//	printf("age = ���� \n", age);
	//else if (50 <= age && age < 70)
	//	printf("age = ����\n", age);
	//else
	//	printf("age = ���֮��\n",age);
//	return 0;
//}