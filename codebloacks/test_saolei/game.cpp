#include"game.h"

//��ʼ������
void initboard(char board[ROWS][COLS], int rows, int cols, char set)
{
    int i = 0;
    int j = 0;
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            board[i][j] = set;
        }
    }
}

//��ӡ����
void displayboard(char board[ROWS][COLS], int row, int col)
{
    int i = 0;
    int j = 0;
    printf("-----game-----\n");

    for (i = 1; i <= row; i++)
    {
//        printf("%d ", i);
        for (j = 1; j <= col; j++)
        {
            printf("%c", board[i][j]);
        }
        printf("\n");
    }
}

//������
void setmine(char mine[ROWS][COLS], int row, int col)
{
    //����10����
    int count = 10;
    while(count)
    {
        //����������±�
        int x = rand()%row+1;//����ģ
        int y = rand()%col+1;
        if (mine[x][y] == '0')
        {
            mine[x][y] = '1';
            count--;
        }
    }
}

static int get_mine(char mine[ROWS][COLS], int x, int y)
{
    return mine[x-1][y] + mine[x-1][y-1] + mine[x][y-1] + mine[x+1][y-1] + mine[x+1][y] + mine[x+1][y+1] + mine[x][y+1] + mine[x-1][y+1] - 8*'0';
}

//�Ų���
void findmine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
    //1������Ų������
    //2��������괦�ǲ�����
    //��1������ - ը�� - game over
    //��2������ - ͳ��������Χ�м����� - �洢�Ų��׵���Ϣ��show���飬game continue

    int x = 0;
    int y = 0;
    int win = 0;

    while(win < row*col-10)
    {
        printf("Ҫ�Ų������:

               ");
        scanf("%d%d", &x, &y);//x--(1,9) y--(1,9)

        //�ж�����Ϸ���
        if (x >= 1 && x <= row && y >= 1 && y <= col)
        {
            if(mine[x][y] == '1')
            {
                printf("game over !\n");
                displayboard(mine, row, col);
                break;
            }
            else
            {
                //�����׵�����£�ͳ��x,y������Χ������
                int count = get_mine(mine, x, y);
                show[x][y] = count + '0';

                //��ʾ�Ų���Ϣ
                displayboard(show, row, col);
                win++;
            }
        }
        else
        {
            printf("warn !!!\n");
        }
    }

    if (win == row*col-10)
    {
        printf("win !!!\n");
        displayboard(mine, row, col);
    }
}
