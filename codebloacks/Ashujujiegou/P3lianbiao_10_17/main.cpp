#include"test.h"
//P5链表
//空间上按需供应
//不要求物理空间连续，头部和中间的插入不需要挪动数据

//单链表
void TestList1()
{
    SLTNode* plist = NULL;
    //plist/phead - 头指针

    //形参的改变不改变实参
    //尾插
    SListPushBack(&plist, 1);
    SListPushBack(&plist, 2);
    SListPushBack(&plist, 3);
    SListPushBack(&plist, 4);

    //头插
    SListPushFront(&plist , 10);
    //10->1->2->3->4->NULL
    //打印
    SListPrint(plist);

}
void TestList2()
{
    SLTNode* plist = NULL;

    SListPushBack(&plist, 1);
    SListPushBack(&plist, 2);
    SListPushBack(&plist, 3);
    SListPushBack(&plist, 4);

    //头删
    SListPopFront(&plist);
    SListPopFront(&plist);
    //3->4->NULL

    //打印
    SListPrint(plist);
}
void TestList3()
{
    SLTNode* plist = NULL;

    SListPushBack(&plist, 1);
    SListPushBack(&plist, 2);
    SListPushBack(&plist, 3);
    SListPushBack(&plist, 4);

    //尾删
    SListPopBack(&plist);
    SListPopBack(&plist);
    //1->2->NULL

    //打印
    SListPrint(plist);
}
void TestList4()
{
    SLTNode* plist = NULL;
    SListPushBack(&plist, 1);
    SListPushBack(&plist, 2);
    SListPushBack(&plist, 3);
    SListPushBack(&plist, 4);

    //查找,插入  - 3前面插入30
    SLTNode* pos = SListFind(plist, 3);
    if(pos)
    {
        SListInsert(&plist, pos, 30);
        //1->2->30->3->4->NULL
    }

    //1前插入10
    pos = SListFind(plist, 1);
    if(pos)
    {
        SListInsert(&plist, pos, 10);
        //10->1->2->30->3->4->NULL
    }



    SListPrint(plist);
}
void TestList5()
{
    SLTNode* plist = NULL;

    SListPushBack(&plist, 1);
    SListPushBack(&plist, 2);
    SListPushBack(&plist, 3);
    SListPushBack(&plist, 4);

    //擦除
    SLTNode* pos = SListFind(plist, 3);
    if(pos)
    {
        SListErase(&plist, pos);
        //1->2->4->NULL
    }
    pos = SListFind(plist, 1);
    if(pos)
    {
        SListErase(&plist, pos);
        //2->4->NULL
    }
    pos = SListFind(plist, 2);
    if(pos)
    {
        SListErase(&plist, pos);
        //4->NULL
    }
    pos = SListFind(plist, 4);
    if(pos)
    {
        SListErase(&plist, pos);
        //NULL
    }

    //打印
    SListPrint(plist);
}

int main()
{
    TestList1();
    TestList2();
    TestList3();
    TestList4();
    TestList5();
    return 0;
}













//int f(char x[], int n)
//{
//    char op[6] = {'+', '*', '(', ')','-', '/'};
//    int i = 0;
//    char op1, op2;
//    char c;
//    while((c = x[i++]) != '#')
//    {
//        if(!in(op, 6, c))
//        {
//            push_(stack, (int)c-(int)'0');
//        }
//        else if(in(op, 6, c));
//        {
//            int op1 = pop_(stack);
//            int op2 = pop_(stack);
//            int tmp;
//            if(c == '+')
//            {
//                tmp = op1+op2;
//            }
//            if(c == '*')
//            {
//                tmp = op1*op2;
//            }
//            if(c == '-')
//            {
//                tmp = op1-op2;
//            }
//            if(c == '/')
//            {
//                tmp = op1/op2;
//            }
//            push_(stack, tmp);
//        }
//    }
//}

//#define MAX 256
//void levelTraverse(BiTNode * root)
//{
//    BiTNode queue[MAX];
//    int rear = 0,front = 0;
//    BiTNode p = root ;
//    if(p!=NULL)
//        {
//            queue[rear] = p;
//            rear=(rear+1)%MAX;
//            while(rear != front)
//            {
//                p =queue[front];
//                visit(queue[front]);
//                front =(front+1)%MAX;
//                if(p->Lchild!=NULL)
//                {
//                    queue[rear]=p->Lchild;
//                    rear =(rear+1)%MAX;
//                }
//            if(p->Rchild!=NULL)
//            {
//                queue[rear]=p->Rchild;
//                rear =(rear+1)%MAX;
//            }
//        }
//    }
//}
