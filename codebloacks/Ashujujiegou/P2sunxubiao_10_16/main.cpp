#include"test.h"

//P2顺序表

void TestSeqList1()
{
    SL sl;
    SeqListInit(&sl);//sl为形参
    SeqListPushBack(&sl, 1);
    SeqListPushBack(&sl, 2);
    SeqListPushBack(&sl, 3);
    SeqListPushBack(&sl, 4);
    SeqListPushBack(&sl, 5);
    SeqListPushBack(&sl, 6);
    SeqListPushBack(&sl, 7);
    SeqListPushBack(&sl, 8);
    SeqListPushBack(&sl, 9);
    SeqListPushBack(&sl, 10);
    SeqListPushBack(&sl, 11);
    SeqListPushBack(&sl, 12);
    SeqListPushBack(&sl, 13);
    SeqListPushBack(&sl, 14);
    SeqListPushBack(&sl, 15);
    SeqListPushBack(&sl, 16);
    SeqListPushBack(&sl, 17);

    SeqListPrint(&sl);
}

void TestSeqList2()
{
    SL sl;
    SeqListInit(&sl);//sl为形参
    SeqListPushFront(&sl, 1);
    SeqListPushFront(&sl, 2);
    SeqListPushFront(&sl, 3);
    SeqListPushFront(&sl, 4);
    SeqListPushFront(&sl, 5);
    SeqListPushFront(&sl, 6);
    SeqListPushFront(&sl, 7);

    SeqListPopBack(&sl);
    SeqListPopBack(&sl);
    SeqListPopBack(&sl);

    SeqListPopFront(&sl);


    SeqListPrint(&sl);
}

void TestSeqList3()
{
    SL sl;
    SeqListInit(&sl);//sl为形参
    SeqListPushBack(&sl, 1);
    SeqListPushBack(&sl, 2);
    SeqListPushBack(&sl, 3);
    SeqListPushBack(&sl, 4);
    SeqListPushBack(&sl, 5);
    SeqListPushBack(&sl, 6);

    SeqListInsert(&sl, 3, 20);

    SeqListErase(&sl, 0);

    SeqListPrint(&sl);

    SeqListDestory(&sl);//释放内存
}

int main()
{
    TestSeqList1();
    TestSeqList2();
    TestSeqList3();
    return 0;
}
