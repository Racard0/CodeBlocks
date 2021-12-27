#ifndef TEST_H_INCLUDED
#define TEST_H_INCLUDED

#include<stdio.h>
#include<stdlib.h>//malloc,free

typedef int SLTDataType;
typedef struct SListNode
{
    SLTDataType data;
    struct SListNode* next;
}SLTNode;

//打印
void SListPrint(SLTNode* phead);

//尾插
//可能会改变链表的头指针，传二级指针
void SListPushBack(SLTNode** pphead, SLTDataType x);
//头插
void SListPushFront(SLTNode** pphead, SLTDataType x);

//尾删
void SListPopBack(SLTNode** pphead);
//头删
void SListPopFront(SLTNode** pphead);

//随机插入
//在pos前面插入
void SListInsert(SLTNode** pphead, SLTNode* pos, SLTDataType x);

//随即擦除
//删除pos位置的值
void SListErase(SLTNode** pphead, SLTNode* pos);

//查找
SLTNode* SListFind(SLTNode* phead, SLTDataType x);





#endif // TEST_H_INCLUDED
