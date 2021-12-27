#include<stdio.h>

//P103
//指针

//int main()
//{
//    char* ps = "hello bit";
//    char arr[] = "hello world";
//    printf("%c\n", *ps);
//    printf("%c\n", arr);
//    printf("%s\n", arr);
//    return 0;
//}
//h
//?
//hello world
//字符指针，存放着字符首元素的地址

//int main()
//{
//    char str1[] = "hello bit";
//    char str2[] = "hello bit";
//    char* str3 = "hello bit";
//    char* str4 = "hello bit";//常量字符串 - 不能更改
//    //内容一样共用一份
//
//    if(str1 == str2)
//    {
//        printf("s1 s2 same\n");
//    }
//    else
//    {
//        printf("s1 s2 no same\n");
//    }
//    if(str3 == str4)
//    {
//        printf("s3 s4 same\n");
//    }
//    else{
//        printf("s3 s4 no same\n");
//    }
//}
//s1 s2 no same
//s3 s4 same


//一、指针数组
//数组中存放的是指针地址

//1、
//int main()
//{
//    int a=10;
//    int b = 20;
//    int c = 30;
//    int* arr[3] = {&a, &b, &c};
//    //存放整型指针的数组
//    int i = 0;
//    for(i = 0; i < 3; i++)
//    {
//        printf("%d ", *(arr[i]));
//    }
//    printf("\n");
//    return 0;
//}

//2、
//int main()
//{
//    int a[5] = {1,2,3,4,5};
//    int b[] = {2,3,4,5,6};
//    int c[] = {3,4,5,6,7};
//    int *arr[3] = {a,b,c};
//    int i = 0;
//    for(i = 0; i < 3; i++)
//    {
//        int j = 0;
//        for(j = 0; j < 5; j++)
//        {
////            printf("%d ", *(arr[i] + j));
//            printf("%d ", arr[i][j]);
//        }
//        printf("\n");
//    }
//    return 0;
//}
//1 2 3 4 5
//2 3 4 5 6
//3 4 5 6 7


//二、数组指针 - 指向数组的指针
//int main()
//{
//    int a = 10;
//    int *pa = &a;
//    char ch = 'w';
//    char *pc = &ch;
//
//    int arr[10] = {1,2,3,4,5};
//    //数组指针
//    int (*parr)[10]  = &arr;//取出数组的地址
//
//    double *d[5];
//    double *(*pd)[5] = &d;
//    //pd就是一个数组指针
//    return 0;
//}

//int main()
//{
//    int arr[10] = {0};
//
//    int *p1 = arr;
//    int (*p2)[10] = &arr;
//
//    printf("%p\n", p1);//0060FED0
//    printf("%p\n", p1+1);//0060FED4
//    //相差4个字节，跳过一个整型
//
//    printf("%p\n", p2);//0060FED0   - 6356688
//    printf("%p\n", p2+1);//0060FEF8 - 6356728
//    //相差40个字节，跳过整个数组
//    return 0;
//}

//
//数组名是数组首元素的地址
//但有2个例外：
//1、sizeof(数组名) - 数组名表示整个数组，计算的是整个数组大小，单位是字节
//2、&数组名 - 数组名表示整个数组，取出的是整个数组的地址
//

//1、数组指针的应用
//int main()
//{
//    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//    int (*pa)[10] = &arr;
//    int i = 0;
//    for(i = 0; i < 10; i++)
//    {
//        printf("%d ", *((*pa) + i));
//    }
//    return 0;
//}
//1 2 3 4 5 6 7 8 9 10

//2、
//void print(int (*p)[5], int r, int c)
//{
//    int i = 0;
//    int j = 0;
//    for(i = 0; i < r; i++)
//    {
//        for(j = 0; j < c; j++)
//        {
//            printf("%d ", *(*(p + i) + j));
//        }
//        printf("\n");
//    }
//}
//
//int main()
//{
//    int arr[3][5] = {{1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7}};
//    print(arr, 3, 5);
//    return 0;
//}

//3、
//int (*parr3[10])[5];//一个存储数组指针的数组，该数组能够存放10个数组指针，
//每个数组指针能够指向一个数组，数组5个元素，每个元素是int类型

//int (*parr2)[10];//数组指针，该指针能够指向一个数组，数组10个元素
//每个元素的类型是int

//int *parr1[10];//整型指针的数组
//int arr[5];//整型数组


//4、一维数组传参，正确写法
//void test(int arr[]){};
//void test(int arr[10]){};
//void test(int *arr){};
//
//void test2(int *arr[20]){};
//void test2(int **arr){};
//int main()
//{
//    int arr[10] = {0};
//    int *arr2[20] = {0};
//    test(arr);
//    test2(arr2);
//    return 0;
//}

//5、二维数组传参
void test(int arr[3][5]){};
void test(int arr[][5]){};
void test(int *arr){};//XXX!不行
void test(int *arr[5]){};//XXX!
void test(int (*arr)[5]){};
void test(int **arr){};//XXX!
int main()
{
    int arr[3][5] = {0};
    test(arr);
    return 0;
}
