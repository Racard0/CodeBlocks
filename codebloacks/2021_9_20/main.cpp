#include<stdio.h>

//一、作业

//1、
//打印1000-2000年的闰年
//闰年：
//普通年：能被4整除但不能被100整除的年份
//世纪年：能被400整除

//自己写的
//int main()
//{
//    int i = 0;
//    int count = 0;//计数器
//    for (i = 1000; i <= 2000; i++)
//    {
//        if (i % 4 == 0)//如果能被4整除
//        {
//            if (i % 100 == 0)//如果能被100整除
//            {
//                if (i % 400 == 0)//如果能被400整除
//                {
//                    printf("%d ", i);
//                    count++;
//                }
//                else
//                {
//                    continue;
//                }
//            }
//            else
//            {
//                printf("%d ", i);
//                count++;
//            }
//        }
//    }
//    printf("\n总数为：%d\n", count);
//    return 0;
//}

//1、
//老师写的
//int main()
//{
//    int y = 0;
//    int count = 0;//计数器
//    for (y = 1000; y <= 2000; y++)
//    {
//        if (y % 4 == 0)
//        {
//            if (y % 100 != 0)//y除于100的余数不等于0
//            {
//                printf("%d ", y);
//                count++;
//            }
//        }
//
//        if (y % 400 == 0)
//        {
//            printf("%d ", y);
//            count++;
//        }
//    }
//    printf("\n总数为：%d\n", count);
//    return 0;
//}

//1、
//写法二
//int main()
//{
//    int y = 0;
//    int count = 0;
//    for (y = 1000; y <= 2000; y++)
//    {
//        if (((y % 4 ==0) && (y % 100 != 0)) || (y % 400 == 0))
//            //&& - 且，一真为假，全真为真。 || - 或，一假为真，全假为假
//            {
//                printf("%d ", y);
//                count++;
//            }
//    }
//    printf("\n总数为：%d\n", count);
//    return 0;
//}


//2、
//打印1-100的素数
//素数：只能被1和自身整除
//int main()
//{
//    int i = 0;
//
//    for (i = 100; i <= 200; i++)
//    {
//        //判断i是否为素数
//        //用2到i-1之间的数字试除i，看能否整除
//        int n = 0;
//        for (n = 2; n < i; n++)
//        {
//            if (i % n == 0)
//            {
//                break;
//            }
//        }
//
//        if (i == n)
//        {
//            printf("%d ", i);//素数
//        }
//
//    }
//    return 0;
//}

//2、
//法二
//int main()
//{
//    int i = 0;
//
//    int count = 0;
//    for (i = 100; i <= 200; i++)
//    {
//        int m = 1;//假设i就是素数
//        int n = 0;
//        for (n = 2; n < i; n++)
//        {
//            if (i % n == 0)
//            {
//                m = 0;
//                break;
//            }
//
//        }
//        if (m == 1)
//        {
//            printf("% d", i);
//            count++;
//        }
//    }
//    printf("\ncount：%d\n", count);
//    return 0;
//}

//2、
//法三

//假设m=a*b
//a和b中至少有一个数是<=开平方m的
//例如 16=2*8=4*4

#include<math.h>
//int main()
//{
//    int i = 0;
//    int count = 0;
//    for (i = 100; i <= 200; i++)
//    {
//        int m = 1;
//        int n = 0;
//        for (n = 2; n <= sqrt(i); n++)
//            //sqrt - 开平方函数
//        {
//            if (i % n == 0)
//            {
//                m = 0;
//                break;
//
//            }
//        }
//        if (m == 1)
//            {
//                printf("%d ", i);
//                count++;
//            }
//    }
//    printf("\ncount:%d\n", count);
//    return 0;
//}

//2、
//法四
//int main()
//{
//    int i = 0;
//    int count = 0;
//    //i从101开始
//    for (i = 101; i <= 200; i += 2)//偶数不可能是素数
//    {
//        int m = 1;
//        int n = 0;
//        for (n = 2; n <= sqrt(i); n++)
//            //sqrt - 开平方函数
//        {
//            if (i % n == 0)
//            {
//                m = 0;
//                break;
//
//            }
//        }
//        if (m == 1)
//            {
//                printf("%d ", i);
//                count++;
//            }
//    }
//    printf("\ncount:%d\n", count);
//    return 0;
//}


//二、goto语句
//int main()
//{
//    flag:
//        printf("heh\n");
//        printf("hah\n");
//
//        goto flag;
//        return 0;
//}
//无限循环

//1、关机小程序
//C语言提供了一个函数：system() - 执行系统命令

#include<string.h>
#include<stdlib.h>

//int main()
//{
//    char input[] = {0};//存放输入信息
//    system("shutdown -s -t 60");//system - stdlib.h
//
//again:
//    printf("关机\n");
//    scanf("%s", input);//string.h
//
//    if (strcmp(input, "no") == 0)//两字符串比较不能使用==，应该使用strcmp() - string compare
//    {
//        system("shutdown -a");
//    }
//    else
//    {
//        goto again;
//    }
//    return 0;
//
//}

//1、
//不使用goto语句
//int main()
//{
//    char input[] = {0};//存放输入信息
//    system("shutdown -s -t 60");//system - stdlib.h
//    while (1)
//    {
//        printf("关机\n");
//        scanf("%s", input);//string.h
//
//        if (strcmp(input, "no") == 0)//两字符串比较不能使用==，应该使用strcmp() - string compare
//            {
//                system("shutdown -a");
//                break;
//            }
//    }
//    return 0;
//
//}
//goto语句只能在一个函数范围内跳转，不能跨函数


//三、函数

//strcpy
//int main()
//{
//    char arr1[20] = {0};
//    char arr2[] = "hello world";
//    strcpy(arr1, arr2);
//    printf("%s\n", arr1);//%s - 以字符串形式打印arr1
//    return 0;
//}

//memset
int main()
{
    char arr[] = "hello world";
    memset(arr, 'x', 5);

    printf("%s\n", arr);

    return 0;
}
