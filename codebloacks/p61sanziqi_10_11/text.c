//������Ϸ�߼�

//P61
//������1
//������Ϊ�������ε�ʱ��
//�βο���д��������ʽ��
//1��������ʽ
//2��ָ����ʽ

#include "game.h"
void menu()
{
    printf("**********************\n");
    printf("******* 1��play ******\n");
    printf("******* 0��exit ******\n");
    printf("**********************\n");
}
void game()
{
    //�洢���� - ��ά����
    char board[ROW][COL];
    //��ʼ������ - ��ʼ���ո�
    InitBoard(board, ROW, COL);

    //��ӡ���̣������Ǵ�ӡ��������
    displayboard(board, ROW, COL);

    //������Ϸ״̬
    char ret = 0;
    while(1)
    {
        //�������
        playermove(board, ROW, COL);
        displayboard(board, ROW, COL);

        //�ж�����Ƿ�Ӯ����Ϸ
        ret = iswin(board, ROW ,COL);
        if (ret != 'c')
        {
            break;
        }

        //��������
        aimove(board, ROW, COL);
        displayboard(board, ROW, COL);

        //�жϵ����Ƿ�Ӯ�ñ���
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
            printf("��������\n");
            break;
        }

    }while(input);
    return 0;
}
