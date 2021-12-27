#include<stdio.h>

//P94
//操作符作业

//1、结果
//int main()
//{
//    int a,b,c;
//    a = 5;
//    c = ++a;
//    b = ++c, c++, ++a, a++;
//    b += a++ + c;
//    printf("a=%d b=%d c=%d\n", a, b, c);
//    return 0;
//}
//a=9 b=23 c=8

//2、算出一个二进制数中1的个数，负数用补码
//自己写的
//int main()
//{
//    unsigned int n = 0;
//    //保证负数也能参与运算
//    scanf("%d", &n);
//    int count = 0;
////    if(n<0)
////    {
////        n = -n;
////    }
//    while(n)
//    {
//        if(n & 1 == 1)
//        //& - "与",全1为1，一0为0
//        {
//            count++;
//        }
//        n = n >> 1;
//    }
//    printf("%d\n", count);
//    return 0;
//}

//老师
//int NumberOf1(int n)
//{
//    int count = 0;
//    for(int i = 0; i < 32; i++)
//    {
//        if((n >> i) & 1 == 1)//如果&（与）1则为1，& - 全1为1，一0为0
//        {
//            count++;
//        }
//    }
//    return count;
//}

//最优
//int NumberOf1(int n)
//{
//    int count = 0;
//    int i = 0;
//    while(n)
//    {
//        n = n & (n-1);
//        //每次n去一个1
//        //每减一次加1
//        count++;
//    }
//    return count;
//}
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    printf("%d\n", NumberOf1(n));
//    return 0;
//}

//3、判断一个数是不是2的次方
//myself
//int cifang(int n)
//{
//    int count = 0;
//    int i = 1;
//    while(i != n)
//    {
//        i *= 2;
//        count++;
//    }
//    return count;
//}
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    printf("%d\n", cifang(n));
//    return 0;
//}

//teacher
//int cifang(int n)
//{
//    int i = n&(n-1);
//    //2的次方的二进制只有一个1
//    //例如：8
//    //n:  001000
//    //n-2:000111
//    //&:  000000（全1为1）
//    if(i == 0)
//    {
//        return 1;
//    }
//    else
//    {
//        return 0;
//    }
//}
//int main()
//{
//    int n = 4;
//    scanf("%d", &n);
//    int ret = cifang(n);
//    if(ret == 1)
//    {
//        printf("yes!\n");
//    }
//    else
//    {
//        printf("no~\n");
//    }
//    return 0;
//}


//4、
//给两个整数，计算他们二进制不同的个数
//myself
//int bu_tong(int m ,int n)
//{
//    int i = m ^ n;
//    int count = 0;
//    while(i)
//    {
//        i = i & (i-1);
//        //每次n去一个1
//        //每减一次加1
//        count++;
//    }
//    return count;
//}
//int main()
//{
//    int m = 0;
//    int n = 0;
//    scanf("%d%d", &m, &n);
//    printf("%d\n", bu_tong(m,n));
//    return 0;
//}

//老师
//int main()
//{
//    int m = 0;
//    int n = 0;
//    scanf("%d%d", &m, &n);
//    int count = 0;
//    for(int i = 0; i < 32; i++)
//    {
//        if(((m >> i) & 1) != ((n >> i) & 1))
//        {
//            count++;
//        }
//    }
//    printf("%d\n", count);
//    return 0;
//}


//5、分别打印一个二进制数的奇数位和偶数位
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int i = 0;
//    //偶数位
//    for(i = 31; i >= 1; i -= 2)
//    {
//        printf("%d ", (n >> i) & 1);
//    }
//
//    printf("\n");
//    //奇数位
//    for(i = 30; i >= 0; i -= 2)
//    {
//        printf("%d ", (n >> i) & 1);
//    }
//    return 0;
//}


//6、交换两个数的内容，不允许创建额外变量
//int main()
//{
//    int a = 0;
//    int b = 0;
//    scanf("%d%d", &a, &b);
//    //例a=10 b=20
//    //a - 001010
//    //b - 010100
//    a = a ^ b;
//    //a - 011110
//    b = a ^ b;
//    //b - 001010
//    a = a ^ b;
//    //a - 010100
//    printf("a=%d b=%d\n", a, b);
//    return 0;
//}

//6、结果
int main()
{
    int arr[] = {1,2,3,4,5};
    short* p = (short*)arr;
    int i = 0;
    for(i = 0; i < 4; i++)
    {
        *(p + i) = 0;
    }
    for(i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
//小端存储
//0 0 3 4 5

