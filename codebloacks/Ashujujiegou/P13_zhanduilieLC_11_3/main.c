#include <stdio.h>
#include <stdlib.h>

//P13
//栈和队列的leetcode题


//20.有效的括号
//给定一个只包括 '('，')'，'{'，'}'，'['，']' 的字符串 s ，判断字符串是否有效。
//有效字符串需满足：
//1、左括号必须用相同类型的右括号闭合。
//2、左括号必须以正确的顺序闭合。
typedef char STDataType;
typedef struct Stack //栈
{
    STDataType *a;
    int top;//栈顶
    int capacity;//容量
}ST;
//初始化
void StackInit(ST *ps);
//销毁
void StackDestory(ST *ps);
//入栈，插入x为栈顶
void StackPush(ST *ps, STDataType x);
//出栈，删除栈顶元素
void StackPop(ST *ps);

STDataType StackTop(ST *ps);
int StackSize(ST *ps);//栈的大小
bool StackEmpty(ST *ps);//判断栈是否为空

//初始化
void StackInit(ST *ps)
{
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
//入栈
void StackPush(ST *ps, STDataType x)
{
    assert(ps);

    //满了增容
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
//出栈
void StackPop(ST *ps)
{
    assert(ps);
    assert(ps->top > 0);
    ps->top--;
}
//栈的大小
int StackSize(ST *ps)
{
    assert(ps);
    return ps->top;
}
//判断是否为空
bool StackEmpty(ST *ps)
{
    assert(ps);
    return ps->top == 0;
}
//取栈顶元素
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

                //不匹配
                if((*s == '}' && top != '{')
                || (*s == ')' && top != '(')
                || (*s == ']' && top != '['))
                {
                    StackDestory(&st);
                    return false;
                }
                else //匹配
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


//225.用两个队列实现栈

