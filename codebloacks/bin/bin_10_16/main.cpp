#include <stdio.h>
//int main()
//{
//
//	float a = 0;
//	float b = 0;
//	printf("a=");
//	scanf("%f", &a);
//	printf("b=");
//	scanf("%f", &b);
//	printf("两数之和:%f\n", a + b);
//	printf("两数之差:%f\n", a - b);
//	printf("两数之积:%f\n", a * b);
//	printf("两数之商:%f\n", a / b);
//    printf("1984340026     黄文龙");
//    return 0;
//}

//斐波那契
//int fib (int a)
//{
//    if (a < 2)
//    {
//        return a;
//    }
//    else
//    {
//        return fib(a-1)+fib(a-2);
//    }
//}
//int main()
//{
//    int a = 0;
//    scanf("%d", &a);
//    int ret = fib(a);
//    printf("%d\n", ret);
//    return 0;
//}

//斐波那契2
long long fib(int i)
{
    return i < 2 ? i : fib(i - 1) + fib(i - 2);
}
int main()
{
    int  i = 0;
    scanf("%d", &i);
    fib(i);
    printf("%d\n", fib(i));
    return 0;
}
