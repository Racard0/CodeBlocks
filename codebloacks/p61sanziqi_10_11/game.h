//������Ϸ��صĺ�����������������ͷ�ļ�����

//ͷ�ļ��İ���
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//���Ŷ���
#define ROW 3
#define COL 3

//����������
//��ʼ������
void InitBoard(char board[ROW][COL], int row, int col);

//��ӡ���̵ĺ���
void displayboard(char board[ROW][COL], int row, int col);

//�������
void playermove(char board[ROW][COL], int row, int col);

//�ж���Ϸ��Ӯ
//���Ӯ�� *
//����Ӯ�� #
//ƽ��     q
//����     c
char iswin(char board[ROW][COL], int row, int col);

//��������
void aimove(char board[ROW][COL], int row, int col);
