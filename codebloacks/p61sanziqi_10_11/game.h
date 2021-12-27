//关于游戏相关的函数声明，符号声明头文件包含

//头文件的包含
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//符号定义
#define ROW 3
#define COL 3

//函数的声明
//初始化棋盘
void InitBoard(char board[ROW][COL], int row, int col);

//打印棋盘的函数
void displayboard(char board[ROW][COL], int row, int col);

//玩家下棋
void playermove(char board[ROW][COL], int row, int col);

//判断游戏输赢
//玩家赢了 *
//电脑赢了 #
//平局     q
//继续     c
char iswin(char board[ROW][COL], int row, int col);

//电脑下棋
void aimove(char board[ROW][COL], int row, int col);
