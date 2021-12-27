#include <stdio.h>
#include <stdlib.h>

//P141
//自定义类型


//1、
//struct s
//{
//    char c;
//    int i;
//}s1, s2;
//struct b
//{
//    double d;
//    struct s s;
//    char c;
//};
//int main()
//{
//    struct b sb = {3.14, {'w', 100}, 'q'};
//    printf("%f %c %d %c\n", sb.d, sb.s.c, sb.s.i, sb.c);
//    return 0;
//}
//3.140000 w 100 q


//2、自定义大小
//结构体内存对齐
//1.结构体的第一个成员放在结构体变量在内存中存储位置的0偏移处开始
//2.从第二个成员往后的所有成员，都放在一个对齐数（成员的大小和默认对齐数的较小值）的整数的整数倍地址处
//3.结构体的总大小是结构体的所有成员的对齐数中最大的那个对齐数的整数倍
//struct S
//{
//    char c1;
//    int i;
//    char c2;
//};
//struct S2
//{
//    char c1;
//    int i;
//    double d;
//};
//struct S3
//{
//    char c1;
//    char c2;
//    int i;
//};
//struct S4
//{
//    double d;
//    char c;
//    int i;
//};
//struct S5
//{
//    char c1;
//    struct S4 s4;
//    double d;
//};

//修改默认对齐数为2
//#pragma pack(2)
//struct S6
//{
//    char c1;
//    int i;
//    char c2;
//};
//#pragma pack()
//
//int main()
//{
//    struct S s = {0};
//    struct S2 s2 = {0};
//    struct S3 s3 = {0};
//    struct S4 s4 = {0};
//    struct S5 s5 = {0};
//    printf("%d\n", sizeof(s));//12
//    printf("%d\n", sizeof(s2));//16
//    printf("%d\n", sizeof(s3));//8
//    printf("%d\n", sizeof(s4));//16
//    printf("%d\n", sizeof(s5));//32
//    printf("%d\n", sizeof(struct S6));//8
//    return 0;
//}


//3、offsetof
//offsetof(type, member-designator)
//是一个结构成员相对于结构开头的字节偏移量。成员是由 member-designator 给定的，结构的名称是在 type 中给定的
#include <stddef.h>
//struct S
//{
//    char c1;
//    int i;
//    char c2;
//};
//int main()
//{
//    printf("%d\n", offsetof(struct S, c1));//0
//    printf("%d\n", offsetof(struct S, i));//4
//    printf("%d\n", offsetof(struct S, c2));//8
//    return 0;
//}


//4、结构体传参
//用指针较好


//5、位段 - int类型，冒号后加数字
//struct A
//{
//    int _a : 2;//2字节
//    int _b : 5;//5字节
//    int _c : 10;//10字节
//    int _d : 30;//30字节
//};
//int main()
//{
//    printf("%d\n", sizeof(struct A));//8
//    return 0;
//}


//6、枚举
//enum Color
//{
//    RED,
//    GREEN,
//    BLUE
//};
//int main()
//{
//    printf("%d\n", RED);//0
//    printf("%d\n", GREEN);//1
//    printf("%d\n", BLUE);//2
//    return 0;
//}


//7、联合体 - 共用体，共用一块空间，一改一起改
//union Un
//{
//    char c;
//    int i;
//};
//int main()
//{
//    union Un u;
//    printf("%d\n", sizeof(union Un));//4
//    printf("%p\n", &u);//0060FEFC
//    printf("%p\n", &(u.c));//0060FEFC
//    printf("%p\n", &(u.i));//0060FEFC
//    return 0;
//}

//共用体应用
//查看大小端
//int check_sys()
//{
//    union U
//    {
//        char c;
//        int i;
//    }u;
//    u.i = 1;
//    return u.c;
//}
//int main()
//{
//    int ret = check_sys();
//    if(ret == 1)
//    {
//        printf("小端\n");
//    }
//    else
//    {
//        printf("大端\n");
//    }
//    return 0;
//}


//8、联合体成员大小
//大小至少是最大成员大小
//当最大成员大小不是最大对齐数的整数倍时，要对齐最大对齐数的整数倍
union UN
{
    char a[5];//1
    int i;//4
};
int main()
{
    printf("%d\n", sizeof(union UN));
    return 0;
}
