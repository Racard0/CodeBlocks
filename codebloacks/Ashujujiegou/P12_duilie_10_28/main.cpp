#include"queque.h"

//P12
//���� - �Ƚ��ȳ�
//������ʽ - ������
//������ʽ���ʺϣ���Ҫ��ͷ���ݽ���Ų��
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
