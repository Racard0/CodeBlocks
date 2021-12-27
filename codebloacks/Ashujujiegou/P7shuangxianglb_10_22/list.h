#ifndef LIST_H_INCLUDED
#define LIST_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>//malloc free
#include <assert.h>//assert

//��������:
//���� ˫��
//��ͷ ��ͷ
//ѭ�� ��ѭ��

typedef int LTDataType;
typedef struct ListNode
{
    struct ListNode *next;//ָ���һ��
    struct ListNode *prev;//ָ��ǰһ��
    LTDataType data;
}ListNode;

//��ʼ��
ListNode *ListInit();
//�ͷ�
void ListDestory(ListNode *phead);
//β��
void ListPushBack(ListNode *phead, LTDataType x);
//��ӡ
void ListPrint(ListNode *phead);
//ͷ��
void ListPushFront(ListNode *phead, LTDataType x);
//ͷɾ
void ListPopFront(ListNode *phead);
//βɾ
void ListPopBack(ListNode *phead);
//����
ListNode *ListFind(ListNode *phead, LTDataType x);
//posǰ��x
void ListInsert(ListNode *pos, LTDataType x);
//ɾ��pos���ڽڵ�
void ListErase(ListNode *pos);

#endif // LIST_H_INCLUDED
