#include<stdio.h>

//一、 函数递归 - 函数自己调用自己
//递归的主要思考方式：大事化小

//必要条件
//*存在限制条件，当满足限制条件，递归便不再继续
//*每次递归后越来越接近这个限制条件
//*不能死递归
//int main()
//{
//    printf("hehe\n");
//    main();
//
//    return 0;
//}

//1、接受一个整型值，按顺序打印它的每一位
//输入1234，打印1 2 3 4
void print(unsigned int n)
{
    if (n > 9)
    {
        print(n / 10);//递归

    }
    printf("%d ", n % 10);
}

int main()
{
    unsigned int num = 0;//无符号整型
    scanf("%u", &num);//%u无符号整型
    print(num);

    return 0;
}
//1234%10=4
//1234/10=123 123%10=3
//123/10=12   12%10=2
//12/10=1
