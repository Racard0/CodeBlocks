#include<stdio.h>
//typedef unsigned int u_int;//typedef用以给数据类型取别名,给unsigned int取名u_int

//void test()
//{
//    static int a=1;//static:修饰局部变量，声明静态变量，改变局部变量的生命周期，不声明时a是局部变量
//    a++;           //本质上改变了变量阿存储类型
//    printf("%d ",a);
//}

//extern int g_val;//extern,声明外部符号(test2.cpp)


//extern int Add(int,int);


//#define max 250
//int main()
//{
//    printf("%d\n",max);


//    int a=10;
//    int b=20;
//    int sum=Add(a,b);
//    printf("sum=%d\n",sum);

//    printf("%d\n",g_val);//2021,全局变量在整个工程中都可以使用


//    int i=0;
//    while(i<10)
//    {
//        test();
//        i++;
//    }



//    unsigned int num=100;//上下两个句式意思相同
//    u_int num=100;//typedef:用以给数据类型取别名
//    return 0;
//}


//1、define 定义宏
//#define add(X,Y) X+Y
//int main()
//{
//    printf("%d\n",add(3,6));//3+6=9
//    printf("%d\n",4*add(3,6));//4*3+6=18
//    return 0;
//}

//当((X)+(Y))时
//#define add(X,Y) ((X)+(Y))
//int main()
//{
//    printf("%d\n",add(3,6));//3+6=9
//    printf("%d\n",4*add(3,6));//4*(3+6)=36
//    return 0;
//}


//2、指针
//int main()
//{
//    int a= 10;
//    printf("%p\n",&a);//%p,专门用来打印地址
//    int *pa=&a;//pa用来存放地址，叫做指针变量
//    //*说明a是指针变量
//    //int说明a执行的对象是int类型的
//    //类似
//    char ch='w';
//    int *pc=&ch;//字符型指针
//    return 0;
//}

//* 解引用操作符 (指针——地址)
//int main()
//{
//    int a=10;
//    int *p=&a;
//    *p=20;//解引用，*pa就是通过pa里的地址找到a
//    printf("%d\n",a);
//    return 0;
//}


int main()
{
    printf("%d\n",sizeof(char*));     //4
    printf("%d\n",sizeof(short*));    //4
    printf("%d\n",sizeof(int*));      //4
    printf("%d\n",sizeof(long*));     //4
    printf("%d\n",sizeof(long long*));//4
    printf("%d\n",sizeof(float*));    //4
    printf("%d\n",sizeof(double*));   //4
    return 0;
    //指针用来存放地址
    //指针需要多大空间，取决于地址的存储需要多大空间
    //32位 32it 4byte
    //64位 64it 8byte
}


