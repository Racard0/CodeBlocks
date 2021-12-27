#ifndef GAME_H_INCLUDED
#define GAME_H_INCLUDED



#endif // GAME_H_INCLUDED


#pragma once

//ͷ�ļ��İ���
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


//���ŵĶ���
#define ROW 3
#define COL 3

//����������

//��ʼ�����̵�
void InitBoard(char board[ROW][COL], int row, int col);

//��ӡ���̵ĺ���
void DisplayBoard(char board[ROW][COL], int row, int col);

//�������
void PlayerMove(char board[ROW][COL], int row, int col);

//��������
void ComputerMove(char board[ROW][COL], int row, int col);

//
//1. ���Ӯ�� - *
//2. ����Ӯ�� - #
//3. ƽ�� - Q
//4. ��Ϸ���� - C

//�ж���Ϸ�Ƿ�����Ӯ
char IsWin(char board[ROW][COL], int row, int col);
