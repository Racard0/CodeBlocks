#include"stack.h"

//初始化
void StackInit(ST *ps)
{
    //初始top为0，意味着top指向栈顶元素的下一个
    //初始top为-1，意味着top指向栈顶元素

    assert(ps);
    ps->a = (STDataType*)malloc(sizeof(STDataType) * 4);
    ps->capacity = 4;
    ps->top = 0;
}

//销毁
void StackDestory(ST *ps)
{
    assert(ps);
    free(ps->a);
    ps->a = NULL;
    ps->top = ps->capacity = 0;
}

//入栈：插入元素x为新的栈顶
void StackPush(ST *ps, STDataType x)
{
    assert(ps);

    //满了就增容
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

//出栈：删除栈顶元素
void StackPop(ST *ps)
{
    assert(ps);
    assert(ps->top > 0);//栈空时直接中止
    ps->top--;
}

//返回栈顶元素
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
