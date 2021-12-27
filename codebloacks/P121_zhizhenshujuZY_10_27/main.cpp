#include<stdio.h>

//P121
//指针数据笔试题

//1、一维数组
//int main()
//{
//    int a[] = {1,2,3,4};
//    printf("%d\n", sizeof(a));//16
    //sizeof(数组名) - 数组名表示整个数组-计算的是整个数组的大小
//
//    printf("%d\n", sizeof(a + 0));//4,是第一个元素的地址
//    printf("%d\n", sizeof(*a));//4，*a是数组第一个元素
//    printf("%d\n", sizeof(a + 1));//4,a+1是第二个元素的地址
//    printf("%d\n", sizeof(a[1]));//4，第二个元素的大小
//
//    printf("%d\n", sizeof(&a));//4
//    //&数组名 - 数组名表示整个数组，取出的是整个数组的地址
//    //计算的是地址的大小
//
//    printf("%d\n", sizeof(*&a));//16,解引用整个数组
//    //&a - int(*p)[4] = &a
//    //等价于sizeof(a)
//
//    printf("%d\n", sizeof(&a + 1));//4,跳过一个数组
//    printf("%d\n", sizeof(&a[0]));//4
//    printf("%d\n", sizeof(&a[0] + 1));//4
//
//    return 0;
//    //除了sizeof(数组名) &数组名，其他情况都是数组首元素的地址
//}

//2、字符数组
#include<string.h>
//int main()
//{
//    char arr[] = {'a', 'b', 'c', 'd', 'e', 'f'};
//    printf("%d\n", sizeof(arr));//6
//    printf("%d\n", sizeof(arr + 0));//4,字节占1，但地址任为4
//    printf("%d\n", sizeof(*arr));//1，第一个元素
//    printf("%d\n", sizeof(*arr + 0));//4
//    printf("%d\n", sizeof*(arr + 0));//1
//    printf("%d\n", sizeof(arr[1]));//1，第二个元素
//    printf("%d\n", sizeof(&arr));//4,数组地址
//    printf("%d\n", sizeof(&arr + 1));//4，跳过一个数组
//    printf("%d\n", sizeof(&arr[0] + 1));//4，b的地址


//    printf("%d\n", strlen(arr));//随机值
//    printf("%d\n", strlen(arr + 0));//随机值
//    printf("%d\n", strlen(*arr));//传97，error
//    printf("%d\n", strlen(arr[1]));//传98，error
//    printf("%d\n", strlen(&arr));//随机值 char(*)[6]
//    printf("%d\n", strlen(&arr + 1));//随机值-6
//    printf("%d\n", strlen(&arr[0] + 1));//随机值-1
//    return 0;
//}

//3、
//int main()
//{
//    char arr[] = "abcdef";
//    printf("%d\n", sizeof(arr));//7,abcdef\0
//    printf("%d\n", sizeof(arr + 0));//4,a
//    printf("%d\n", sizeof(*arr));//1,第一个元素
//    printf("%d\n", sizeof(arr[1]));//1
//    printf("%d\n", sizeof(&arr));//4,整个数组地址,char(*)[7]
//    printf("%d\n", sizeof(&arr + 1));//4,跳过
//    printf("%d\n", sizeof(&arr[0] + 1));//4，b


//    printf("%d\n", strlen(arr));//6,长度
//    printf("%d\n", strlen(arr + 0));//6，长度
//    printf("%d\n", strlen(*arr));//a,97,error
//    printf("%d\n", strlen(arr[1]));//b,98,error
//    printf("%d\n", strlen(&arr));//6,长度
//    printf("%d\n", strlen(&arr + 1));//跳过，随机
//    printf("%d\n", strlen(&arr[0] + 1));//5,bcdef
//    return 0;
//}


//4、
int main()
{
    char *p = "abcdef";
//    printf("%d\n", sizeof(p));//4,字符指针p的大小
//    printf("%d\n", sizeof(p + 1));//4
//    printf("%d\n", sizeof(*p));//1,a
//    printf("%d\n", sizeof(p[0]));//1,p[0]=*(p+0)
//    printf("%d\n", sizeof(&p));//4
//    printf("%d\n", sizeof(&p + 1));//4
//    printf("%d\n", sizeof(&p[0] + 1));//4,a

    printf("%d\n", strlen(p));//6
    printf("%d\n", strlen(p + 1));//5
    printf("%d\n", strlen(*p));//error,97
    printf("%d\n", strlen(p[0]));//error,97
    printf("%d\n", strlen(&p));//随机
    printf("%d\n", strlen(&p + 1));//随机
    printf("%d\n", strlen(&p[0] + 1));//5，bcdef
    return 0;
}
