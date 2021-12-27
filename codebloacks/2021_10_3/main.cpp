#include<stdio.h>

//一、分支与循环作业

//1、结果
//int main()
//{
//    int a = 0;
//    int b = 0;
//    for (a = 1, b =1; a <= 100; a++)
//    {
//        if (b >= 20)
//        {
//            break;
//        }
//        if (b % 3 == 1)
//        {
//            b = b + 3;
//            continue;
//        }
//        b = b -5;
//    }
//    printf("%d\n", a);
//    return 0;
//}
//a=8

//2、1-100所有整数中出现了多少个数字9
//int main()
//{
//    int n = 0;
//    int count = 0;
//    for (n = 1; n <= 100; n++)
//    {
//        if (n % 10 == 9)
//        {
//            count++;
//
//        }
//        if (n / 10 == 9)
//        {
//            count++;
//        }
//    }
//    printf("%d\n", count-1);
//    return 0;
//}
//20
//19个数，99有两个9

//3、计算1/1-1/2+1/3-...+1/99-1/100的值
//int main()
//{
//    int n = 0;
//    double sum = 0;//双精度浮点型
//    for (n = 1; n <= 100; n++)
//    {
//        if (n % 2 == 1)
//        {
//            sum += 1.0 / n;
//        }
//        else
//        {
//            sum -= 1.0 /n;
//        }
//    }
//    printf("%lf\n", sum);
//    return 0;
//}

//法2
//int main()
//{
//    int n = 0;
//    double sum = 0;//双精度浮点型
//
//    int flag = 1;//插旗
//    for (n = 1; n <= 100; n++)
//    {
//        sum += flag*1.0 / n;
//        flag = -flag;//正负正负正负......
//
//    }
//    printf("%lf\n", sum);
//    return 0;
//}
//0.688172

//4、求十个整数中的最大值
//int main()
//{
//    int arr[] = {4,3,6,9,2,9,1,5,8,7};
//    int i = 0;
//    int max = 0;//如果数组为负数，则不行
//    for (i = 0; i <= 10; i++)
//    {
//        if (arr[i] > max)
//        {
//            max = arr[i];
//        }
//    }
//    printf("%d\n", max);
//
//    return 0;
//}

//法二，有负数的情况下
//int main()
//{
//    int arr[] = {-4,-3,-6,-9,-2,-9,-1,-5,-8,-7};
//    int i = 0;
//    int max = arr[0];//随机数组一个数为起始数
//    for (i = 0; i <= 10; i++)
//    {
//        if (arr[i] > max)
//        {
//            max = arr[i];
//        }
//    }
//    printf("%d\n", max);
//
//    return 0;
//}

//5、打印99乘法表
//int main()
//{
//    int h = 0;
//    //打印行
//    for (h = 1; h <= 9; h++)//打印9行
//    {
//        int l = 0;
//        //打印列
//        for (l = 1; l <= h; l++)//几行几列
//        {
//            printf("%d*%d=%-2d ", l, h, h*l);
//            //-2d - 左对齐两位，不够用空格填充。2d - 右对齐
//        }
//        printf("\n");//换行
//    }
//    return 0;
//}

