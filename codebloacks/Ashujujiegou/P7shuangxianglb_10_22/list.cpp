#include"list.h"

ListNode *BuyListNode(LTDataType x)
{
    //��̬�����ڴ�ռ�
    ListNode *newnode = (ListNode*)malloc(sizeof(ListNode));
    newnode->data = x;
    newnode->next = NULL;
    newnode->prev = NULL;
    return newnode;
}

//��ʼ��
ListNode *ListInit()//ָ��ͷ�ڵ�
{
    ListNode *phead = BuyListNode(0);
    phead->next = phead;
    phead->prev = phead;
    return phead;
}

//����
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

//β��
void ListPushBack(ListNode *phead, LTDataType x)
{
    assert(phead);//����

//    ListNode *tail = phead->prev;
//    ListNode *newnode = BuyListNode(x);
//
//    tail->next = newnode;
//    newnode->prev = tail;
//    newnode->next = phead;
//    phead->prev = newnode;

    //����
    ListInsert(phead, x);
}

//��ӡ
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

//ͷ��
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

    //����
    ListInsert(phead->next, x);
}

//ͷɾ
void ListPopFront(ListNode *phead)
{
    assert(phead);
    assert(phead->next != phead);

    ListNode *first = phead->next;
    ListNode *second = first->next;
    phead->next = second;
    second->prev = phead;

    //�ÿ�
    free(first);
    first = NULL;

    //����
//    ListErase(phead->next);
}

//βɾ
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

    //����
//    ListErase(phead->prev);
}

//����
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

//��posǰ��x
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

//posǰɾ
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
