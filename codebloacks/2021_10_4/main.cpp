#include<stdio.h>

//一、 函数作业

//1、把函数处理结果的两个数据返回给主调函数
//法一、形参用数组
//void test(int arr[])
//{
//    arr[0] = 1;
//    arr[1] = 2;
//}
//
//int main()
//{
//    int arr[10] = {0};
//    test(arr);
//
//    return 0;
//
//}
//{1,2,0,0,0,0,0,0,0,0}

//法二、形参用两个指针
//void test(int *a, int *b)
//{
//    *a = 1;
//    *b = 2;
//}
//
//int main()
//{
//    int n = 0;
//    int i = 0;
//    test(&n, &i);
//
//    return 0;
//}

//法三、用两个全局变量
//int a = 0;
//int b = 0;
//void test()
//{
//    a = 1;
//    b = 2;
//}
//
//int main()
//{
//    test();
//
//    return 0;
//}

//2、
//打印乘法表，行数列数由自己决定
//输入9，打印99乘法表，输入12打印12*12表
void excel(int n)
{
    int a = 0;
    for (a = 1; a <= n; a++)//行
    {
        int b = 0;
        for (b = 1; b <= a; b++)//列
        {
            printf("%d*%d=%-2d ", b, a, a*b);
        }
        printf("\n");
    }
}

int main()
{
    int n = 0;
    printf("请输入所需乘法表：");
    scanf("%d", &n);
    excel(n);
    return 0;
}
