#include"queque.h"

//��ʼ��
void QueueInit(Queue *pq)
{
    assert(pq);
    pq->head = pq->tail = NULL;
}
//����
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

//���x
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

    //����Ϊ�յ����
    if(pq->tail == NULL)
    {
        pq->head = pq->tail = newnode;
    }
    //β����һ��ָ��newnode��Ȼ���newnode����tail
    else
    {
        pq->tail->next = newnode;
        pq->tail = newnode;
    }
}

//����
void QueuePop(Queue *pq)
{
    assert(pq);
    assert(pq->head);

    if(pq->head->next == NULL)//ֻ��һ�����������
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

//ȡ��ͷ
QDataType QueueFront(Queue *pq)
{
    assert(pq);
    assert(pq->head);

    return pq->head->data;
}

//ȡ��β
QDataType QueueBack(Queue *pq)
{
    assert(pq);
    assert(pq->head);

    return pq->tail->data;
}

//ȡ���ݸ��� - ����
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

//�ж��Ƿ�Ϊ��
bool QueueEmpty(Queue *pq)
{
    assert(pq);
    return pq->head == NULL;//�ж��Ƿ�Ϊ��
}
