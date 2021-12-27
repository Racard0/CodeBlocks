#include<stdio.h>

//P122
//指针练习1

//1、二维数组
//int main()
//{
//    int a[3][4] = {0};
//    printf("%d\n", sizeof(a));//48, 3*4*sizeof(int)=48
//    printf("%d\n", sizeof(a[0][0]));//4,a[0][0] - 第一行第一个元素
//    printf("%d\n", sizeof(a[0]));//16，a[0]理解为第一行的数组名，一维数组
//    printf("%d\n", sizeof(a[0] + 1));
//    //4,第一行的第二个元素，a[0]作为数组名并没有单独放在sizeof()，也没有取地址
//
//    printf("%d\n", sizeof(*(a[0] + 1)));//4
//    printf("%d\n", sizeof(a + 1));//4，a是二维数组名，并没取地址
//    //也没单独放在sizeof内部，所以a表示二维数组首元素地址，即第一行的地址
//    //a + 1就是二维数组第二行的地址
//
//    printf("%d\n", sizeof(*(a + 1)));//16，a + 1是第二行的地址
//    //*(a+1)表第二行的地址，计算的就是第二行的大小
//
//    printf("%d\n", sizeof(&a[0] + 1));//4,a[0]是第一行数组名,
//    //&a[0]取出的是第一行的地址，&a[0]+1就是第二行的地址
//
//    printf("%d\n", sizeof(*(&a[0] + 1)));//16,第二行地址的大小
//    printf("%d\n", sizeof(*a));//16，第一行的大小,等价于*(a+0)
//    //a作为二维数组数组名，没有&，没有单独放在sizeof里，a就是首元素地址，即第一行地址
//    //*a就是第一行，计算的就是第一行的大小
//
//    printf("%d\n", sizeof(a[3]));//16,a[3]是第四行数组名（假设有）
//    //即使不存在也能通过类型int计算
//
//    printf("%d\n", sizeof(a[-1]));//16,同上,sizeof内部不参与运算
//    return 0;
//}

//2、
//int main()
//{
//    short s = 5;
//    int a = 4;
//    printf("%d\n", sizeof(s = a + 6));//2,short占两个字节
//
//    //sizeof内部不参与运算
//    printf("%d\n", s);//5
//    return 0;
//}

//总结：
//1、sizeof(数组名)表示整个数组，计算的是整个数组的大小
//2、&数组名，表示整个数组，取出的是整个数组的地址
//3、除此之外所有都表示首元素的地址


//3、
//int main()
//{
//    int a[5] = {1,2,3,4,5};
//    int *prt = (int*)(&a + 1);
//    printf("%d %d\n", *(a+1), *(prt-1));
//    return 0;
//}
//2 5

//4、
//考察：指针类型决定了指针运算
//struct test
//{
//    int num;
//    char *pcname;
//    short sdate;
//    char cha[2];
//    short sba[4];
//}*p;
////假设p的值为0x100000
////已知test类型的变量大小是20字节
//int main()
//{
//    printf("%p\n", p + 0x1);//10000014
//    //跳过一个类型，20的十六进制是14
//
//    printf("%p\n", (unsigned long)p + 0x1);//10000001，结构体指针强制转化为无符号长整形
//
//    printf("%p\n", (unsigned int*)p + 0x1);//10000004，转换为无符号整型，一个整数4个字节
//    //指针加一由指针类型决定
//    return 0;
//}


//5、
//P124
//22:43
//int main()
//{
//    int a[4] = {1,2,3,4};
//    int *ptr1 = (int*)(&a + 1);//4
//    int *ptr2 = (int*)((int)a + 1);//2000000
//    printf("%x, %x\n", ptr1[-1], *ptr2);
//    return 0;
//}
//4,2000000


//6、
//int main()
//{
//    int a[3][2] = {(0,1), (2,3), (4,5)};
//    //逗号表达式，实际为{1,3,5}
//
//    int *p;
//    p = a[0];
//    printf("%d\n", p[0]);
//    return 0;
//}
//1


//7、
//int main()
//{
//    int a[5][5];
//    int (*p)[4];
//    p = a;//int (*)[5];
//    printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
//    return 0;
//}
//10000000000000000000000000000100
//11111111111111111111111111111011
//11111111111111111111111111111100
//FFFFFFFC
//FFFFFFFC,-4


//8、
//int main()
//{
//    int aa[2][5] = {1,2,3,4,5,6,7,8,9,10};
//    int *ptr1 = (int*)(&aa + 1);//10
//    //指向下一个数组首元素
//
//    int *ptr2 = (int*)(*(aa + 1));
//    //指向aa第二行首元素
//
//    printf("%d,%d\n", *(ptr1 - 1), *(ptr2 - 1));
//    //下一个数组-1，为10           第二行-1，为5
//    return 0;
//}
//10,5


//9、
//int main()
//{
//    char *a[] = {"work", "at", "alibaba"};
//    char **pa = a;
//    pa++;
//    printf("%s\n", *pa);
//    return 0;
//}
//at


//10、
//P126
//28:37
//int main()
//{
//    char *c[] = {"enter", "new", "point", "first"};
//    char **cp[]  = {c + 3, c + 2, c + 1, c};
//    char ***cpp = cp;
//
//    printf("%s\n", **++cpp);//point
//    printf("%s\n", *--*++cpp + 3);//er
//    printf("%s\n", *cpp[-2] + 3);//st
//    //**(cpp-2)+3
//    printf("%s\n", cpp[-1][-1] + 1);//ew
//    //*(*(cpp-1)-1)+1
//    return 0;
//}
