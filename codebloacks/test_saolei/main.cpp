#include"game.h"
void menu()
{
    printf("********************\n");
    printf("****** 1、paly *****\n");
    printf("****** 0、exit *****\n");
    printf("********************\n");

}
void game()
{
    char mine[ROWS][COLS] = {0};//存放布置好的雷的信息
    char show[ROWS][COLS] = {0};//存放排查出的雷的信息

    //初始化棋盘
    initboard(mine, ROWS, COLS, '0');//'0'
    initboard(show, ROWS, COLS, '*');//'*'

    //打印棋盘
    displayboard(show, ROW, COL);

    //布置雷
    setmine(mine, ROW, COL);
    //displayboard(mine, row, col);

    //排查雷
    findmine(mine, show, ROW, COL);
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
            printf("exit !!!\n");
            break;
        default:
            printf("default !!!\n");
            break;
        }


    }while(input);

    return 0;

}
