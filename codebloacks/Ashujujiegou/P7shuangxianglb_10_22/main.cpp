#include"list.h"
//P7
//˫������

void TestList1()
{
    ListNode *plist = ListInit();

    //β��
    ListPushBack(plist, 1);
    ListPushBack(plist, 2);
    ListPushBack(plist, 3);
    ListPushBack(plist, 4);
    ListPrint(plist);

    //1->2->3->4->NULL
}
void TestList2()
{
    ListNode *plist = ListInit();

    //β��
    ListPushBack(plist, 1);
    ListPushBack(plist, 2);
    ListPushBack(plist, 3);
    ListPushBack(plist, 4);

    //ͷ��
    ListPushFront(plist, 10);
    ListPrint(plist);

    //10->1->2->3->4->NULL
}
void TestList3()
{
    ListNode *plist = ListInit();

    //β��
    ListPushBack(plist, 1);
    ListPushBack(plist, 2);
    ListPushBack(plist, 3);
    ListPushBack(plist, 4);

    //ͷɾ
    ListPopFront(plist);
    //2->3->4->NULL

    //βɾ
    ListPopBack(plist);
    //2->3->NULL
    ListPrint(plist);
    printf("\n");
}
void TestList4()
{
    ListNode *plist = ListInit();

    //β��
    ListPushBack(plist, 1);
    ListPushBack(plist, 2);
    ListPushBack(plist, 3);
    ListPushBack(plist, 4);
    ListPrint(plist);
    //1->2->3->4->NULL

    //����,�����޸�����
    ListNode *pos = ListFind(plist, 3);
    if(pos)
    {
        pos->data *= 2;
        printf("find! pos*3=");
    }
    else
    {
        printf("oh on~\n");
    }
    ListPrint(plist);
    //find! pos*3=1->2->6->4->NULL
}
void TestList5()
{
    ListNode *plist = ListInit();

    //β��
    ListPushBack(plist, 1);
    ListPushBack(plist, 2);
    ListPushBack(plist, 3);
    ListPushBack(plist, 4);

    //posǰ��x
    ListNode *pos = ListFind(plist, 3);
    ListInsert(pos, 30);

    ListPrint(plist);
    //1->2->30->3->4->NULL
}
void TestList6()
{
    ListNode *plist = ListInit();

    //β��
    ListPushBack(plist, 1);
    ListPushBack(plist, 2);
    ListPushBack(plist, 3);
    ListPushBack(plist, 4);

    //ɾ��pos���ڽڵ�
    ListNode *pos = ListFind(plist, 3);
    ListErase(pos);

    ListPrint(plist);
    //1->2->4->NULL
}
void TestList7()
{
    ListNode *plist = ListInit();

    //β��
    ListPushBack(plist, 1);
    ListPushBack(plist, 2);
    ListPushBack(plist, 3);
    ListPushBack(plist, 4);

    ListDestory(plist);
    ListDestory(plist);
    ListDestory(plist);
    ListPrint(plist);
}
int main()
{
    TestList1();
    TestList2();
    TestList3();
    TestList4();
    TestList5();
    TestList6();
    TestList7();
    return 0;
}


//42min










//void levelTravers(Btree *root)
//{
//    Btree p;
//    queue q;
//    q.push(root);
//    while(! q.emty())
//    {
//        p=q.front();
//        q.pop();
//        cout<<p->data
//        if(p->lchild)
//        {
//            q.oush(p->lchild);
//        }
//        if(p->rchild)
//        {
//            q.push(p->rchild);
//        }
//    }
//}
//
//
//void preorder(Node* node)
//{
//    if (node != NULL)
//    {
//        printf("%d ",node->data);
//        inorder(node->left);
//        inorder(node->right);
//    }
//}
