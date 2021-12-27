#include<stdio.h>

//一、函数递归

//1、编写函数不允许创建临时变量，求字符串的长度
//模拟实现一个strlen函数
//(1)有临时变量 - count计数器
//int mystrlen(char *str)
//{
//    int count = 0;
//    while (*str != '\0')
//    {
//        count++;
//        str++;
//    }
//    return count;
//}
//
//int main()
//{
//    char arr[] = "ldy";
//    //['l']['d']['y']['\0']
//
//    printf("%d\n", mystrlen(arr));
//    return 0;
//}

//(2)递归 - 无临时变量
//int my2strlen(char *str)
//{
//    if (*str != '\0')
//    {
//        return 1 + my2strlen(str + 1);
//    }
//    else
//    {
//        return 0;
//    }
//}
//
//int main()
//{
//    char arr[] = "dbtx";
//    printf("%d\n", my2strlen(arr));
//    return 0;
//}

//二、递归与迭代
//循环是一种迭代的方法

//1、求n的阶乘
//int fac(int n)
//{
//    if (n <= 1)
//    {
//        return 1;
//    }
//    else
//    {
//        return n*fac(n - 1);
//    }
//}
//
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//
//    int ret = fac(n);
//
//    printf("%d\n", ret);
//    return 0;
//}

//2、求第n个斐波那契数
//前两数之和等于第三个数
//从0开头的
//int fi(int n)
//{
//    if (n == 1)
//    {
//        return 0;
//
//    }
//    else if (n == 2)
//    {
//        return 1;
//    }
//    else
//    {
//        return fi(n-1)+fi(n-2);
//    }
//}
//
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int fibo = fi(n);
//    printf("%d\n", fibo);
//    return 0;
//}

//从1开始
//int fi(int n)
//{
//    if (n <= 2)
//    {
//        return 1;
//    }
//
//    else
//    {
//        return fi(n-1)+fi(n-2);
//    }
//}
//
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int fibo = fi(n);
//    printf("%d\n", fibo);
//    return 0;
//}
//此方法效率较低

//迭代方法 - 速度较快
int fi(int n)
{
    int a = 1;
    int b = 1;
    int c = 1;
    while (n > 2)
    {
        c = a + b;//换位
        a = b;
        b = c;
        n--;//n小于等于2直接输出n=1
    }
    return c;
}

int main()
{
    int n = 0;
    scanf("%d", &n);
    int fibo = fi(n);
    printf("%d\n", fibo);
    return 0;
}
