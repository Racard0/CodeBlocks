#include<stdio.h>

//一、演示多个字符从两端移动向中间汇聚

//####################
//w##################!
//we################!!
//wel##############!!!
//...
//welcome to bit!!!!!!

#include<string.h>
#include<windows.h>

//int main()
//{
//    char arr1[] = "welcome to bit!!!!!!";
//    char arr2[] = "####################";
//    int left = 0;
//    int right = strlen(arr2) - 1;
//
//    while (left <= right)
//    {
//        arr2[left] = arr1[left];
//        arr2[right] = arr1[right];
//        printf("%s\n", arr2);
//
//        Sleep(1000);//睡眠一秒
//        system("cls");//清空屏幕
//
//        left++;
//        right--;
//
//    }
//    printf("%s\n", arr2);
//    return 0;
//}


//二、模拟用户登录，且只能登录三次。如果三次均输入错误，则退出程序

//int main()
//{
//    int i = 0;
//    char password[20] = {0};
//    //假设密码为123456
//    for (i = 0; i < 3; i++)
//    {
//        printf("code:");
//        scanf("%s", password);
//        //if (password == "123456") // err - 两个字符串比较，不能使用==，应该使用strcmp
//        if (strcmp(password, "123456") == 0)
//            //strcmp - 字符串相等，返回0
//        {
//            printf("sucess!\n");
//            break;
//        }
//        else
//        {
//            printf("again!\n");
//        }
//    }
//    if (i == 3)
//    {
//        printf("out!\n");
//
//    }
//    return 0;
//}


//三、猜数字游戏
//1、自动产生一个1-100的随机数
//2、猜数字
//a.猜对了，恭喜你，游戏结束了
//b.猜错了，告诉你猜大了还是小了，继续猜，直到猜对
//3、可以一直玩，除非退出游戏

#include<stdlib.h>
#include<time.h>

//void menu()
//{
//    printf("******************\n");
//    printf("***** 1.play *****\n");
//    printf("***** 0.exit *****\n");
//    printf("******************\n");
//}
//
//void game()
//{
//    //猜数字游戏的实现
//    //1、生成随机数
//    //rand函数返回了一个0-32767之间的数字
//    //时间 - 时间戳
//
//    int num = rand() % 100 + 1;//%100的余数是0-99，然后+1，范围是1-100
//
//    //2、猜数字
//
//    int guess = 0;
//    while (1)
//    {
//        printf("number:");
//        scanf("%d", &guess);
//        if (guess < num)
//        {
//            printf("small\n");
//
//        }
//        else if (guess > num)
//        {
//            printf("big\n");
//        }
//        else
//        {
//            printf("yes\n");
//            break;
//        }
//    }
//}
//
//int main()
//{
//    int input = 0;
//    srand((unsigned int)time(NULL));
//
//    do
//    {
//        menu();//打开菜单
//        printf("choose:");
//        scanf("%d", &input);
//        switch (input)
//        {
//        case 1:
//            game();
//            break;
//        case 0:
//            printf("exit!");
//            break;
//        default:
//            printf("choose again!");
//            break;
//        }
//    }while (input);
//    return 0;
//}


//四、作业
//1、
//int main()
//{
//    int i = 0;
//    for (i = 0; i < 10; i++)
//    {
//        if (i = 5)//一个=为赋值，==为判断
//            printf("%d ", i);
//    }
//    return 0;
//}
//死循环5

//2、
//int func(int a)
//{
//    int b;
//    switch(a)
//    {
//    case 1:
//        b = 30;
//    case 2:
//        b = 20;
//    case 3:
//        b = 16;
//    default:
//        b = 0;
//    }
//    return b;
//}
//
//int main()
//{
//    printf("%d\n", func(1));
//    return 0;
//}
//func(1)=0,没有break

//3、
//int main()
//{
//    int x = 3;
//    int y = 3;
//    switch (x % 2)
//    {
//    case 1:
//        switch (y)
//        {
//            case 0:
//                printf("first");
//            case 1:
//                printf("second");
//                break;
//            default:
//                printf("hello");
//        }
//    case 2:
//        printf("third");
//
//    }
//    return 0;
//}
//hellothird


//4、
//将三个整数按从大到小输出
//爷第一次纯自己tm想出来的代码，第一次实现，好jb感动
//int main()
//{
//    int a = 0;
//    int b = 0;
//    int c = 0;
//    printf("number:");
//    scanf("%d %d %d",&a,&b,&c);
//    if (a > b)
//    {
//        if (b > c)
//        {
//            printf("%d %d %d\n", a, b, c);
//        }
//        else//b < c
//        {
//            if (a > c)
//            {
//                printf("%d %d %d\n", a, c, b);
//            }
//            else//a < c
//            {
//                printf("%d %d %d\n", c, a, b);
//            }
//        }
//    }
//    else//b > a
//    {
//        if (a > c)
//        {
//            printf("%d %d %d\n", b, a, c);
//        }
//        else//c > a
//        {
//            if (b > c)
//            {
//                printf("%d %d %d\n", b, c, a);
//            }
//            else//c > b
//            {
//                printf("%d %d %d\n", c, b, a);
//            }
//        }
//    }
//
//    return 0;
//}

//4、
//老师的代码
//int main()
//{
//    int a = 0;
//    int b = 0;
//    int c = 0;
//    scanf("%d%d%d", &a, &b, &c);
//    if (a < b)
//    {
//        int num = a;
//        a = b;
//        b = num;
//    }
//    if (a < c)
//    {
//        int num = a;
//        a = c;
//        c = num;
//    }
//    if (b < c)
//    {
//        int num = b;
//        b = c;
//        c = num;
//    }
//    printf("%d %d %d\n", a, b, c);
//    return 0;
//}
//方法好很多

//5、打印1-100中所有3的倍数
//自己写的
//int main()
//{
//    int i = 3;
//    do
//    {
//        printf("%d ", i);
//        i += 3;
//    }while (i <= 99);
//    return 0;
//}

//5、老师写的
//int main()
//{
//    int i = 0;
//    for (i=1; i <=100; i++)
//    {
//        if (i % 3 ==0)//判断是否为3的倍数，除三余数为0
//        {
//            printf("%d ",i);
//        }
//    }
//    return 0;
//}

//5、
//法2
//int main()
//{
//    int i = 0;
//    for (i = 3; i <= 100; i+=3)
//    {
//        printf("%d\n",i);
//    }
//    return 0;
//}

//6、
//给两个数，求这两个数的最大公约数
//int main()
//{
//    int i = 0;
//    int m = 0;
//    scanf("%d%d",&i,&m);
//    int max = 0;
//    //假设最大公约数就是m和i中的较小值
//
//    if (i < m)
//    {
//        max = i;
//    }
//    else
//    {
//        max = m;
//    }
//
//    while (1)
//    {
//        if (i % max == 0 && m % max == 0)
//        {
//            printf("最大公约数:%d\n", max);
//            break;
//        }
//        else
//        {
//            max--;
//        }
//    }
//    return 0;
//}

//6、
//法2
//辗转相除法
int main()
{
    int i = 0;
    int m = 0;
    scanf("%d%d",&i,&m);
    int t = 0;
    while (t = i%m)
    {
        i = m;
        m = t;
    }
    printf("最大公约数:%d\n",m);
    //最小公倍数 = i*m/最大公约数

    return 0;
}
