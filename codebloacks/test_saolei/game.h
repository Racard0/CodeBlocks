#ifndef GAME_H_INCLUDED
#define GAME_H_INCLUDED



#endif // GAME_H_INCLUDED
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define ROW 9
#define COL 9

#define ROWS ROW+9
#define COLS COL+9

//??ʼ??????
void initboard(char board[ROWS][COLS], int rows, int cols, char set);

//??ӡ????
void displayboard(char board[ROWS][COLS], int row, int col);

//??????
void setmine(char mine[ROWS][COLS], int row, int col);

//?Ų???
void findmine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);
