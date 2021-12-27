#include <stdio.h>
#include <stdlib.h>

//P13
//ջ�Ͷ��е�leetcode��


//20.��Ч������
//����һ��ֻ���� '('��')'��'{'��'}'��'['��']' ���ַ��� s ���ж��ַ����Ƿ���Ч��
//��Ч�ַ��������㣺
//1�������ű�������ͬ���͵������űպϡ�
//2�������ű�������ȷ��˳��պϡ�
typedef char STDataType;
typedef struct Stack //ջ
{
    STDataType *a;
    int top;//ջ��
    int capacity;//����
}ST;
//��ʼ��
void StackInit(ST *ps);
//����
void StackDestory(ST *ps);
//��ջ������xΪջ��
void StackPush(ST *ps, STDataType x);
//��ջ��ɾ��ջ��Ԫ��
void StackPop(ST *ps);

STDataType StackTop(ST *ps);
int StackSize(ST *ps);//ջ�Ĵ�С
bool StackEmpty(ST *ps);//�ж�ջ�Ƿ�Ϊ��

//��ʼ��
void StackInit(ST *ps)
{
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
//��ջ
void StackPush(ST *ps, STDataType x)
{
    assert(ps);

    //��������
    if(ps->top == ps->capacity)
    {
        STDataType *tmp = (STDataType*)realloc(ps->a, ps->capacity * 2 * sizeof(STDataType));
        if(tmp == NULL)
        {
            printf("realloc fail\n");
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
//��ջ
void StackPop(ST *ps)
{
    assert(ps);
    assert(ps->top > 0);
    ps->top--;
}
//ջ�Ĵ�С
int StackSize(ST *ps)
{
    assert(ps);
    return ps->top;
}
//�ж��Ƿ�Ϊ��
bool StackEmpty(ST *ps)
{
    assert(ps);
    return ps->top == 0;
}
//ȡջ��Ԫ��
STDataType StackTop(ST *ps)
{
    assert(ps);
    assert(ps->top > 0);
    return ps->a[ps->top-1];
}
bool isValid(char * s)
{
    ST st;
    StackInit(&st);
    while(*s)
    {
        switch(*s)
        {
            case '(':
            case '[':
            case '{':
            {
                StackPush(&st, *s);
                ++s;
                break;
            }
            case ')':
            case ']':
            case '}':
            {
                if(StackEmpty(&st))
                {
                    StackDestory(&st);
                    return false;
                }

                char top = StackTop(&st);
                StackPop(&st);

                //��ƥ��
                if((*s == '}' && top != '{')
                || (*s == ')' && top != '(')
                || (*s == ']' && top != '['))
                {
                    StackDestory(&st);
                    return false;
                }
                else //ƥ��
                {
                    ++s;
                }
                break;
            }
            default:
            break;
        }
    }
    bool ret = StackEmpty(&st);
    StackDestory(&st);
    return ret;
}


//225.����������ʵ��ջ

