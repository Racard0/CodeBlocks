#include"test.h"

//malloc,���ٿռ�
SLTNode* BuyMalloc(SLTDataType x)
{
    SLTNode* newnode = (SLTNode*)malloc(sizeof(SLTNode));
    //malloc - ����ָ��һ����СΪsize�Ŀռ䣬
    //�������������NULL�� �洢�ռ��ָ�����Ϊ�ѣ�
    //������ջ�������Ա��Ժ���free�����ͷſռ䡣
    newnode->data = x;
    newnode->next = NULL;

    return newnode;
}

//β��
void SListPushBack(SLTNode** pphead, SLTDataType x)
{
    SLTNode* newnode = BuyMalloc(x);

    if (*pphead == NULL)
    {
        *pphead = newnode;
    }
    else
    {
        //��β�ڵ�ָ��
        SLTNode* tail = *pphead;
        while(tail->next != NULL)
        {
            tail = tail->next;
        }
        //β�ڵ������½ڵ�
        tail->next = newnode;
    }
}

//��ӡ
void SListPrint(SLTNode* phead)
{
     SLTNode* cur = phead;
     //curΪͷָ�뵱ǰλ��
     while(cur != NULL)
     {
         printf("%d->", cur->data);
         cur = cur->next;
     }
     printf("NULL\n");
}

//ͷ��
void SListPushFront(SLTNode** pphead, SLTDataType x)
{
    SLTNode* newnode = BuyMalloc(x);

    newnode->next = *pphead;
    *pphead = newnode;
}

//βɾ
void SListPopBack(SLTNode** pphead)
{
    SLTNode* prev = NULL;
    SLTNode* tail = *pphead;

    //1������Ϊ��
    if (*pphead == NULL)
    {
        return;
    }
    //2��ֻ��һ���ڵ�
    else if((*pphead)->next == NULL)
    {
        free(*pphead);
        *pphead = NULL;
    }
    //3��һ�����Ͻڵ�
    else
    {
        while(tail->next != NULL)
        {
            prev = tail;
            tail = tail->next;
        }
    }
    free(tail);
    prev->next = NULL;
    //˼�� - ����ָ�룬tail��prevָ��ǰһ��
    //��tailָ��Ϊ��ʱ��ʹprev��nextΪ��
}


//ͷɾ
void SListPopFront(SLTNode** pphead)
{
    //������һ��
    SLTNode* next = (*pphead)->next;
    free(*pphead);
    //free - �����ͷ�ָ��ptrָ��Ŀռ䣬
    //�Թ��Ժ�ʹ�á�ָ��ptr ��������ǰ��malloc(), calloc(), realloc()�ĵ��÷��ء�
    *pphead = next;

}

//����
SLTNode* SListFind(SLTNode* phead, SLTDataType x)
{
    SListNode* cur = phead;
    while(cur)//=while(cur != NULL),NULL����0Ϊ�٣��ǿ�Ϊ��
    {
        if(cur->data == x)
        {
            return cur;
        }
        cur = cur->next;
    }
    return NULL;

}

//��posǰ����x
void SListInsert(SLTNode** pphead, SLTNode* pos, SLTDataType x)
{
    SLTNode* newnode = BuyMalloc(x);

    if(pos == *pphead)//posΪ��һ���ڵ�����
    {
        //ͷ��
        SListPushFront(pphead, x);
    }
    else
    {
        SLTNode* prev = *pphead;
        while(prev->next != pos)
        {
            prev = prev->next;
        }
        prev->next = newnode;
        newnode->next = pos;
    }
}

//����
void SListErase(SLTNode** pphead, SLTNode* pos)
{
    if(pos == *pphead)//posΪ��һ���ڵ�����
    {
        //ͷɾ
        SListPopFront(pphead);
    }
    else
    {
        SLTNode* prev = *pphead;
        while(prev->next !=  pos)
        {
            prev = prev->next;
        }
        prev->next = pos->next;
        free(pos);
    }
}

