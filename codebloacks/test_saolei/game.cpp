#include"game.h"

//初始化棋盘
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

//打印棋盘
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

//布置雷
void setmine(char mine[ROWS][COLS], int row, int col)
{
    //布置10个雷
    int count = 10;
    while(count)
    {
        //生产随机的下标
        int x = rand()%row+1;//产出模
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

//排查雷
void findmine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
    //1、检查排查的坐标
    //2、检查坐标处是不是雷
    //（1）是雷 - 炸死 - game over
    //（2）不是 - 统计坐标周围有几个雷 - 存储排查雷的信息到show数组，game continue

    int x = 0;
    int y = 0;
    int win = 0;

    while(win < row*col-10)
    {
        printf("要排查的坐标:

               ");
        scanf("%d%d", &x, &y);//x--(1,9) y--(1,9)

        //判断坐标合法性
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
                //不是雷的情况下，统计x,y坐标周围几个雷
                int count = get_mine(mine, x, y);
                show[x][y] = count + '0';

                //显示排查信息
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
