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
//	printf("����֮��:%f\n", a + b);
//	printf("����֮��:%f\n", a - b);
//	printf("����֮��:%f\n", a * b);
//	printf("����֮��:%f\n", a / b);
//    printf("1984340026     ������");
//    return 0;
//}

//쳲�����
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

//쳲�����2
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
