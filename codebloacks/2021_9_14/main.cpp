#include<stdio.h>

//1、结构体
//struct stu//创建一个学生类型
//{
//    char name[20];//成员变量
//    int age;
//    double score;
//};
//struct book//创建一个图书类似
//{
//    char name[20];
//    float price;
//    char id[30];
//};
//int main()
//{              //l的的学生的名字，年龄，成绩
//    struct stu l={"dong",21,100};//结构体的创建和初始化
//    printf("1：%s %d %lf\n",l.name,l.age,l.score);
//                        //结构体变量.成员变量
//
//    struct stu *pl=&l;//结构体指针
//    printf("2：%s %d %lf\n",(*pl).name,(*pl).age,(*pl).score);
//    //结果与之前相同
//
//    printf("3：%s %d %lf\n",pl->name,pl->age,pl->score);
//    //结构体指针->成员变量名
//    //结果相同
//
//
//    return 0;
//
//}


////作业
//（1）输出的值
//int num=10;
//int main()
//{
//    int num=1;
      //局部优先
//    printf("num=%d\n",num);//1
//    return 0;
//
//}


#include<string.h>
//int main()
//{
//    char arr[]={'b','i','t'};
//    printf("%d\n",strlen(arr));//应该为随机值，在这为4，在vs上随机
//    return 0;
//}

//int main()
//{
//
//    printf("%d\n",strlen("c:\test\121"));//字符串长度，\121为一个字符串
//    return 0;
//}


//用函数输出较大值
int max(int x,int y)
{
    if(x>y)
        return x;
    else
        return y;
}
int main()
{
    int a=0;
    int b=0;
    scanf("%d %d",&a,&b);
    int c=max(a,b);
    printf("%d\n",c);
}



