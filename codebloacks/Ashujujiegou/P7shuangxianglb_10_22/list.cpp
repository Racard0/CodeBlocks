#include"list.h"

ListNode *BuyListNode(LTDataType x)
{
    //动态分配内存空间
    ListNode *newnode = (ListNode*)malloc(sizeof(ListNode));
    newnode->data = x;
    newnode->next = NULL;
    newnode->prev = NULL;
    return newnode;
}

//初始化
ListNode *ListInit()//指向头节点
{
    ListNode *phead = BuyListNode(0);
    phead->next = phead;
    phead->prev = phead;
    return phead;
}

//毁灭
void ListDestory(ListNode *phead)
{
    assert(phead);
    ListNode *cur = phead->next;
    while(cur != phead)
    {
        ListNode *next = cur->next;
        free(cur);
        cur = next;
    }
    free(phead);
    phead = NULL;
}

//尾插
void ListPushBack(ListNode *phead, LTDataType x)
{
    assert(phead);//断言

//    ListNode *tail = phead->prev;
//    ListNode *newnode = BuyListNode(x);
//
//    tail->next = newnode;
//    newnode->prev = tail;
//    newnode->next = phead;
//    phead->prev = newnode;

    //复用
    ListInsert(phead, x);
}

//打印
void ListPrint(ListNode *phead)
{
    ListNode *cur = phead->next;
    while(cur != phead)
    {
        printf("%d->", cur->data);
        cur = cur->next;
    }
    printf("NULL\n");
}

//头插
void ListPushFront(ListNode *phead, LTDataType x)
{
    assert(phead);
//    ListNode *first = phead->next;
//    ListNode *newnode = BuyListNode(x);
//
//    //phead newnode next
//    phead->next = newnode;
//    newnode->prev = phead;
//    newnode->next = first;
//    first->prev = newnode;

    //复用
    ListInsert(phead->next, x);
}

//头删
void ListPopFront(ListNode *phead)
{
    assert(phead);
    assert(phead->next != phead);

    ListNode *first = phead->next;
    ListNode *second = first->next;
    phead->next = second;
    second->prev = phead;

    //置空
    free(first);
    first = NULL;

    //复用
//    ListErase(phead->next);
}

//尾删
void ListPopBack(ListNode *phead)
{
    assert(phead);
    assert(phead->next != phead);

    ListNode *tail = phead->prev;
    ListNode *prev = tail->prev;
    prev->next = phead;
    phead->prev = prev;

    free(tail);
    tail = NULL;

    //复用
//    ListErase(phead->prev);
}

//查找
ListNode *ListFind(ListNode *phead, LTDataType x)
{
    assert(phead);
    ListNode *cur = phead->next;
    while(cur != phead)
    {
        if(cur->data == x)
        {
            return cur;
        }
        cur = cur->next;
    }
    return NULL;
}

//在pos前插x
void ListInsert(ListNode *pos, LTDataType x)
{
    assert(pos);
    ListNode *prev = pos->prev;
    ListNode *newnode = BuyListNode(x);

    //prev newnode pos
    prev->next = newnode;
    pos->prev = newnode;
    newnode->prev = prev;
    newnode->next = pos;
}

//pos前删
void ListErase(ListNode *pos)
{
    assert(pos);
    ListNode *prev = pos->prev;
    ListNode *next = pos->next;

    //prev pos next
    prev->next = pos->next;
    next->prev = pos->prev;

    free(pos);
    pos = NULL;
}
