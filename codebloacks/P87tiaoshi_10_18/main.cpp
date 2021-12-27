#include<stdio.h>

//P87
//调试技巧

//1、求1！+2！+3!......+n!
//int main()
//{
//    int n = 5;
//    for(int i = 1; i < n; i++)
//    {
//        n *= i;
//    }
//    printf("%d\n", n);
//    return 0;
//}
//错误，n一直在变化

//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
////    int ret = 1;
//    int num = 0;
//    for(int m = 1; m <= n; m++)
//    {
//        int ret = 1;//每次都要重置为1
//        for(int i = 1; i <= m; i++)
//        {
//            ret *= i;
//        }
//        num += ret;
//    }
//    printf("%d\n", num);
//    return 0;
//}

//int main()
//{
//    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//    for(int i = 1; i <= 12; i++)
//    {
//        arr[i] = 0;
//        printf("hehe\n");
//    }
//    return 0;
//}
#include<string.h>//strcpy
//void my_strcpy(char* arr1, char* arr2)
//{
//    //法一
////    while(*arr2 != '\0')
////    {
//////        *arr1 = *arr2;
//////        arr1++;
//////        arr2++;
////        *arr1++ = *arr2++;
////    }
////    *arr1 = *arr2;
//
//    //法二
////    do
////    {
////        *arr1 = *arr2;
////        arr1++;
////        arr2++;
////    }while(*arr2 != '\0');
////    *arr1 = *arr2;
//
//    //法三 - 最优
//    while(*arr1++ = *arr2++)//既复制了\0,有使得循环停止
//    {
//        ;
//    }
//}
//int main()
//{
//    char arr1[] = "***********";
//    char arr2[] = "nbnbnb";
//
////    strcpy(arr1, arr2);//1、目标空间地址 2、源空间地址
////复制字符串from 中的字符到字符串to，包括空值结束符。返回值为指针to。
//
//    my_strcpy(arr1, arr2);
//    printf("%s\n", arr1);
//    return 0;
//}


#include<assert.h>//arrest
void my_strcpy(char* arr1, char* arr2)
{
    assert(arr2 != NULL);//断言
    //assert - 宏assert()用于错误检测。如果表达式的结果为零，
    //宏写错误信息到STDERR并退出程序执行。如果宏NDEBUG已经定义，宏assert()将被忽略。
    while(*arr1++ = *arr2++)
    {
        ;
    }
}
int main()
{
     char arr1[] = "***********";
    char arr2[] = "nbnbnb";

    my_strcpy(arr1, NULL);
    ////Assertion failed: arr2 != NULL

//    my_strcpy(arr1, arr2);

    printf("%s\n", arr1);
    return 0;
}

