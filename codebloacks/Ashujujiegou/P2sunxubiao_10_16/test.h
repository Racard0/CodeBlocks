#ifndef TEST_H_INCLUDED
#define TEST_H_INCLUDED
#include<stdio.h>
#include<string.h>//memset
#include <stdlib.h>//malloc,realloc
#include <assert.h>//assert

#define MAX 10
typedef int SQDataType;//��������
//��̬˳��������˲����ã��������ò����˷ѣ�����������

//��ɾ��Ľӿں���
//����

//�Ķ�̬
typedef struct SeqList
{
    SQDataType *a;
    int size;    //��Ч���ݸ���
    int capacity;//����
}SL;
//�ȼ���
//typedef struct SeqList SL;

//����
void SeqListDestory(SL *psl);

//��ʼ��
void SeqListInit(SL *psl);

//��ӡ�ӿ�
void SeqListPrint(SL *psl);

//��ѯ
int SeqListFind(SL *psl, SQDataType x);

//�޸�
void SeqListModify(SL *psl, int pos, SQDataType x);



//�ص�ӿ�
//β��
void SeqListPushBack(SL *psl, SQDataType x);
//ͷ��
void SeqListPushFront(SL *psl, SQDataType x);
//βɾ
void SeqListPopBack(SL *psl);
//ͷɾ
void SeqListPopFront(SL *psl);
//�������
void SeqListInsert(SL *psl, int pos, SQDataType x);
//���ɾ��
void SeqListErase(SL *psle, int pos);

#endif // TEST_H_INCLUDED
