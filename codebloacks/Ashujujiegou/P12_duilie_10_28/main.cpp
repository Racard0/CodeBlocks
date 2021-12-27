#include"queque.h"

//P12
//队列 - 先进先出
//链表形式 - 单链表
//数组形式不适合，需要对头数据进行挪动
void test1()
{
    Queue q;
    QueueInit(&q);

    QueuePush(&q, 1);
    QueuePush(&q, 2);
    QueuePush(&q, 3);
    QueuePush(&q, 4);
    QueuePush(&q, 5);

    while(!QueueEmpty(&q))
    {
        printf("%d ", QueueFront(&q));
        QueuePop(&q);
    }
    printf("\n");

    QueueDestory(&q);
}
int main()
{
    test1();
    return 0;
}
