#define _CRT_SECURE_NO_WARNINGS 1

#include"������.h"
void InitBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';//ÿ��Ԫ�صĳ�ʼ��
		}
	}

}
   //������ʵ��
void DisplayBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)//��ÿ��ӡһ�е�ʱ��ͬʱ��ӡһ�У����б仯���ڴ�ӡ��ѭ��֮�У�ͬʱ�仯��
	{
		//��ӡһ�е�����
		int j = 0;
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < col - 1)
			printf("|");
		}
		    printf("\n");
			if (i < row - 1)//��ӡ�ָ���
			{
				for (j = 0; j < col; j++)
				{
					printf("---");
					if (j < col - 1)
					printf("|");
				}//��ӡ���һ�е��ж����
				printf("\n");
			}//printf(" %c | %c | %c  \n", board[i][0], board[i][1], board[i][2] );
	}
}

void PlayerMove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("�����:>\n");
	while (1)
	{printf("��������Ҫ���ӵ�λ��:>");
		scanf("%d%d", &x, &y);
		//�ж�x��y�������Ƿ��׼
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (board[x - 1][y - 1] == ' ')//�û����������1 1��ʵ������0 0��
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("��λ���ѱ�ռ��\n");
			}
		}
		else
		{
			printf("λ�ò��Ϸ�,����������!\n");
		}
	}
}
		
void ComputerMove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("������:>\n");
	while (1)
	{

	      x = rand() % row;//����������������������(0~row-1)
	      y = rand() % col;//���������������(0~col-1)
	      if (board[x][y] == ' ')
	      {
	      	board[x][y] = '#';
	      	break;
	      }
	}
}

int IfFull(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
			{
				return 0;//����δ��������0
			}
		}
	}
	return 1;//��������������1
}

char WhoWin(char board[ROW][COL], int row, int col)
{  
	int i = 0;
	for (i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ')
		{
			return board[i][1];
		}
	}//�жϺ������Ƿ���ͬ

	for (i = 0; i < col; i++)
	{
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[1][i] != ' ')
		{
			return board[0][i];
		}
	}//�ж��������Ƿ���ͬ

	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ')
	{
		return board[0][0];
	}
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ')
	{
		return board[1][1];
	}//�ж������Խ���

	if (1 == IfFull(board, ROW, COL))//�����ж������Ƿ������ĺ���
	{
		return 'E';
	}//�ж��Ƿ�Ϊƽ�֣�������Ϸ����

	return 'C';
}
	
