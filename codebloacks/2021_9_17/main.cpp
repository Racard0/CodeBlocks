#include <stdio.h>

//一、分支语句 switch

//1、用1-7指代星期一到星期天
//int main()
//{
//    int day = 0;
//    scanf("%d", &day);
//    switch(day)
//    {
//    case 1+0://入口，输入语句
//        printf("monday\n");
//        break;//出口，跳出语句
//    case 2:
//        printf("thuesday\n");
//        break;
//    case 3:
//        printf("wednesday\n");
//        break;
//    case 4:
//        printf("thursday\n");
//        break;
//    case 5:
//        printf("friday\n");
//        break;
//    case 6:
//        printf("saturday\n");
//        break;
//    case 7:
//        printf("sunday\n");
//        break;
//
//    }
//    return 0;
//}

//2、1-5为工作日，6、7为休息日
//int main()
//{
//    int day = 0;
//    scanf("%d", &day);
//    switch(day)
//    {
//    case 1:
//    case 2:
//    case 3:
//    case 4:
//    case 5:
//        printf("workday\n");
//        break;
//    case 6:
//    case 7:
//        printf("holiday\n");
//        break;
//
//    }
//    return 0;
//}

//3、default, 提示
//int main()
//{
//    int day = 0;
//    scanf("%d", &day);
//    switch(day)
//    {
//    case 1:
//    case 2:
//    case 3:
//    case 4:
//    case 5:
//        printf("workday\n");
//        break;
//    case 6:
//    case 7:
//        printf("holiday\n");
//        break;
//    default:
//        printf("default\n");
//        break;
//    }
//    return 0;
//}
//输出超过规定值，提示

//4、
//int main()
//{
//    int n = 1;
//    int m = 2;
//    //scanf("%d %d", &n, &m);
//    switch (n)//switch(n)允许嵌套使用
//    {
//    case 1:
//        m++;//m=3
//    case 2:
//        n++;//n=2
//    case 3:
//        switch (n)
//        {
//        case 1://n=2 不执行case 1
//            n++;
//        case 2:
//            m++;//m=4
//            n++;//n=3
//            break;
//        }
//    case 4:
//        m++;//m=5
//        break;
//    default:
//        break;
//
//    }
//    printf("m = %d, n = %d\n", m, n);
//    return 0;
//}
//m=5 n=3



//二、循环语句 while

//1、打印1-10
//int main()
//{
//    int num = 1;
//    while (num <= 10)//判断表达式
//    {
//        printf("%d ", num);
//        num ++;
//    }
//    return 0;
//}

//break中止
//int main()
//{
//    int num = 1;
//    while (num <= 10)//判断表达式
//    {
//        if (num == 5)
//            break;
//            //在while循环中，用于中止循环
//        printf("%d ", num);
//        num ++;
//    }
//    return 0;
//}
//1 2 3 4

//continue跳过
//int main()
//{
//    int num = 1;
//    while (num <= 10)//判断表达式
//    {
//        if (num == 5)
//            continue;
//            //在while循环中，跳过本次循环continue后面的代码直接去判断，看是否进行下一次循环
//        printf("%d ", num);
//        num ++;
//    }
//    return 0;
//}
//1 2 3 4 死循环
//无法结束

//getchar,从标准输入(键盘缓冲区)获取一个字符
//EOF,end of file,文件结束标志
//int main()
//{
//    int ch = getchar();
////    printf("%c\n", ch);
//    putchar(ch);//输出一个字符，与上一行相同
//    return 0;
//}
//输入输出字符

//int main()
//{
//    int ch = 0;
//    while ((ch = getchar()) !=EOF)//ctrl+z,getchar读取结束，进入EOF
//    {
//        putchar(ch);
//    }
//    return 0;
//}
//同上

//处理缓冲区
//int main()
//{
//    char pw[20] = {0};
//    printf ("code：");
//    scanf ("%s",pw);
//    printf ("confirm(y/n)：");
//
//    //清理缓冲区
//    //getchar();//处理'\n'，但只能清理单个
//    //
//
//    //清理缓冲区多个字符
//    int tmp = 0;
//    while ((tmp = getchar()) != '\n')
//    {
//        ;
//    }
//    //
//
//    int ch = getchar();
//    if (ch == 'y')
//    {
//        printf("success");
//    }
//    else
//    {
//        printf("failure");
//    }
//    return 0;
//}


//处理缓冲区2
//int main()
//{
//    int ch = 0;
//    while ((ch = getchar()) != EOF)
//    {
//        if (ch < '0' || ch > '9')
//            //小于‘0’，大于‘9’，除了数字的所有ASCII的值
//            continue;
//
//        putchar(ch);
//    }
//    return 0;
//}
//只打印数字，不答应字母



//三、for循环

//1、打印1-10
//int main()
//{
//    int i = 0;
//       //初始化；判断；调整
//       //for循环的特点是初始化部分只执行一次
//    for (i=1; i <= 10; i++)
//    {
//        printf("%d ", i);
//
//    }
//    return 0;
//}

//continue
//int main()
//{
//    int i = 0;
//    for (i = 1; i <= 10; i++)
//    {
//        if (i == 5)
//            continue;
//
//        printf("%d ", i);
//    }
//    return 0;
//}
//1 2 3 4 6 7 8 9 10

//break
//int main()
//{
//    int i = 0;
//    for (i = 1; i <= 10; i++)
//    {
//        if (i == 5)
//            break;
//
//        printf("%d ", i);
//    }
//    return 0;
//}
//1 2 3 4

//变种
//int main()
//{
//    for (;;)
//    {
//        printf("ok\n");
//    }
//    return 0;
//}
//死循环
//都可省略，省略判断部分，判断部分恒为真

//变2
//int main()
//{
//    int i = 0;
//    int j = 0;
//    for (i = 0; i < 3; i++)
//    {
//        for (j = 0; j < 3; j++)
//        {
//            printf("wc\n");
//        }
//    }
//    return 0;
//}
//九次wc

//变3
//int main()
//{
//    int i = 0;
//    int j = 0;
//    for (; i < 3; i++)
//    {
//        for (; j < 3; j++)
//        {
//            printf("wc\n");
//        }
//    }
//    return 0;
//}
//三次wc

//变4
//int main()
//{
//    int x, y;
//    for (x = 0, y = 0; x < 2 && y < 5; ++x, y++)//&&，逻辑“与”运算符
//    {
//        printf("wc\n");
//    }
//    return 0;
//}

//循环多少次
int main()
{
    int i = 0;
    int k = 0;
    for (i = 0, k = 0; k = 0; i++, k++)
        //一个等于为赋值，两个等于是判断，判断为k=0，判断条件为假，一次都不循环
        k++;
    return 0;
}
//不循环
