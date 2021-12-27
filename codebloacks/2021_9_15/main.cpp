#include<stdio.h>

//一、作业
//1、输出的结果
//int sum(int a)
//{
//    int c=0;
//    static int b=3;
//    c +=1;
//    b +=2;
//    return(a+b+c);
//}
//int main()
//{
//    int i;
//    int a=2;
//    for(i=0;i<5;i++)
//    {
//        printf("%d,",sum(a));
//    }
//}
//结果为 8 10 12 14 16

//2、输出一个小飞机
//int main()
//{
//    printf("     **     \n");
//    printf("     **     \n");
//    printf("************\n");
//    printf("************\n");
//    printf("    *  *    \n");
//    printf("    *  *    \n");
//
//    return 0;
//}


//3、输入一个整数M(1<=M<=100000)。如果M可以被5整除就输出YES，否则输出NO
//int main()
//{
//    //输入
//    int m=0;
//    printf("请输入一个整数:");
//    scanf("%d",&m);
//
//    //判断并输出
//    if(m%5==0)
//        printf("YES\n");
//    else
//        printf("NO\n");
//    return 0;
//
//}



//二、分支语句 if else
//1、双分支
//int main()
//{
//    int age=0;
//    scanf("%d",&age);
//    if(age>=18)
//        printf("成年\n");
//    else
//    {
//        printf("weichennian\n");
//        printf("bunengtanlianai\n");
//    }
//    //if else 后面只能执行一条语句
//    //要执行两条以上需加大括号
//    return 0;
//}

//2、多分支
//int main()
//{
//    int age=0;
//    scanf("%d",&age);
//    if(age<18)
//        printf("shao nian\n");
//    else if(age>=18 && age<26)//&& 逻辑“与”运算符，不能使用 18<=age<26 这种格式，会分开判断、运算错误。
//                              //也可写成(age<26) 在逻辑上相同
//        printf("qing nian\n");
//    else if(age>=26 && age<50)//(age<50)
//        printf("zhuang nian\n");
//    else if(age>=50 && age<100)//(age<100)
//        printf("lao nian\n");
//    else
//        printf("chang shou lao ren\n");
//    return 0;
//}

//3、悬空else问题
//int main()
//{
//    int a=0;
//    int b=2;                                        //应该为
//    if(a==1)                                        // {
//        if(b==2)                                    //    if(b==2)
//            printf("heh\n");//                      //        printf("heh\n");
//        else                                        //    else
//            printf("hah\n");//相邻的 if else 相关   //        printf("hah\n");
//    return 0;                                       // }
//    //此代码结果为空
//}

//4、判断为奇数还是偶数
//int main()
//{
//    int num = 0;
//    scanf ("%d", &num);
//    if (num % 2 == 1)
//    {
//        printf ("奇数\n");
//    }
//    else
//    {
//        printf ("偶数\n");
//    }
//    return 0;
//}

//5、输出1-100之间的奇数
//方法一
//int main()
//{
//    int num = 0;
//    int count = 0;//计数，有多少奇数
//    for (num = 1; num < 101; num++)
//    {
//        if (num % 2 == 1)
//        {
//            printf("%d ", num);
//            count++;
//        }
//    }
//    printf("\ncount=%d\n", count);
//    return 0;
//
//}

//方法二
int main()
{
    int num = 0;
    for (num = 1; num <= 100; num += 2)//A += B  等同于  A=A+B
        {
            printf("%d ", num);
        }
    return 0;
}
