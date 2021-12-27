#include<stdio.h>

//P84
//结构体
struct abc
{
    char c;
    short s;
    double d;
};
struct stu
{
    struct abc e;//结构体的成员可以是其他结构体
    char name[20];
    int age;
    char id[20];
}s,b;
//s,b是结构体的变量，也是全局变量

void print1(struct stu l)//传值
{
    printf("%c %d %lf %s %d %s\n", l.e.c, l.e.s, l.e.d, l.name, l.age, l.id);
    //w 20 3.140000 LI 66 250
}
void print2(struct stu* pl)//传址
{
    printf("%c %d %lf %s %d %s\n", pl->e.c, pl->e.s, pl->e.d, pl->name, pl->age, pl->id);
    //w 20 3.140000 LI 66 250
}
int main()
{
    struct stu l = {{'w', 20, 3.14}, "LI", 66, "250"};//l是对象
    //l是结构体的局部变量

    //. -> 结构体访问操作符
    printf("%c\n", l.e.c);//%c - 字符
    //访问l里面e的c
    //w
    printf("%s\n", l.id);//%s - 字符串
    //250

    //指针
    struct stu* pl = &l;
    printf("%c\n", (*pl).e.c);
    //w
    printf("%c\n", pl->e.c);
    //w

    print1(l);//传值调用
    print2(&l);//传址调用

    return 0;
}
