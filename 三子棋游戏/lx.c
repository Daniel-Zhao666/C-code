#define _CRT_SECURE_NO_WARNINGS 1


#include"������.h"

void menu()
{
	printf("##############################\n");
	printf("###### 1. play  0. exit ######\n");
	printf("##############################\n");
}//������Ϸ�˵�

void game()
{
	char ret = 0;//����һ��ret���ڽ���WhoWin���������ķ���ֵ
	//����һ���������ڴ�������е�����������Ϣ
	char board[ROW][COL] = {0};//����ͷ�ļ��С��пɼ򻯳���
	
	InitBoard(board, ROW, COL);//���Ի����̣������е�Ԫ�أ�
	DisplayBoard(board, ROW, COL );//������ʾ���̵ĺ���

	while (1)
	{
		//�������
		PlayerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//�ж�����Ƿ�Ӯ
		ret = WhoWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		//��������
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//�жϵ����Ƿ�Ӯ
		ret = WhoWin(board, ROW, COL); 
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("���Ӯ\n");
	}
	else if (ret == '#')
	{
		printf("����Ӯ\n");
	}
	else
	{
		printf("ƽ��\n");
	}
}
void test()
{
	int input = 0;
	srand((unsigned int) time(NULL));//������һ������ʱ��������
	do
	{
		menu();//�Զ�����Ϸ�˵�
		printf("��ѡ��:>");//Ϊ�û��ṩ����ѡ��
		scanf("%d", &input);//�������뺯������input��ȡ����ַ
		switch (input)//�Ƚ�������ֵ�����
		{
			case 1:
				game();/*printf("������\n");*/
				break;
			case 0:
				printf("�˳���Ϸ\n");
				break;
			default:
				printf("ѡ�����������ѡ��!!!\n");
				break;
		}
	} while (input);//������1 0 default��������ʱ�����ж�
}

int main()
{
	test();//�Զ�����Ժ�����
	return 0;
}
