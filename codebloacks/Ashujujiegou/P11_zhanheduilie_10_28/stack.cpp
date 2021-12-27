#include"stack.h"

//��ʼ��
void StackInit(ST *ps)
{
    //��ʼtopΪ0����ζ��topָ��ջ��Ԫ�ص���һ��
    //��ʼtopΪ-1����ζ��topָ��ջ��Ԫ��

    assert(ps);
    ps->a = (STDataType*)malloc(sizeof(STDataType) * 4);
    ps->capacity = 4;
    ps->top = 0;
}

//����
void StackDestory(ST *ps)
{
    assert(ps);
    free(ps->a);
    ps->a = NULL;
    ps->top = ps->capacity = 0;
}

//��ջ������Ԫ��xΪ�µ�ջ��
void StackPush(ST *ps, STDataType x)
{
    assert(ps);

    //���˾�����
    if(ps->top == ps->capacity)
    {
        STDataType *tmp = (STDataType*)realloc(ps->a, ps->capacity * 2 *sizeof(STDataType));
        if(tmp == NULL)
        {
            printf("reallco fail\n");
            exit(-1);
        }
        else
        {
            ps->a = tmp;
            ps->capacity *= 2;
        }
    }

    ps->a[ps->top] = x;
    ps->top++;
}

//��ջ��ɾ��ջ��Ԫ��
void StackPop(ST *ps)
{
    assert(ps);
    assert(ps->top > 0);//ջ��ʱֱ����ֹ
    ps->top--;
}

//����ջ��Ԫ��
STDataType StackTop(ST *ps)
{
    assert(ps);
    assert(ps->top > 0);

    return ps->a[ps->top-1];
}

int StackSize(ST *ps)
{
    assert(ps);

    return ps->top;
}

bool StackEmpty(ST *ps)
{
    assert(ps);

    return ps->top == 0;
}
