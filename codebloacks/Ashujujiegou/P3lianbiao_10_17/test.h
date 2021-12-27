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

//��ӡ
void SListPrint(SLTNode* phead);

//β��
//���ܻ�ı������ͷָ�룬������ָ��
void SListPushBack(SLTNode** pphead, SLTDataType x);
//ͷ��
void SListPushFront(SLTNode** pphead, SLTDataType x);

//βɾ
void SListPopBack(SLTNode** pphead);
//ͷɾ
void SListPopFront(SLTNode** pphead);

//�������
//��posǰ�����
void SListInsert(SLTNode** pphead, SLTNode* pos, SLTDataType x);

//�漴����
//ɾ��posλ�õ�ֵ
void SListErase(SLTNode** pphead, SLTNode* pos);

//����
SLTNode* SListFind(SLTNode* phead, SLTDataType x);





#endif // TEST_H_INCLUDED
