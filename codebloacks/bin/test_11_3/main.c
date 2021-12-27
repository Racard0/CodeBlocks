#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <assert.h>

typedef int QDataType;

//���еĽ��
typedef struct QueueNode
{
    struct QueueNode *next;
    QDataType data;
}QNode;

//���е�ͷβ
typedef struct Queue
{
    QNode *head;
    QNode *tail;
}Queue;

//��ʼ��
void QueueInit(Queue *pq);
//����
void QueueDestory(Queue *pq);
//���x
void QueuePush(Queue *pq, QDataType x);
//����
void QueuePop(Queue *pq);
//ȡ��ͷ
QDataType QueueFront(Queue *pq);
//ȡ��β
QDataType QueueBack(Queue *pq);
//��С
int QueueSize(Queue *pq);
//�жϿ�
bool QueueEmpty(Queue *pq);

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
void QueuePush(Queue *pq, QDataType x)//���
{
	assert(pq);
	//�¿��ڵ�
	QNode* newnode = (QNode*)malloc(sizeof(QNode));
	if (newnode == NULL)
	{
		printf("malloc fail\n");
		exit(-1);
	}
	else
	{
		newnode->data = x;
		newnode->next = NULL;
	}

	//�������Ϊ�գ�ͷ��β��ͬ
	if(pq->head == NULL)
	{
		pq->head = pq->tail = newnode;
	}
	//��ͬ����β����һ��ָ��newnode��Ȼ���newnode����tail
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
    //һ�����
    if(pq->head->next == NULL)
    {
        free(pq->head);
        pq->head = pq->tail = NULL;
    }
    //������
    else
    {
        QNode *next = pq->head->next;
        free(pq->head);
        pq->head = next;
    }
}
//��ͷ����
QDataType QueueFront(Queue *pq)
{
    assert(pq);
    assert(pq->head);
    return pq->head->data;
}
//��β����
QDataType QueueBack(Queue *pq)
{
    assert(pq);
    assert(pq->head);
    return pq->tail->data;
}
//���ݴ�С
int QueueSize(Queue *pq)
{
    assert(pq);
    int size = 0;
    QNode *cur = pq->head;
    while(cur)
    {
        ++size;
        cur = cur->next;
    }
    return size;
}
//�ж��Ƿ�Ϊ��
bool QueueEmpty(Queue *pq)
{
    assert(pq);
    return pq->head == NULL;
}

typedef struct{
    Queue q1;
    Queue q2;
}MyStack;


MyStack* myStackCreate() {
    MyStack *ps = (MyStack*)malloc(sizeof(MyStack));
    if(ps == NULL)
    {
        printf("malloc fail\n");
        exit(-1);
    }
    QueueInit(&ps->q1);
    QueueInit(&ps->q1);
    return ps;
}

void myStackPush(MyStack* obj, int x) {
    if(!QueueEmpty(&obj->q1))
    {
        QueuePush(&obj->q1, x);
    }
    else
    {
        QueuePush(&obj->q2, x);
    }
}

int myStackPop(MyStack* obj) {
    Queue *emptyQ = &obj->q1;
    Queue *nonemptyQ = &obj->q2;
    if(!QueueEmpty(&obj->q1))
    {
        emptyQ = &obj->q2;
        nonemptyQ = &obj->q1;
    }

    //������
    while(QueueSize(nonemptyQ) > 1)
    {
        QueuePush(emptyQ, QueueFront(nonemptyQ));
        QueuePop(nonemptyQ);
    }
    int top = QueueFront(nonemptyQ);
    QueuePop(nonemptyQ);
    return top;
}

int myStackTop(MyStack* obj) {
    if(!QueueEmpty(&obj->q1))
    {
        return QueueBack(&obj->q1);
    }
    else
    {
        return QueueBack(&obj->q2);
    }
}

bool myStackEmpty(MyStack* obj) {
    return QueueEmpty(&obj->q1) && QueueEmpty(&obj->q2);
}

void myStackFree(MyStack* obj) {
    QueueDestory(&obj->q1);
    QueueDestory(&obj->q2);
    free(obj);
}

void test()
{

    myStackPush(&pq,1);
    myStackPush(2);
    myStackTop(); // ���� 2
    myStackPop(); // ���� 2
    myStackEmpty(); // ���� False

}
int main()
{
    test();
    return 0;
}
