#include<stdio.h>

//P79
//指针

//一、 指针类型的意义
//1、指针类型决定了：指针解引用的权限有多大
//2、指针类型决定了：指针走一步走多远（步长）

//二、野指针：指针指向的位置是不可知的，随机的、不正确的、没有明确限制的
//成因

//1、指针未初始化
//int main()
//{
//    int *p;//p为野指针
//    //p是一个局部的指针变量，局部变量不初始化，默认是随机值
//    *p = 20;//非法访问内存
//    return 0;
//}

//2、指针越界
//int main()
//{
//    int arr[10] = {0};
//    int *p = arr;
//    int i = 0;
//    for (i = 0; i <= 10; i++)
//    {
//        *p = i;//p为野指针
//        //加到11，超出p的范围
//        p++;
//    }
//    return 0;
//}

//3、指针指向的空间释放
//int *test()
//{
//    int a = 10;
//    return &a;
//}
//int main()
//{
//    int *p = test();
//    *p = 20;//p为野指针
//    return 0;
//}

//4、避免野指针
//（1）指针初始化
//不知p初始化为何值时，直接为NULL

//小心指针越界
//指针指向空间释放及时置NULL
//使用前检查有效性

//三、指针运算

//1、指针+-整数
//#define N_VALUES 5
//float values[N_VALUES];
//float *vp;
//for (vp = &values[0]; vp < &values[N_VALUES];)
//{
//    *vp++ = 0;
//}
//结果为N_VALUES的5个数全为0

//int main()
//{
//    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//    int *p = arr;
//    int *pend = arr + 9;
//
//    while(p <= pend)
//    {
//        printf("%d ", *p);
//        p++;
//    }
//    return 0;
//}
//1 2 3 4 5 6 7 8 9 10

//2、指针-指针,得到的是两个指针之间的元素个数
//相减前提，两个指针指向同一块空间
//int main()
//{
//    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//    printf("%d\n", &arr[9] - &arr[0]);
//    return 0;
//}
//9

#include<string.h>
//int my_strlen(char *str)
//{
//    char *start = str;
//    while (*str != '\0')
//    {
//        str++;
//    }
//    return str - start;
//}
//int main()
//{
//    int len = my_strlen("abc");
//    printf("%d\n", len);
//    return 0;
//}
//3



//P82
//一、指针和数组
//int main()
//{
//    int arr[] = {0};
//    //%p - 指针
//    printf("%p\n", arr);//数组名是数组首元素的地址
//    printf("%p\n", &arr[0]);
//    return 0;
//}

//int main()
//{
//    int arr[10] = {0};
//    int *p = arr;
//    int i = 0;
//    for (i = 0; i < 10; i++)
//    {
//        printf("%p <---> %p\n", &arr[i], p+i);
//        //p+i产生的就是数组下标为i的地址
//    }
//    return 0;
//}
//结果相同

//int main()
//{
//    int arr[10] = {0};
//    int *p = arr;
//    int i = 0;
//    for (i = 0; i < 10; i++)
//    {
//        *(p+i) = i;
//    }
//    for (i = 0; i < 10; i++)
//    {
//        printf("%d ", *(p+i));
//    }
//    return 0;
//}

//int main()
//{
//    int arr[10] = {1,2,3,4,5,6,7,8,9,20};
//    int *p = arr;
//
//    printf("%d\n", arr[2]);
//    //arr[2] ==> *(arr+2) ==> *(2+arr) ==> 2[arr]
//    //==> *(p+2) ==> *(2+p) ==> p[2] ==>
//    printf("%d\n", 2[arr]);
//    printf("%d\n", 2[p]);
//    printf("%d\n", p[2]);
//    return 0;
//}


//二、二级指针 - 套娃
//int main()
//{
//    int a = 10;
//    int *pa = &a;//pa是指针变量，一级指针
//
//    //ppa,二级指针
//    int **ppa = &pa;//pa也是变量，&pa取出pa在内存中的起始地址
//    //*ppa==pa
//    //*pa==a
//    //**ppa=a
//
//    int ***pppa = &ppa;//三级指针
//
//    return 0;
//}

//三、指针数组 - 数组
int main()
{
    int arr[10];
    //整型数组 - 存放整型的数组
    char ch[5];
    //字符数组 - 存放字符
    int *parr[5];
    //指针数组 - 存放指针
    char *pch[5];
    //字符指针数组
    return 0;
}

