#ifndef LIST_H_INCLUDED
#define LIST_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>//malloc free
#include <assert.h>//assert

//链表类型:
//单向 双向
//有头 无头
//循环 不循环

typedef int LTDataType;
typedef struct ListNode
{
    struct ListNode *next;//指向后一个
    struct ListNode *prev;//指向前一个
    LTDataType data;
}ListNode;

//初始化
ListNode *ListInit();
//释放
void ListDestory(ListNode *phead);
//尾插
void ListPushBack(ListNode *phead, LTDataType x);
//打印
void ListPrint(ListNode *phead);
//头插
void ListPushFront(ListNode *phead, LTDataType x);
//头删
void ListPopFront(ListNode *phead);
//尾删
void ListPopBack(ListNode *phead);
//查找
ListNode *ListFind(ListNode *phead, LTDataType x);
//pos前插x
void ListInsert(ListNode *pos, LTDataType x);
//删除pos所在节点
void ListErase(ListNode *pos);

#endif // LIST_H_INCLUDED
