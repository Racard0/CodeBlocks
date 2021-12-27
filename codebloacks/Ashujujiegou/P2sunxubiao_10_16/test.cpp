#include"test.h"

//��ɾ�ĺ���
//void SeqListInit(SL *psl)//ʵ��
//{
//    memset(psl->a, 0, sizeof(SQDataType)*MAX);//��ʼ��Ϊ0
//    //��������ch ��buffer ��ͷ��ʼ��count ���ַ���, ������bufferָ�롣 memset() ����Ӧ���ڽ�һ���ڴ��ʼ��Ϊĳ��ֵ�����磺
//    //memset( the_array, '\0', sizeof(the_array) );
//    //���ǽ�һ����������Է������ó���ĺܱ�ݵķ�����
//
//    psl->size = 0;
//
//
//}
//β��
//void SeqListPushBack(SL *psl, SQDataType x)
//{
//    if (psl->size >= MAX)
//    {
//        printf("���ˣ�\n");
//    }
//    psl->a[psl->size] = x;
//    psl->size++;
//}
////////////////////////////////////////////////////////////////////

//��̬

//��ɾ�ĺ���
void SeqListInit(SL *psl)//ʵ��
{
    psl->a = NULL;
    psl->size = 0;
    psl->capacity = 0;
}

//����
void SeqListCheckCapacity(SL *psl)
{
     //���˾�����,һ����������
    if (psl->size == psl->capacity)
    {
        int newcapacity = psl->capacity == 0 ? 4 : psl->capacity*2;
        SQDataType *tmp = (SQDataType*)realloc(psl->a, newcapacity*2*sizeof(SQDataType));
        //realloc - ������ptr ����Ĵ���ռ�ı�Ϊ�����Ĵ�Сsize��
        //����size�����������С�����ڻ�С��ԭ�ߴ綼���ԡ�
        //����ֵ��ָ���¿ռ��ָ�룬�������������NULL

        //���tmpΪ��(NULL)
        if (tmp == NULL)
        {
            printf("ʧ��\n");
            exit(-1);
        }
        else
        {
            psl->a = tmp;
            psl->capacity = newcapacity;
        }
    }
}

//β��
void SeqListPushBack(SL *psl, SQDataType x)
{
//    //���˾�����,һ����������
//    if (psl->size == psl->capacity)
//    {
//        int newcapacity = psl->capacity == 0 ? 4 : psl->capacity*2;
//        SQDataType *tmp = (SQDataType*)realloc(psl->a, newcapacity*2*sizeof(SQDataType));
//        //realloc - ������ptr ����Ĵ���ռ�ı�Ϊ�����Ĵ�Сsize��
//        //����size�����������С�����ڻ�С��ԭ�ߴ綼���ԡ�
//        //����ֵ��ָ���¿ռ��ָ�룬�������������NULL
//
//        //���tmpΪ��(NULL)
//        if (tmp == NULL)
//        {
//            printf("ʧ��\n");
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

    //����
//    SeqListInsert(psl, psl->size, x);
}

//��ӡ�ӿ�
void SeqListPrint(SL *psl)
{
    for (int i = 0; i < psl->size; ++i)
    {
        printf("%d ", psl->a[i]);
    }
    printf("\n");
}

//ͷ��
void SeqListPushFront(SL *psl, SQDataType x)
{
    SeqListCheckCapacity(psl);
    //���������Ҫ��
    //1����ʼ����
    //2����������
    //3����������
    int end = psl-> size-1;
    while(end >= 0)
    {
        psl->a[end+1] = psl->a[end];
        end--;
    }

    psl->a[0] = x;
    psl->size++;

    //����
//    SeqListInsert(psl, 0, x);
}

//βɾ
void SeqListPopBack(SL *psl)
{
    assert(psl->size > 0);
    //assert - ��assert()���ڴ����⡣������ʽ�Ľ��Ϊ�㣬
    //��д������Ϣ��STDERR���˳�����ִ�С������NDEBUG�Ѿ����壬��assert()�������ԡ�

//    psl->a[psl->size - 1] = 0;
    psl->size--;

    //����
//    SeqListErase(psl, psl->size - 1);
}

//ͷɾ
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

   //����
//   SeqListErase(psl, 0);
}

//�������
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
//���ɾ��
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

//����
void SeqListDestory(SL *psl)
{
    free(psl->a);
    //�����ͷ�ָ��ptrָ��Ŀռ䣬�Թ��Ժ�ʹ�á�
    //ָ��ptr ��������ǰ��malloc(), calloc(), realloc()�ĵ��÷��ء�

    psl->a = NULL;
    psl->capacity = psl->size = 0;
}

//����
int SeqListFind(SL *psl, SQDataType x)
{
    for (int i = 0; i < psl->size; ++i)
    {
        if (psl->a[i] == x)
        {
             return i;
        }
    }
    return -1;//�����0��ʼ������Ҳ���Ӧ��С��0
    //�����±�һ����������-1
}

//�޸�
void SeqListModify(SL *psl, int pos, SQDataType x)
{
    assert(pos < psl->size);
    psl->a[pos] = x;

}

