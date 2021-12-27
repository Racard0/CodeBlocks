#include<stdio.h>
//素数
//int sushu(int x,int y)
//{
//    int n = 0;
//    for (n = 2; n < x; n++)
//    {
//        if (x % n == 0)
//        {
//            y = 0;
//            break;
//        }
//    }
//    if ( x == n )
//    {
//        y = 1;
//    }
//    if (x == 0 && x == 1)
//    {
//        y = 0;
//    }
//
//    return y;
//}
//
//int main()
//{
//    int i = 0;
//    int m = 0;
//    printf("num:");
//    scanf("%d", &i);

//    if (i < 0)
//    {
//        i = -i;
//    }
//
//    int ss = sushu(i, m);
//
//    if (ss == 1)
//    {
//        printf("是素数\n", ss);
//    }
//    else
//    {
//        printf("不是素数\n", ss);
//    }
//
//}

//最大
//int main()
//{
//    int a = 0;
//    int b = 0;
//    int c = 0;
//    scanf("%d%d%d", &a, &b, &c);
//
//    int n = 0;
//    if (a>b)
//    {
//        n=a;
//        a=b;
//        b=n;
//    }
//    if (b>c)
//    {
//        n=b;
//        b=c;
//        c=n;
//    }
//    printf("%d\n", c);
//    return 0;
//}
//
//回文
//int main()
//{
//    int a = 0;
//    int b = 0;
//    int c = 0;
//    int d = 0;
//    scanf("%d", &a);
//    c = a;
//
//    while ( c != 0)
//    {
//        a = c % 10;
//        b = b*10 + a;
//        c = c/10;
//    }
//
//    if (d == b)
//    {
//        printf("是回文");
//    }
//    else
//    {
//        printf("不是");
//    }
//    return 0;
//}

//class Solution {
//public:
//    vector<int> reversePrint(ListNode* head) {
//        stack<int> list;
//        vector<int> result;
//        ListNode* pNode = head;
//        while (pNode!= nullptr){
//            list.push(pNode->val);
//            pNode = pNode->next;
//        }
//        while(!list.empty()){
//            int temp = list.top();
//            result.push_back(temp);
//            list.pop();
//        }
//        return result;
//    }
//};


