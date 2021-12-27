#include"queque.h"

//初始化
void QueueInit(Queue *pq)
{
    assert(pq);
    pq->head = pq->tail = NULL;
}
//销毁
void QueueDestory(Queue *pq)
{
    assert(pq);

    QNode *cur = pq->head;
    while(cur)
    {
        QNode *next = cur->next;
        free(cur);
        cur = next;
    }
    pq->tail = pq->head = NULL;
}

//入队x
void QueuePush(Queue *pq, QDataType x)
{
    assert(pq);
    QNode *newnode = (QNode*)malloc(sizeof(QNode));
    if(newnode == NULL)
    {
        printf("malloc fail\n");
        exit(-1);
    }

    newnode->data = x;
    newnode->next = NULL;

    //队列为空的情况
    if(pq->tail == NULL)
    {
        pq->head = pq->tail = newnode;
    }
    //尾的下一个指向newnode，然后把newnode赋给tail
    else
    {
        pq->tail->next = newnode;
        pq->tail = newnode;
    }
}

//出队
void QueuePop(Queue *pq)
{
    assert(pq);
    assert(pq->head);

    if(pq->head->next == NULL)//只有一个结点的情况下
    {
        free(pq->head);
        pq->head = pq->tail = NULL;
    }
    else
    {
        QNode *next = pq->head->next;
        free(pq->head);
        pq->head = next;
    }
}

//取队头
QDataType QueueFront(Queue *pq)
{
    assert(pq);
    assert(pq->head);

    return pq->head->data;
}

//取队尾
QDataType QueueBack(Queue *pq)
{
    assert(pq);
    assert(pq->head);

    return pq->tail->data;
}

//取数据个数 - 遍历
QDataType QueueSize(Queue *pq)
{
     assert(pq);
     int size = 0;
     QNode *cur = pq->head;
     while(cur)
     {
         size++;
         cur = cur->next;
     }
     return size;
}

//判断是否为空
bool QueueEmpty(Queue *pq)
{
    assert(pq);
    return pq->head == NULL;//判断是否为空
}
