//P149
//通讯录
//1.存放1000个人的信息
//每个人的信息，名字年龄性别电话地址
//2.增加人的信息
//3.删除人的信息
//4.修改人的信息
//5.查找人的信息
//6.排序通讯录信息


//！第一次更新
//动态增长版本
//1、初始化后能存放三人信息
//2、当空间存满时，增加两个信息


//！！第二次更新
//1、当通讯录退出时，信息写到文件上
//2、当通讯录初始化时，加载文件的信息到通讯录上

#include "contact.h"

void menu()
{
    printf("---------------------------------\n");
    printf("----    1.add     2.del      ----\n");
    printf("----    3.search  4.modify   ----\n");
    printf("----    5.sort    6.print    ----\n");
    printf("----    0.exit               ----\n");
    printf("---------------------------------\n");
}

enum Option
{
    ex,
    add,
    del,
    search,
    modify,
    sort,
    print
};

int main()
{
    int input;
    Contact con;//通讯录

    //！动态情况下，给data申请一块连续的空间在堆区上，sz=0，capacity初始化为当前的最大容量
    InitContact(&con);
    do
    {
        menu();
        printf("choose:");
        scanf("%d", &input);
        switch(input)
        {
        case add:
            AddContact(&con);
            break;
        case del:
            DelContact(&con);
            break;
        case search:
            SearchContact(&con);
            break;
        case modify:
            ModifyContact(&con);
            break;
        case sort:
            break;
        case print:
            PrintContact(&con);
            break;
        case ex:
            //！！保存信息到文件
            SaveContact(&con);

            //！动态版本退出后要销毁
            DestoryContact(&con);

            printf("exit!\n");
            break;
        default:
            printf("input again!\n");
            break;
        }
    }while(input);
    return 0;
}
