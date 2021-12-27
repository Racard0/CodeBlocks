//游戏相关函数的实现

#include "game.h"

//初始化棋盘
void InitBoard(char board[ROW][COL], int row, int col)
{
    int i = 0;
    int j = 0;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            board[i][j] = ' ';
        }
    }
}

//打印棋盘的函数
void displayboard(char board[ROW][COL], int row, int col)
{
    int i = 0;
    for (i = 0; i < row; i++)
    {
        int j = 0;
        for (j = 0; j < col; j++)
        {
            printf("%c", board[i][j]);
            if (j < col - 1)
            {
                printf("|");
            }
        }
        printf("\n");
        if (i < row - 1)
        {
            int j = 0;
            for (j = 0; j < col; j++)
            {
                printf("---");
                if(j < col - 1)
                {
                    printf("|");
                }
            }
            printf("\n");
        }
    }
}

//玩家下棋
void playermove(char board[ROW][COL], int row, int col)
{
    int x = 0;
    int y = 0;

    printf("player:\n");

    while(1)
    {
        printf("坐标");
        scanf("%d%d", &x, &y);

        //判断坐标是否正确
        if (x >= 1 && x <= row && y >= 1 && y <= col)
        {
            //下棋
            //坐标是否被占用
            if (board[x-1][y-1] == ' ')
            {
                board[x-1][y-1] = '*';
                break;
            }
            else
            {
                printf("被占用，重新输入\n");

            }
        }
        else
        {
            printf("超出，重新输入\n");
        }
    }
}

//电脑下棋
void aimove(char board[ROW][COL], int row, int col)
{
    printf("AI:\n");

    while (1)
    {
        int x = rand() % row;
        int y = rand() % col;

        //判断占用
        if (board[x][y] == ' ')
        {
            board[x][y] = '#';
            break;
        }
    }
}

//返回0没慢，返回1棋盘已满
int isfull(char board[ROW][COL],int row,int col)
{
    int i = 0;
    int j = 0;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            if (board[i][j] == ' ')
            {
                return 0;//棋盘没满
            }
        }
    }
    return 1;//棋盘已满
}


//判断输赢
char iswin(char board[ROW][COL], int row, int col)
{
    int i = 0;

    //判断三行
    for (i = 0; i < row; i++)
    {
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ')
        {
            return board[i][1];
        }
    }

    //判断三列
    for (i = 0; i < col; i++)
    {
        if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[1][i] != ' ')
        {
            return board[1][i];
        }
    }

    //判断对角线
    if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
    {
        return board[1][1];
    }
    if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ')
    {
        return board[1][1];
    }

    //判断平局
    //满了返回1，不满返回0
    int ret = isfull(board, row, col);
    if (ret == 1)
    {
        return 'q';
    }

    //继续
    return 'c';

}
