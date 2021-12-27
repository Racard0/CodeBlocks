#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED

#include<stdio.h>
#include<stdbool.h>//bool
#include<assert.h>//assert
#include<stdlib.h>//malloc,realloc,free

typedef int STDataType;

typedef struct Stack
{
    STDataType *a;
    int top;
    int capacity;
}ST;

//��ʼ��
void StackInit(ST *ps);
//����
void StackDestory(ST *ps);
//��ջ������Ԫ��xΪ�µ�ջ��
void StackPush(ST *ps, STDataType x);
//��ջ��ɾ��ջ��Ԫ��
void StackPop(ST *ps);

STDataType StackTop(ST *ps);
int StackSize(ST *ps);//ջ�Ĵ�С
bool StackEmpty(ST *ps);//�ж�ջ�Ƿ�Ϊ��
#endif // STACK_H_INCLUDED
