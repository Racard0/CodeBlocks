#include <stdio.h>
#include <stdlib.h>

//typedef int STDataType;
//
//typedef struct Stack
//{
//    STDataType *a;
//    int top;
//    int capacity;
//}ST;
//
//void StackInit(ST *ps)
//{
//    ps->a = (STDataType*)malloc(sizeof(STDataType) * 4);
//    ps->capacity = 4;
//    ps->top = 0;
//}
//
//void StackPush(ST *ps, STDataType x)
//{
//    if(ps->top == ps->capacity)
//    {
//        STDataType *tmp = (STDataType*)realloc(ps->a, ps->capacity * 2 *sizeof(STDataType));
//        if(tmp == NULL)
//        {
//            printf("reallco fail\n");
//            exit(-1);
//        }
//        else
//        {
//            ps->a = tmp;
//            ps->capacity *= 2;
//        }
//    }
//
//    ps->a[ps->top] = x;
//    ps->top++;
//}
//
//STDataType StackTop(ST *ps)
//{
//    return ps->a[ps->top-1];
//}
//
//bool StackEmpty(ST *ps)
//{
//    return ps->top == 0;
//}
//
//void StackPop(ST *ps)
//{
//    ps->top--;
//}
//
//int main()
//{
//    ST st;
//    StackInit(&st);
//    StackPush(&st, 1);
//    StackPush(&st, 2);
//    StackPush(&st, 3);
//    StackPush(&st, 4);
//    StackPush(&st, 5);
//
//    while(!StackEmpty(&st))
//    {
//        printf("%d ", StackTop(&st));
//        StackPop(&st);
//    }
//
//    return 0;
//}

#include <iostream>       // std::cin, std::cout
#include <queue>          // std::queue

int main ()
{
  std::queue<int> myqueue;
  int myint;

  std::cout << "Please enter some integers (enter 0 to end):\n";

  do {
    std::cin >> myint;
    myqueue.push (myint);
  } while (myint);

  std::cout << "myqueue contains: ";
  while (!myqueue.empty())
  {
    std::cout << ' ' << myqueue.front();
    myqueue.pop();
  }
  std::cout << '\n';

  return 0;
}



int findMax(queue<int>q)
{
    int size = q.size();
    int ans = -1;
    for(int i = 0, i < size, i++)
    {
        ans = max(ans, q[i]);
    }
    return ans;
}


void max(int arr[])
{
    int len = sizeof(arr) / sizeof(arr[0]);
    int max = arr[0];
    for(int i = 0; i < len, i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
        }
    }
}


int findMax(stack<int>s)
{
    int ans = s.top();
    while(!s.empty())
    {
        ans = max(ans, s.top());
        s.pop();
    }
    return ans;
}



void LevelOrder(BTNode *root)
{
    queue<int>q;
    if(root != NULL)
    {
        q.push(root);
    }
    while(!q.empty())
    {
        BTNode *qfront = q.front();
        q.pop();
        printf("%d ", qfront->data);

        if(qfront->left)
        {
            q.push(qfront->left);
        }
        if(qfront->right)
        {
            q.push(qfront->right);
        }
    }
}
