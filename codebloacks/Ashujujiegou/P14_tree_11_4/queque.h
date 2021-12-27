#ifndef QUEQUE_H_INCLUDED
#define QUEQUE_H_INCLUDED

#include<stdio.h>
#include<stdlib.h>//bool,malloc,free
#include<assert.h>//assert
#include <stdbool.h>

//ǰ������
struct BinaryTreeNode;

typedef struct BinaryTreeNode* QDataType;

//���е�һ�����
typedef struct QueueNode
{
    struct QueueNode *next;
    QDataType data;
}QNode;

//���е�ͷ��β
typedef struct Queue{
    QNode *head;
    QNode *tail;
}Queue;

//��ʼ��
void QueueInit(Queue *pq);
//����
void QueueDestory(Queue *pq);

//��β��x
void QueuePush(Queue *pq, QDataType x);
//��ͷ��
void QueuePop(Queue *pq);

//ȡ��ͷ
QDataType QueueFront(Queue *pq);
//ȡ��β
QDataType QueueBack(Queue *pq);

//ȡ���ݸ���
QDataType QueueSize(Queue *pq);

//�ж��Ƿ�Ϊ��
bool QueueEmpty(Queue *pq);

#endif // QUEQUE_H_INCLUDED
