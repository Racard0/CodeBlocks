#include<stdio.h>

//一、do while 循环(先执行，在判断)
//1、打印1-10
//int main()
//{
//    int i = 1;
//    do
//    {
//        printf("%d ", i);
//        i++;
//    }while (i <= 10);
//
//    return 0;
//
//}
//1 2 3 4 5 6 7 8 9 10

//2、break
//int main()
//{
//    int i = 1;
//    do
//    {
//        if (i == 5)
//            break；
//            //跳出循环——————
//                           |
//        printf("%d ", i);  |
//        i++;               |
//    }while (i <= 10);      |
//                           |
//    return 0;   <———————————
//
//}
//1 2 3 4

//3、continue
//int main()
//{
//    int i = 1;
//    do
//    {
//        if (i == 5)
//            continue;
//
//        printf("%d ", i);
//        i++;
//    }while (i <= 10);
//
//    return 0;
//
//}
//1 2 3 4 循环
//永远到不了5的彼端，一直循环下去

//4、阶乘

//for
//int main()
//{
//    int i = 0;
//    printf("请输入：");
//    scanf("%d", &i);
//    int sum = 1;
//    for (int n = 1; n <= i; n++)
//    {
//        sum *= n;
//    }
//    printf("结果为：%d\n", sum);
//    return 0;
//}

//do while
//int main()
//{
//    int i = 0;
//    printf("number:");
//    scanf("%d", &i);
//    int sum = 1;
//    int n = 1;
//    do
//    {
//        sum *= n;
//        n++;
//    }while(n <= i);
//
//    printf("sum:%d\n", sum);
//    return 0;
//}

//1-10的阶乘之和
//int main()
//{
//    int i = 0;
//    int sum = 1;
//    int num = 0;
//    for(i=1; i <= 10; i++)
//        {
//            sum *= i;
//            num += sum;//！！！怎么没想到呢
//        }
//    printf("%d\n", num);
//    return 0;
//}

//1-10阶乘之和2
//int main()
//{
//    int i = 0;
//    int n = 0;
//    int z = 0;
//    printf("num:");
//    scanf("%d", &z);
//    int sum = 1;
//    int num = 0;
//    for (n = 1; n <= z; n++)
//    {
//        sum = 1;
//        //计算n的阶乘之前，吧um初始为1
//        for (i = 1; i <= z; i++)
//        {
//            sum *= i;
//            num += sum;
//        }
//    }
//    printf("sum:%d\n", num);
//    return 0;
//}

//在一个有序数组中查找具体的某个数字(二分查找)
int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int k = 0;//在arr这个有序数组的中查找k的值
    printf("寻找的数为:");
    scanf ("%d", &k);
    int sz = sizeof(arr) / sizeof(arr[10]);//数组的元素个数
    int left = 0;
    int right = sz - 1;
    while (left <= right)
    {

        int mid = (left + right) / 2;
        if (arr[mid] < k)
        {
            left = mid + 1;

        }
        else if (arr[mid] > k)
        {
            right = mid - 1;

        }
        else
        {
            printf("下标为:%d\n", mid);
            break;
        }
    }
    if (left > right)
    {
        printf("找不到");
    }
    return 0;
}
