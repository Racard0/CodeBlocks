#include<stdio.h>

//P106
//作业

//一、算术转换

//1、
//int i;
//int main()
//{
//    i--;
//    if(i > sizeof(i))
//    //sizeof算出的结果是unsiged int
//    //会把int转化为为无符号整型再计算
//    {
//        printf(">\n");
//    }
//    else
//    {
//        printf("<\n");
//    }
//    return 0;
//}
//>

//2、计算一个数前五项之和
//例如：2+22+222+2222+22222
//myself
//int sn(int i)
//{
//    int num = 0;
//    int x = 10;
//    int y = 0;
//    for(int n = 1; n <= 5; n++)
//    {
//        i = i + num;
//        num = 2 * x;
//        x *= 10;
//        y += i;
//    }
//    return y;
//}
//int main()
//{
//    int i = 2;
//    printf("%d\n", sn(i));
//    return 0;
//}

//teacher
//int main()
//{
//    int a = 0;
//    int n = 0;
//    scanf("%d %d", &a, &n);
//    int sum = 0;
//    int ret = 0;
//    for(int i = 0; i < n; i++)
//    {
//        ret = ret * 10 + a;
//        sum += ret;
//    }
//    printf("sum=%d\n", sum);
//    return 0;
//}

//3、使用指针，打印arr的数组内容
//法一
//int main()
//{
//    int arr[] = {1,2,3,4,5};
//    int *parr = arr;
//    int sz = sizeof(arr) / sizeof(arr[0]);
//    for(int i = 0; i < sz; i++)
//    {
//        printf("%d ", *(parr+i));
//    }
//    printf("\n");
//    return 0;
//}

//法二
//int main()
//{
//    int arr[] = {1,2,3,4,5,6,7,8,9};
//    int sz = sizeof(arr) / sizeof(arr[0]);
//    int *parr = arr;//1的地址
//    int *pend = arr + sz - 1;
//    while(parr <= pend)
//    {
//        printf("%d ", *parr);
//        parr++;
//    }
//    printf("\n");
//    return 0;
//}

//4、求0~100000之间的所有“水仙花数”并输出
//水仙花数 - 一个n位数，其各位数组的n次方之和等于该数本身
//例153=1^3+5^3+3^3=153
//myself
//int main()
//{
//    int i,a,b,c,d,e,f,g;
//    for(i = 0; i <= 100000; i++)
//    {
//        if(i >= 0 && i <= 9)
//        {
//            printf("%d ", i);
//        }
//        if(i >= 100 && i <= 999)
//        {
//            a = i / 100;//百位
//            b = i / 10 % 10;//十位
//            c = i % 10;//个位
//            if(i == a*a*a+b*b*b+c*c*c)
//            {
//                printf("%d ", i);
//            }
//        }
//        if(i >= 1000 && i <=9999)
//        {
//            a=i / 1000;//千位
//            b=i % 1000 / 100;//百位
//            c=i % 1000 % 100 / 10;//十位
//            d=i % 10;//个位
//            if(i == a*a*a*a+b*b*b*b+d*d*d*d+c*c*c*c)
//            {
//                printf("%d ",i);
//            }
//        }
//        if(i >= 10000 && i <= 99999)
//        {
//            a=i / 10000;//万位
//            b=i % 10000 / 1000;//千位
//            c=i % 10000 % 1000 / 100;//百位
//            d=i % 10000 % 1000 % 100 / 10;//十位
//            e=i % 10;//个位
//            if(i == a*a*a*a*a+b*b*b*b*b+d*d*d*d*d+c*c*c*c*c+e*e*e*e*e)
//            {
//                printf("%d ",i);
//            }
//        }
//    }
//    return 0;
//}
//0 1 2 3 4 5 6 7 8 9 153 370 371 407 1634 8208 9474 54748 92727 93084

//teacher
#include<math.h>
//int main()
//{
//    int i = 0;
//    for(i = 0; i <= 100000; i++)
//    {
//        //判断i是否是自幂数
//        //1、计算i的位数 - n
//        int n = 1;
//        int tmp = i;
//        while(tmp / 10)
//        {
//            n++;
//            tmp = tmp / 10;
//        }
//
//        //2、计算i的每一位n次立方之和
//        tmp = i;
//        int sum = 0;
//        while(tmp)
//        {
//            //pow用来求次方
//            sum += pow(tmp % 10, n);
//            tmp = tmp / 10;
//        }
//
//        //3、判断
//        if(sum == i)
//        {
//            printf("%d ", i);
//        }
//    }
//    return 0;
//}
//0 1 2 3 4 5 6 7 8 9 370 371 407 1634 8208 9474 54748 92727 93084




//二、指针初阶
//P106

//1、
//int main()
//{
//    unsigned long pulArray[] = {6,7,8,9,10};
//    unsigned long *pulPtr;
//    pulPtr = pulArray;
//    *(pulPtr + 3) += 3;
//    printf("%d,%d\n", *pulPtr, *(pulPtr + 3));
//    return 0;
//}
//6,12

//2、
//struct stu
//{
//    int num;
//    char name[10];
//    int age;
//};
//void fun(struct stu *p)
//{
//    printf("%s\n", (*p).name);
//    return;
//}
//int main()
//{
//    struct stu students[3] = {{9801, "zhang", 20}, {9802, "wang", 19}, {9803, "zhao", 18}};
//    fun(students + 1);
//    return 0;
//}
//wang

//3、逆序字符串
#include<string.h>
//法一
//void reverse(char *left, char *right)
//{
//    while(left < right)
//    {
//        char tmp = 0;
//        tmp = *left;
//        *left = *right;
//        *right = tmp;
//
//        left++;
//        right--;
//    }
//}
//int main()
//{
//    char arr[] = "dbtxyyds";
//    int len = strlen(arr);
//    reverse(arr, arr + len - 1);
//    printf("%s\n", arr);
//    return 0;
//}
//sdyyxtbd

//法二
#include<assert.h>
//void reverse(char *str)
//{
//    assert(str);
//    int len = strlen(str);
//
//    char *left = str;
//    char *right = str + len - 1;
//
//    while(left < right)
//    {
//        char tmp = 0;
//        tmp = *left;
//        *left = *right;
//        *right = tmp;
//        left++;
//        right--;
//    }
//}
//int main()
//{
//    char arr[] = "destroyer";
//    reverse(arr);
//    printf("%s\n", arr);
//    return 0;
//}

//4、打印菱形
//int main()
//{
//    int line = 0;
//    scanf("%d", &line);
//
//    //上半部分
//    int i = 0;
//    for(i = 0; i < line; i++)
//    {
//        //打印一行
//        //打印空格
//        int j = 0;
//        for(j = 0; j < line - 1 - i; j++)
//        {
//            printf(" ");
//        }
//        //打印*
//        for(j = 0; j < 2 * i + 1; j++)
//        {
//            printf("*");
//        }
//        printf("\n");
//    }
//
//    //下半部分
//    for(i = 0; i < line - 1; i++)
//    {
//        //空格
//        int j = 0;
//        for(j = 0; j <= i; j++)
//        {
//            printf(" ");
//        }
//
//        //*
////        for(j = 0; j < 2*(line-i)-3; j++)
//        for(j = 0; j < 2*(line - 1 - i) - 1; j++)
//        {
//            printf("*");
//        }
//        printf("\n");
//    }
//    return 0;
//}

//5、一瓶汽水1元，两个空瓶可以换一瓶汽水，给20元可以喝多少汽水
//39瓶
int main()
{
    int money = 0;
    scanf("%d", &money);
    int total = money;
    int empty = money;
    //置换
    while(empty >= 2)
    {
        total += empty / 2;
        empty = empty / 2 + empty % 2;
    }
    printf("%d\n", total);
    return 0;
}
























//int main()
//{
//    int i,a,b,c,d,e,f,g;
//    printf("'water flower'number is:");
//    for(i=10000;i<100000;i++)
//    {
//        a=i/10000;//万位
//        b=i%10000/1000;//千位
//        c=i%10000%1000/100;//百位
//        d=i%10000%1000%100/10;//十位
//        e=i%10;//个位
//        if(i==a*a*a*a*a+b*b*b*b*b+d*d*d*d*d+c*c*c*c*c+e*e*e*e*e)
//        {
//            printf("%d ",i);
//        }
//    }
//    printf("\n");
//    return 0;
//}
