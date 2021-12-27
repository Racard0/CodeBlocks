#ifndef QUEQUE_H_INCLUDED
#define QUEQUE_H_INCLUDED

#include<stdio.h>
#include<stdlib.h>//bool,malloc,free
#include<assert.h>//assert
#include <stdbool.h>

//前置声明
struct BinaryTreeNode;

typedef struct BinaryTreeNode* QDataType;

//队列的一个结点
typedef struct QueueNode
{
    struct QueueNode *next;
    QDataType data;
}QNode;

//队列的头和尾
typedef struct Queue{
    QNode *head;
    QNode *tail;
}Queue;

//初始化
void QueueInit(Queue *pq);
//销毁
void QueueDestory(Queue *pq);

//队尾入x
void QueuePush(Queue *pq, QDataType x);
//队头出
void QueuePop(Queue *pq);

//取队头
QDataType QueueFront(Queue *pq);
//取队尾
QDataType QueueBack(Queue *pq);

//取数据个数
QDataType QueueSize(Queue *pq);

//判断是否为空
bool QueueEmpty(Queue *pq);

#endif // QUEQUE_H_INCLUDED
