//测试游戏逻辑

//P61
//三子棋1
//数组作为函数传参的时候：
//形参可以写成两种形式：
//1、数组形式
//2、指针形式

#include "game.h"
void menu()
{
    printf("**********************\n");
    printf("******* 1、play ******\n");
    printf("******* 0、exit ******\n");
    printf("**********************\n");
}
void game()
{
    //存储数据 - 二维数组
    char board[ROW][COL];
    //初始化棋盘 - 初始化空格
    InitBoard(board, ROW, COL);

    //打印棋盘，本质是打印数组内容
    displayboard(board, ROW, COL);

    //接受游戏状态
    char ret = 0;
    while(1)
    {
        //玩家下棋
        playermove(board, ROW, COL);
        displayboard(board, ROW, COL);

        //判断玩家是否赢得游戏
        ret = iswin(board, ROW ,COL);
        if (ret != 'c')
        {
            break;
        }

        //电脑下棋
        aimove(board, ROW, COL);
        displayboard(board, ROW, COL);

        //判断电脑是否赢得比赛
        ret = iswin(board, ROW, COL);
        if (ret != 'c')
        {
            break;
        }
    }

    if (ret == '*')
    {
        printf("player win !\n");
    }
    else if (ret == '#')
    {
        printf("ai win !\n");
    }
    else
    {
        printf("all win !\n");
    }
    displayboard(board, ROW, COL);
}
int main()
{
    int input = 0;
    srand((unsigned int)time(NULL));

    do
    {
        menu();
        printf("choose:");
        scanf("%d", &input);
        switch(input)
        {
        case 1:
            game();
            break;
        case 0:
            printf("exit\n");
            break;
        default:
            printf("重新输入\n");
            break;
        }

    }while(input);
    return 0;
}
