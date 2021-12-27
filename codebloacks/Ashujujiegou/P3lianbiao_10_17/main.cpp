#include"test.h"
//P5����
//�ռ��ϰ��蹩Ӧ
//��Ҫ������ռ�������ͷ�����м�Ĳ��벻��ҪŲ������

//������
void TestList1()
{
    SLTNode* plist = NULL;
    //plist/phead - ͷָ��

    //�βεĸı䲻�ı�ʵ��
    //β��
    SListPushBack(&plist, 1);
    SListPushBack(&plist, 2);
    SListPushBack(&plist, 3);
    SListPushBack(&plist, 4);

    //ͷ��
    SListPushFront(&plist , 10);
    //10->1->2->3->4->NULL
    //��ӡ
    SListPrint(plist);

}
void TestList2()
{
    SLTNode* plist = NULL;

    SListPushBack(&plist, 1);
    SListPushBack(&plist, 2);
    SListPushBack(&plist, 3);
    SListPushBack(&plist, 4);

    //ͷɾ
    SListPopFront(&plist);
    SListPopFront(&plist);
    //3->4->NULL

    //��ӡ
    SListPrint(plist);
}
void TestList3()
{
    SLTNode* plist = NULL;

    SListPushBack(&plist, 1);
    SListPushBack(&plist, 2);
    SListPushBack(&plist, 3);
    SListPushBack(&plist, 4);

    //βɾ
    SListPopBack(&plist);
    SListPopBack(&plist);
    //1->2->NULL

    //��ӡ
    SListPrint(plist);
}
void TestList4()
{
    SLTNode* plist = NULL;
    SListPushBack(&plist, 1);
    SListPushBack(&plist, 2);
    SListPushBack(&plist, 3);
    SListPushBack(&plist, 4);

    //����,����  - 3ǰ�����30
    SLTNode* pos = SListFind(plist, 3);
    if(pos)
    {
        SListInsert(&plist, pos, 30);
        //1->2->30->3->4->NULL
    }

    //1ǰ����10
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

    //����
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

    //��ӡ
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
