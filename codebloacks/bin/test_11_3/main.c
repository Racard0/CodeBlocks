#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <assert.h>

typedef int QDataType;

//队列的结点
typedef struct QueueNode
{
    struct QueueNode *next;
    QDataType data;
}QNode;

//队列的头尾
typedef struct Queue
{
    QNode *head;
    QNode *tail;
}Queue;

//初始化
void QueueInit(Queue *pq);
//销毁
void QueueDestory(Queue *pq);
//入队x
void QueuePush(Queue *pq, QDataType x);
//出队
void QueuePop(Queue *pq);
//取队头
QDataType QueueFront(Queue *pq);
//取队尾
QDataType QueueBack(Queue *pq);
//大小
int QueueSize(Queue *pq);
//判断空
bool QueueEmpty(Queue *pq);

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
void QueuePush(Queue *pq, QDataType x)//入队
{
	assert(pq);
	//新开节点
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

	//如果队列为空，头和尾相同
	if(pq->head == NULL)
	{
		pq->head = pq->tail = newnode;
	}
	//不同，则将尾的下一个指向newnode，然后把newnode赋给tail
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
    //一个结点
    if(pq->head->next == NULL)
    {
        free(pq->head);
        pq->head = pq->tail = NULL;
    }
    //多个结点
    else
    {
        QNode *next = pq->head->next;
        free(pq->head);
        pq->head = next;
    }
}
//队头数据
QDataType QueueFront(Queue *pq)
{
    assert(pq);
    assert(pq->head);
    return pq->head->data;
}
//队尾数据
QDataType QueueBack(Queue *pq)
{
    assert(pq);
    assert(pq->head);
    return pq->tail->data;
}
//数据大小
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
//判断是否为空
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

    //倒数据
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
    myStackTop(); // 返回 2
    myStackPop(); // 返回 2
    myStackEmpty(); // 返回 False

}
int main()
{
    test();
    return 0;
}
