//P2
//ʱ�临�Ӷ�

#include <stdio.h>

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
//long long fib(int i)
//{
//    return i < 2 ? i : fib(i - 1) + fib(i - 2);
//}
//int main()
//{
//    int  i = 0;
//    scanf("%d", &i);
//    fib(i);
//    printf("%d\n", fib(i));
//    return 0;


//��ʦ�Ż�
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

#include<malloc.h>
//쳲�����2
//long long fib_r(size_t N)
//{
//    return N < 2 ? N : fib_r(N-1)+fib_r(N-2);
//}
long long *fib(size_t N)
{
    long long *fibarray = malloc(sizeof(long long)*(N+1));
    fibarray[0] = 0;
    if (N == 0)
    {
        return fibarray;
    }

    fibarray[1] = 1;
    //�Կռ任ʱ��
    for (int i = 2; i <= N; ++i)
    {
        fibarray[i] = fibarray[i-1] + fibarray[i-2];
    }
    return fibarray;
}
int main()
{
    printf("%d\n", fib(10));
    return 0;
}

