#define _CRT_SECURE_NO_WARNINGS 1


#include"三子棋.h"

void menu()
{
	printf("##############################\n");
	printf("###### 1. play  0. exit ######\n");
	printf("##############################\n");
}//生成游戏菜单

void game()
{
	char ret = 0;//定义一个ret用于接收WhoWin函数产生的返回值
	//定义一个数组用于存放棋盘中的所包含的信息
	char board[ROW][COL] = {0};//引用头文件行、列可简化程序
	
	InitBoard(board, ROW, COL);//初试化棋盘（棋盘中的元素）
	DisplayBoard(board, ROW, COL );//定义显示棋盘的函数

	while (1)
	{
		//玩家下棋
		PlayerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//判断玩家是否赢
		ret = WhoWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		//电脑下棋
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//判断电脑是否赢
		ret = WhoWin(board, ROW, COL); 
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("玩家赢\n");
	}
	else if (ret == '#')
	{
		printf("电脑赢\n");
	}
	else
	{
		printf("平局\n");
	}
}
void test()
{
	int input = 0;
	srand((unsigned int) time(NULL));//仅调用一次生成时间戳的起点
	do
	{
		menu();//自定义游戏菜单
		printf("请选择:>");//为用户提供输入选择
		scanf("%d", &input);//引用输入函数，从input中取出地址
		switch (input)//比较上输入值的情况
		{
			case 1:
				game();/*printf("三子棋\n");*/
				break;
			case 0:
				printf("退出游戏\n");
				break;
			default:
				printf("选择出错，请重新选择!!!\n");
				break;
		}
	} while (input);//当出现1 0 default以外的情况时进行判断
}

int main()
{
	test();//自定义测试函数名
	return 0;
}
