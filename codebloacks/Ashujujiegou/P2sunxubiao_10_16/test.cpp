#include"test.h"

//增删改函数
//void SeqListInit(SL *psl)//实参
//{
//    memset(psl->a, 0, sizeof(SQDataType)*MAX);//初始化为0
//    //函数拷贝ch 到buffer 从头开始的count 个字符里, 并返回buffer指针。 memset() 可以应用在将一段内存初始化为某个值。例如：
//    //memset( the_array, '\0', sizeof(the_array) );
//    //这是将一个数组的所以分量设置成零的很便捷的方法。
//
//    psl->size = 0;
//
//
//}
//尾插
//void SeqListPushBack(SL *psl, SQDataType x)
//{
//    if (psl->size >= MAX)
//    {
//        printf("溢了！\n");
//    }
//    psl->a[psl->size] = x;
//    psl->size++;
//}
////////////////////////////////////////////////////////////////////

//动态

//增删改函数
void SeqListInit(SL *psl)//实参
{
    psl->a = NULL;
    psl->size = 0;
    psl->capacity = 0;
}

//增容
void SeqListCheckCapacity(SL *psl)
{
     //满了就扩容,一般是扩两倍
    if (psl->size == psl->capacity)
    {
        int newcapacity = psl->capacity == 0 ? 4 : psl->capacity*2;
        SQDataType *tmp = (SQDataType*)realloc(psl->a, newcapacity*2*sizeof(SQDataType));
        //realloc - 函数将ptr 对象的储存空间改变为给定的大小size。
        //参数size可以是任意大小，大于或小于原尺寸都可以。
        //返回值是指向新空间的指针，如果错误发生返回NULL

        //如果tmp为空(NULL)
        if (tmp == NULL)
        {
            printf("失败\n");
            exit(-1);
        }
        else
        {
            psl->a = tmp;
            psl->capacity = newcapacity;
        }
    }
}

//尾插
void SeqListPushBack(SL *psl, SQDataType x)
{
//    //满了就扩容,一般是扩两倍
//    if (psl->size == psl->capacity)
//    {
//        int newcapacity = psl->capacity == 0 ? 4 : psl->capacity*2;
//        SQDataType *tmp = (SQDataType*)realloc(psl->a, newcapacity*2*sizeof(SQDataType));
//        //realloc - 函数将ptr 对象的储存空间改变为给定的大小size。
//        //参数size可以是任意大小，大于或小于原尺寸都可以。
//        //返回值是指向新空间的指针，如果错误发生返回NULL
//
//        //如果tmp为空(NULL)
//        if (tmp == NULL)
//        {
//            printf("失败\n");
//            exit(-1);
//        }
//        else
//        {
//            psl->a = tmp;
//            psl->capacity = newcapacity;
//        }
//    }

    SeqListCheckCapacity(psl);
    psl->a[psl->size] = x;
    psl->size++;

    //复用
//    SeqListInsert(psl, psl->size, x);
}

//打印接口
void SeqListPrint(SL *psl)
{
    for (int i = 0; i < psl->size; ++i)
    {
        printf("%d ", psl->a[i]);
    }
    printf("\n");
}

//头插
void SeqListPushFront(SL *psl, SQDataType x)
{
    SeqListCheckCapacity(psl);
    //条件语句三要素
    //1、初始条件
    //2、结束条件
    //3、迭代过程
    int end = psl-> size-1;
    while(end >= 0)
    {
        psl->a[end+1] = psl->a[end];
        end--;
    }

    psl->a[0] = x;
    psl->size++;

    //复用
//    SeqListInsert(psl, 0, x);
}

//尾删
void SeqListPopBack(SL *psl)
{
    assert(psl->size > 0);
    //assert - 宏assert()用于错误检测。如果表达式的结果为零，
    //宏写错误信息到STDERR并退出程序执行。如果宏NDEBUG已经定义，宏assert()将被忽略。

//    psl->a[psl->size - 1] = 0;
    psl->size--;

    //复用
//    SeqListErase(psl, psl->size - 1);
}

//头删
void SeqListPopFront(SL *psl)
{
    assert(psl->size > 0);

   int start = 1;
   while(start < psl->size)
   {
        psl->a[start-1] = psl->a[start];
        start++;
   }
   psl->size--;

   //复用
//   SeqListErase(psl, 0);
}

//随机插入
void SeqListInsert(SL *psl, int pos, SQDataType x)
{
    assert(pos < psl->size);

    SeqListCheckCapacity(psl);

    int end = psl->size - 1;
    while(end >= pos)
    {
        psl->a[end+1] = psl->a[end];
        end--;
    }
    psl->a[pos] = x;
    psl->size++;

}
//随机删除
void SeqListErase(SL *psl, int pos)
{
    assert(pos <= psl->size);
    int start = pos + 1;
    while (start < psl->size)
    {
        psl->a[start-1] = psl->a[start];
        ++start;
    }
    psl->size--;
}

//销毁
void SeqListDestory(SL *psl)
{
    free(psl->a);
    //函数释放指针ptr指向的空间，以供以后使用。
    //指针ptr 必须由先前对malloc(), calloc(), realloc()的调用返回。

    psl->a = NULL;
    psl->capacity = psl->size = 0;
}

//查找
int SeqListFind(SL *psl, SQDataType x)
{
    for (int i = 0; i < psl->size; ++i)
    {
        if (psl->a[i] == x)
        {
             return i;
        }
    }
    return -1;//数组从0开始，如果找不到应该小于0
    //数组下标一定不可能是-1
}

//修改
void SeqListModify(SL *psl, int pos, SQDataType x)
{
    assert(pos < psl->size);
    psl->a[pos] = x;

}

