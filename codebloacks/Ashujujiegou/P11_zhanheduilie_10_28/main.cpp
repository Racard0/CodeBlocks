#include"stack.h"

//P11
//栈 - 后进先出
//数组形式
void test1()
{
    ST st;
    StackInit(&st);
    StackPush(&st, 1);
    StackPush(&st, 2);
    StackPush(&st, 3);
    StackPush(&st, 4);
    StackPush(&st, 5);
    StackPush(&st, 6);

    while(!StackEmpty(&st))
    {
        printf("%d ", StackTop(&st));
        StackPop(&st);
    }
    printf("\n");
    StackDestory(&st);
}
int main()
{
    test1();
    return 0;
}

