#include<stdio.h>

//һ�������ݹ�

//1����д��������������ʱ���������ַ����ĳ���
//ģ��ʵ��һ��strlen����
//(1)����ʱ���� - count������
//int mystrlen(char *str)
//{
//    int count = 0;
//    while (*str != '\0')
//    {
//        count++;
//        str++;
//    }
//    return count;
//}
//
//int main()
//{
//    char arr[] = "ldy";
//    //['l']['d']['y']['\0']
//
//    printf("%d\n", mystrlen(arr));
//    return 0;
//}

//(2)�ݹ� - ����ʱ����
//int my2strlen(char *str)
//{
//    if (*str != '\0')
//    {
//        return 1 + my2strlen(str + 1);
//    }
//    else
//    {
//        return 0;
//    }
//}
//
//int main()
//{
//    char arr[] = "dbtx";
//    printf("%d\n", my2strlen(arr));
//    return 0;
//}

//�����ݹ������
//ѭ����һ�ֵ����ķ���

//1����n�Ľ׳�
//int fac(int n)
//{
//    if (n <= 1)
//    {
//        return 1;
//    }
//    else
//    {
//        return n*fac(n - 1);
//    }
//}
//
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//
//    int ret = fac(n);
//
//    printf("%d\n", ret);
//    return 0;
//}

//2�����n��쳲�������
//ǰ����֮�͵��ڵ�������
//��0��ͷ��
//int fi(int n)
//{
//    if (n == 1)
//    {
//        return 0;
//
//    }
//    else if (n == 2)
//    {
//        return 1;
//    }
//    else
//    {
//        return fi(n-1)+fi(n-2);
//    }
//}
//
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int fibo = fi(n);
//    printf("%d\n", fibo);
//    return 0;
//}

//��1��ʼ
//int fi(int n)
//{
//    if (n <= 2)
//    {
//        return 1;
//    }
//
//    else
//    {
//        return fi(n-1)+fi(n-2);
//    }
//}
//
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int fibo = fi(n);
//    printf("%d\n", fibo);
//    return 0;
//}
//�˷���Ч�ʽϵ�

//�������� - �ٶȽϿ�
int fi(int n)
{
    int a = 1;
    int b = 1;
    int c = 1;
    while (n > 2)
    {
        c = a + b;//��λ
        a = b;
        b = c;
        n--;//nС�ڵ���2ֱ�����n=1
    }
    return c;
}

int main()
{
    int n = 0;
    scanf("%d", &n);
    int fibo = fi(n);
    printf("%d\n", fibo);
    return 0;
}
