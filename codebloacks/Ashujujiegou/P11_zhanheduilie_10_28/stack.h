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

//初始化
void StackInit(ST *ps);
//销毁
void StackDestory(ST *ps);
//入栈：插入元素x为新的栈顶
void StackPush(ST *ps, STDataType x);
//出栈：删除栈顶元素
void StackPop(ST *ps);

STDataType StackTop(ST *ps);
int StackSize(ST *ps);//栈的大小
bool StackEmpty(ST *ps);//判断栈是否为空
#endif // STACK_H_INCLUDED
