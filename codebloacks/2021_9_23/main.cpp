#include<stdio.h>
//一、函数

//1、写一个函数，每调用一次，num值加1
//void add(int *p)
//{
//    (*p)++;
//}
//
//int main()
//{
//    int num = 0;
//    add(&num);
//    printf("%d\n", num);//1
//
//    add(&num);
//    printf("%d\n", num);//2
//
//    add(&num);
//    printf("%d\n", num);//3
//
//    add(&num);
//    printf("%d\n", num);//4
//    return 0;
//}


//二、函数的嵌套调用和链式访问
//1、嵌套调用
//void test2()
//{
//    printf("hehe\n");
//}
//
//int test1()
//{
//    test2();
//    return 0;
//}
//int main()
//{
//    test1();
//    return 0;
//}

//2、链式访问 - 把一个函数的返回值作为另一个函数的参数
#include<string.h>
//int main()
//{
//    int len = strlen("abc");
//    printf("%d\n", strlen("abc"));
//    return 0;
//}

//int main()
//{
//    char arr1[20] = {0};
//    char arr2[] = "bit";
//
//    printf("%s\n", strcpy(arr1, arr2));
//    return 0;
//}

//int main()
//{
//    printf("%d", printf("%d", printf("%d",43)));
//    //函数返回的是打印在屏幕上的字符的个数
//    return 0;
//}
//4321


//三、函数的声明和定义
//函数的声明一般出现在函数的使用之前，要满足先声明后使用
//定义在前则不用
//
//int main()
//{
//    int a = 10;
//    int b = 20;
//
//    //函数声明 - 告知。(函数定义在主函数后)
//    int add(int, int );
//
//    int c = add(a, b);
//    printf("%d\n", c);
//    return 0;
//
//}
//函数的定义
//int add(int x, int y)
//{
//    return x+y;
//}

//计算器
#include "main.h.h"
#include "sub.h"

int main()
{
    int a = 15;
    int b = 20;
//    int c = add(a, b);
    int c = sub(a, b);
    printf("%d\n", c);
    return 0;
}
