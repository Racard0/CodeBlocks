#ifndef TEST_H_INCLUDED
#define TEST_H_INCLUDED
#include<stdio.h>
#include<string.h>//memset
#include <stdlib.h>//malloc,realloc
#include <assert.h>//assert

#define MAX 10
typedef int SQDataType;//定义类型
//静态顺序表：给少了不够用，给多了用不完浪费，不能灵活控制

//增删查改接口函数
//定义

//改动态
typedef struct SeqList
{
    SQDataType *a;
    int size;    //有效数据个数
    int capacity;//容量
}SL;
//等价于
//typedef struct SeqList SL;

//销毁
void SeqListDestory(SL *psl);

//初始化
void SeqListInit(SL *psl);

//打印接口
void SeqListPrint(SL *psl);

//查询
int SeqListFind(SL *psl, SQDataType x);

//修改
void SeqListModify(SL *psl, int pos, SQDataType x);



//重点接口
//尾插
void SeqListPushBack(SL *psl, SQDataType x);
//头插
void SeqListPushFront(SL *psl, SQDataType x);
//尾删
void SeqListPopBack(SL *psl);
//头删
void SeqListPopFront(SL *psl);
//随机插入
void SeqListInsert(SL *psl, int pos, SQDataType x);
//随机删除
void SeqListErase(SL *psle, int pos);

#endif // TEST_H_INCLUDED
