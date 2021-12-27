#include<stdio.h>

//一、函数

//1、库函数
#include<string.h>

//strcpy
//int main()
//{
//    char arr1[20] = {0};
//    char arr2[] = "abc";
//
//    strcpy(arr1, arr2);
//
//    printf("%s\n", arr1);
//    return 0;
//}


//2、自定义函数

//(1)写一个函数找出两个整数中的较大值
//get_max
//int get_max(int x, int y)//传值调用
//{
//    int z = 0;
//    if (x > y)
//    {
//        z = x;
//    }
//    else
//    {
//        z = y;
//    }
//    return z;
//}
//
//int main()
//{
//    int a = 0;
//    int b = 0;
//    printf("num:");
//
//    scanf("%d%d", &a, &b);
//
//    int max = get_max(a, b);//函数的调用
//
//    printf("max = %d\n", max);
//    return 0;
//}

//(2)交换两个整型变量
//void，表示这个函数不返回任何值，也不需要返回
//void get_exchange(int *pa, int *pb)//函数定义，形参，生命周期短，只在函数中有效
//{                //传址调用        //实参传给形参其实是实参的一份临时拷贝
//                                   //改变形参不能改变实参
//    int z = 0;
//    z = *pa;
//    *pa = *pb;
//    *pb = z;
//}
//
//int main()
//{
//    int a = 0;
//    int b = 0;
//    printf("num:");
//    scanf("%d%d", &a, &b);
//
//    get_exchange(&a, &b);//函数调用，实参
//                         //实参 - 变量、常量、表达式、函数等
//    printf("exchange:%d %d\n", a, b);
//    return 0;
//}


//(3)练习
//写一个函数判断是不是素数(函数方式)
//自己写的
//int sushu(int x, int y)
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
//    if (x == n)
//    {
//        y = 1;
//    }
//    return y;
//}
//
//int main()
//{
//    int i = 0;
//    int m = 0;
//    printf("num:");
//    scanf("%d", &i);
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

//老师写的
//打印100-200的素数
//int is_prime(int n)
//{
//    int m = 0;
//    for (m = 2; m < n; m++)
//    {
//        if (n % m == 0)
//        {
//            return 0;
//        }
//    }
//    return 1;
//}
//
//int main()
//{
//    int i = 0;
//    int count = 0;
//    for (i = 100; i <= 200; i++)
//    {
//        if (is_prime(i) == 1)
//        {
//            printf("%d ", i);
//            count++;
//        }
//    }
//    printf("\n个数:%d\n", count);
//    return 0;
//}

//判断是不是闰年
//自己写的
//int is_year(int x)
//{
//    if((x%4==0) && (x%100!=0) || (x%400==0))
//    {
//        return 1;
//    }
//    return 0;
//}
//
//int main()
//{
//    int i = 0;
//    printf("请输入年份:");
//    scanf("%d", &i);
//    if (is_year(i) == 1)
//    {
//        printf("是闰年\n");
//    }
//    else
//    {
//        printf("不是闰年\n");
//    }
//
//}

//打印1000-2000的闰年
//int is_year(int x)
//{
//    if ((x%4==0) && (x%100!=0) || (x%400==0))
//    {
//        return 1;
//    }
//    else
//    {
//        return 0;
//    }
//}
//
//int main()
//{
//    int i = 0;
//    int count = 0;
//    for (i = 1000; i <= 2000; i++)
//    {
//        if (is_year(i) == 1)
//        {
//            printf("%d ", i);
//            count++;
//        }
//    }
//    printf("\nnumber:%d\n", count);
//    return 0;
//}

//老师写的
//int is_year(int x)
//{
//    return ((x%4==0) && (x%100!=0) || (x%400==0));
//    //为真返回1；
//}
//
//int main()
//{
//    int i = 0;
//    int count = 0;
//    for (i = 1000; i <= 2000; i++)
//    {
//        if (is_year(i) == 1)
//        {
//            printf("%d ", i);
//            count++;
//        }
//    }
//    printf("\nnumber:%d\n", count);
//    return 0;
//}

//写一个函数，实现一个整型有序数组的二分查找
int binary_search(int a[], int k, int s)
{
    int left = 0;
    int right = s - 1;

    while(left <= right)
    {
        int mid = (left + right) / 2;
        if (a[mid] > k)
        {
            right = mid - 1;
        }
        else if (a[mid] < k)
        {
            left = mid + 1;
        }
        else
        {
            return mid;
        }
    }
    return -1;//找不到
}

int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int key = 0;
    printf("要查找的数：");
    scanf("%d",&key);

    int sz = sizeof(arr) / sizeof(arr[0]);

    //找到了就返回下标
    //找不到返回-1；

    int ret = binary_search(arr, key, sz);//binary n.二进制
              //数组arr传参，实际传递的不是数组的本身
              //仅仅传递过去了数组首个元素的地址

    if (-1 == ret)
    {
        printf("找不到\n");
    }
    else
    {
        printf("找到了，下标为：%d\n", ret);
    }
    return 0;
}
