#define ROW 3
#define COL 3
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void InitBoard(char board[ROW][COL], int row, int col);//头文件中声明初始化的函数
void DisplayBoard(char board[ROW][COL], int row, int col);//声明显示棋盘的函数

void PlayerMove(char board[ROW][COL], int row, int col);
void ComputerMove(char board[ROW][COL], int row, int col);

char WhoWin(char board[ROW][COL], int row, int col);
//声明谁赢函数“返回*--玩家胜，返回#--电脑胜，返回C--继续，返回E--平局”