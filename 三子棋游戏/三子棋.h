#define ROW 3
#define COL 3
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void InitBoard(char board[ROW][COL], int row, int col);//ͷ�ļ���������ʼ���ĺ���
void DisplayBoard(char board[ROW][COL], int row, int col);//������ʾ���̵ĺ���

void PlayerMove(char board[ROW][COL], int row, int col);
void ComputerMove(char board[ROW][COL], int row, int col);

char WhoWin(char board[ROW][COL], int row, int col);
//����˭Ӯ����������*--���ʤ������#--����ʤ������C--����������E--ƽ�֡�