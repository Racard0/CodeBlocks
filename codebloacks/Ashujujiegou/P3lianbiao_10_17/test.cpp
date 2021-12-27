#include"test.h"

//malloc,开辟空间
SLTNode* BuyMalloc(SLTDataType x)
{
    SLTNode* newnode = (SLTNode*)malloc(sizeof(SLTNode));
    //malloc - 函数指向一个大小为size的空间，
    //如果错误发生返回NULL。 存储空间的指针必须为堆，
    //不能是栈。这样以便以后用free函数释放空间。
    newnode->data = x;
    newnode->next = NULL;

    return newnode;
}

//尾插
void SListPushBack(SLTNode** pphead, SLTDataType x)
{
    SLTNode* newnode = BuyMalloc(x);

    if (*pphead == NULL)
    {
        *pphead = newnode;
    }
    else
    {
        //找尾节点指针
        SLTNode* tail = *pphead;
        while(tail->next != NULL)
        {
            tail = tail->next;
        }
        //尾节点链接新节点
        tail->next = newnode;
    }
}

//打印
void SListPrint(SLTNode* phead)
{
     SLTNode* cur = phead;
     //cur为头指针当前位置
     while(cur != NULL)
     {
         printf("%d->", cur->data);
         cur = cur->next;
     }
     printf("NULL\n");
}

//头插
void SListPushFront(SLTNode** pphead, SLTDataType x)
{
    SLTNode* newnode = BuyMalloc(x);

    newnode->next = *pphead;
    *pphead = newnode;
}

//尾删
void SListPopBack(SLTNode** pphead)
{
    SLTNode* prev = NULL;
    SLTNode* tail = *pphead;

    //1、链表为空
    if (*pphead == NULL)
    {
        return;
    }
    //2、只有一个节点
    else if((*pphead)->next == NULL)
    {
        free(*pphead);
        *pphead = NULL;
    }
    //3、一个以上节点
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
    //思想 - 两个指针，tail比prev指向前一个
    //当tail指向为空时，使prev的next为空
}


//头删
void SListPopFront(SLTNode** pphead)
{
    //保存下一个
    SLTNode* next = (*pphead)->next;
    free(*pphead);
    //free - 函数释放指针ptr指向的空间，
    //以供以后使用。指针ptr 必须由先前对malloc(), calloc(), realloc()的调用返回。
    *pphead = next;

}

//查找
SLTNode* SListFind(SLTNode* phead, SLTDataType x)
{
    SListNode* cur = phead;
    while(cur)//=while(cur != NULL),NULL返回0为假，非空为真
    {
        if(cur->data == x)
        {
            return cur;
        }
        cur = cur->next;
    }
    return NULL;

}

//在pos前插入x
void SListInsert(SLTNode** pphead, SLTNode* pos, SLTDataType x)
{
    SLTNode* newnode = BuyMalloc(x);

    if(pos == *pphead)//pos为第一个节点的情况
    {
        //头插
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

//擦除
void SListErase(SLTNode** pphead, SLTNode* pos)
{
    if(pos == *pphead)//pos为第一个节点的情况
    {
        //头删
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

