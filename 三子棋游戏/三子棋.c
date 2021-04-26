#define _CRT_SECURE_NO_WARNINGS 1

#include"三子棋.h"
void InitBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';//每个元素的初始化
		}
	}

}
   //函数的实现
void DisplayBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)//当每打印一行的时候，同时打印一列，将列变化放在打印行循环之中（同时变化）
	{
		//打印一行的数据
		int j = 0;
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < col - 1)
			printf("|");
		}
		    printf("\n");
			if (i < row - 1)//打印分隔行
			{
				for (j = 0; j < col; j++)
				{
					printf("---");
					if (j < col - 1)
					printf("|");
				}//打印最后一行的判断语句
				printf("\n");
			}//printf(" %c | %c | %c  \n", board[i][0], board[i][1], board[i][2] );
	}
}

void PlayerMove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("玩家走:>\n");
	while (1)
	{printf("请输入你要落子的位置:>");
		scanf("%d%d", &x, &y);
		//判断x、y的输入是否标准
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (board[x - 1][y - 1] == ' ')//用户落棋坐标从1 1（实际坐标0 0）
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("此位置已被占用\n");
			}
		}
		else
		{
			printf("位置不合法,请重新输入!\n");
		}
	}
}
		
void ComputerMove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("电脑走:>\n");
	while (1)
	{

	      x = rand() % row;//电脑落棋产生随机横坐标数(0~row-1)
	      y = rand() % col;//产生随机纵坐标数(0~col-1)
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
				return 0;//棋盘未满，返回0
			}
		}
	}
	return 1;//棋盘已满，返回1
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
	}//判断横三行是否相同

	for (i = 0; i < col; i++)
	{
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[1][i] != ' ')
		{
			return board[0][i];
		}
	}//判断竖三列是否相同

	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ')
	{
		return board[0][0];
	}
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ')
	{
		return board[1][1];
	}//判断两个对角线

	if (1 == IfFull(board, ROW, COL))//引入判断棋盘是否填满的函数
	{
		return 'E';
	}//判断是否为平局，否则游戏继续

	return 'C';
}
	
