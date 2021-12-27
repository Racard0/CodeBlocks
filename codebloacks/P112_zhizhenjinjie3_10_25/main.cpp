#include<stdio.h>

//P112
//指针进阶3

//1、一级指针传参
//void print(int *p, int sz)
//{
//    for(int i = 0; i < sz; i++)
//    {
//        printf("%d ", *(p+i));
//    }
//    printf("\n");
//}
//int main()
//{
//    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//    int *p = arr;
//    int sz = sizeof(arr) / sizeof(arr[0]);
//    print(p, sz);
//    return 0;
//}

//2、二级指针传参
//void test(int **ppa)
//{
//    **ppa = 20;
//}
//int main()
//{
//    int a = 10;
//    int *pa = &a;//一级指针
//    int **ppa = &pa;//二级指针
//    test(ppa);
//    test(&pa);//传一级指针变量的地址
//
//    int *arr[10] = {0};
//    test(arr);//传存放一级指针的数组
//    printf("a=%d\n", a);
//    return 0;
//}
//a=20


//3、函数指针
//int add(int x, int y)
//{
//    return x + y;
//}
//int main()
//{
//    int (*pf)(int, int) = &add;
//    //等价于
////    int (*pf)(int, int) = add;
//    int ret = (*pf)(3, 5);
//    //等价于
////    int ret = pf(3, 5);
////    int ret = add(3, 5);
//    printf("%d\n", ret);
//    return 0;
//}
//8

//4、《C陷阱和缺陷》
//(1)
//int main()
//{
//    (*(void(*)())0)();
    //调用0地址的函数
    //该函数无参，返回类型是void
    //1.void(*)() - 函数指针类型
    //2.(void(*)())0 - 对0进行强制类型转换，被解释为一个函数地址
    //3.*(void(*)())0 - 对0地址进行解引用操作
    //4.(*(void(*)())0)() - 调用0地址处的函数

//    return 0;
//}

//(2)
//void(*signal(int, void(*)(int)))(int);
//1.signal和()结合，说明signal是函数名
//2.signal函数的第一个参数的类型是int,第二个参数的类型是函数指针
//该还能输指针指向第一个参数为int,返回类型是void的函数
//3.signal函数的返回类型也是一个函数指针，该函数指针指向一个参数为int
//返回类型是void的函数
//signal是一个函数的声明

//简化
//typedef void(*pfun)(int);//对void(*)(int)的函数指针l类型重命名为pfun
//pfun signal(int, pfun);

//5、函数指针数组
//int add(int x, int y)
//{
//    return x + y;
//}
//int sub(int x, int y)
//{
//    return x - y;
//}
//int main()
//{
//    int (*pf1)(int, int) = add;
//    int (*pf2)(int, int) = sub;
//
//    int (*pfarr[2])(int, int) = {add, sub};
//    //pfarr就是函数指针数组
//    return 0;
//}


//6、计算器
int Add(int x, int y)
{
    return x + y;
}
int Sub(int x, int y)
{
    return x - y;
}
int Mul(int x, int y)
{
    return x * y;
}
int Div(int x, int y)
{
    return x / y;
}
void menu()
{
    printf("*************************\n");
    printf("******* 1.Add  2.Sub ****\n");
    printf("******* 3.Mul  4.Div ****\n");
    printf("*******    0.Exit    ****\n");
    printf("*************************\n");
}
//int main()
//{
//    int intput = 0;
//
//    do
//    {
//        menu();
//
//        int x = 0;
//        int y = 0;
//        int num = 0;
//        printf("choose:");
//        scanf("%d", &intput);
//
//        switch(intput)
//        {
//        case 1:
//            printf("number:");
//            scanf("%d %d", &x, &y);
//            num = Add(x, y);
//            printf("num=%d\n", num);
//            break;
//        case 2:
//            printf("number:");
//            scanf("%d %d", &x, &y);
//            num = Sub(x, y);
//            printf("num=%d\n", num);
//            break;
//        case 3:
//            printf("number:");
//            scanf("%d %d", &x, &y);
//            num = Mul(x, y);
//            printf("num=%d\n", num);
//            break;
//        case 4:
//            printf("number:");
//            scanf("%d %d", &x, &y);
//            num = Div(x, y);
//            printf("num=%d\n", num);
//            break;
//        case 0:
//            printf("Exit!!\n");
//            break;
//        default:
//            printf("choose again\n");
//            break;
//        }
//    }while(intput);
//    return 0;
//}

//函数指针数组方式
//int main()
//{
//    int intput = 0;
//    do{
//        menu();
//        int (*parr[5])(int, int) = {NULL, Add, Sub, Mul, Div};
//        int x = 0;
//        int y = 0;
//        int num = 0;
//        printf("choose:");
//        scanf("%d", &intput);
//
//        if(intput >= 1 && intput <= 4)
//        {
//            printf("number:");
//            scanf("%d %d", &x, &y);
//            num = (parr[intput])(x, y);
//            printf("num=%d\n", num);
//        }
//        else if(intput == 0)
//        {
//            printf("WARNING\n");
//            printf("  EXIT \n");
//            break;
//        }
//        else
//        {
//            printf("choose again\n");
//        }
//    }while(intput);
//    return 0;
//}

//回调函数方式
int calc(int (*pf)(int x, int y))//回调
{
    int x,y;
    printf("number:");
    scanf("%d %d", &x, &y);
    return pf(x, y);

}
int main()
{
    int intput = 0;

    do
    {
        menu();

        int x = 0;
        int y = 0;
        printf("choose:");
        scanf("%d", &intput);

        switch(intput)
        {
        case 1:
            printf("num=%d\n", calc(Add));
            break;
        case 2:
            printf("num=%d\n", calc(Sub));
            break;
        case 3:
            printf("num=%d\n", calc(Mul));
            break;
        case 4:
            printf("num=%d\n", calc(Div));
            break;
        case 0:
            printf("Exit!!!\n");
            break;
        default:
            printf("choose again\n");
            break;
        }
    }while(intput);
    return 0;
}
