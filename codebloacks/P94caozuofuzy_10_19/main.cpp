#include<stdio.h>

//P94
//��������ҵ

//1�����
//int main()
//{
//    int a,b,c;
//    a = 5;
//    c = ++a;
//    b = ++c, c++, ++a, a++;
//    b += a++ + c;
//    printf("a=%d b=%d c=%d\n", a, b, c);
//    return 0;
//}
//a=9 b=23 c=8

//2�����һ������������1�ĸ����������ò���
//�Լ�д��
//int main()
//{
//    unsigned int n = 0;
//    //��֤����Ҳ�ܲ�������
//    scanf("%d", &n);
//    int count = 0;
////    if(n<0)
////    {
////        n = -n;
////    }
//    while(n)
//    {
//        if(n & 1 == 1)
//        //& - "��",ȫ1Ϊ1��һ0Ϊ0
//        {
//            count++;
//        }
//        n = n >> 1;
//    }
//    printf("%d\n", count);
//    return 0;
//}

//��ʦ
//int NumberOf1(int n)
//{
//    int count = 0;
//    for(int i = 0; i < 32; i++)
//    {
//        if((n >> i) & 1 == 1)//���&���룩1��Ϊ1��& - ȫ1Ϊ1��һ0Ϊ0
//        {
//            count++;
//        }
//    }
//    return count;
//}

//����
//int NumberOf1(int n)
//{
//    int count = 0;
//    int i = 0;
//    while(n)
//    {
//        n = n & (n-1);
//        //ÿ��nȥһ��1
//        //ÿ��һ�μ�1
//        count++;
//    }
//    return count;
//}
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    printf("%d\n", NumberOf1(n));
//    return 0;
//}

//3���ж�һ�����ǲ���2�Ĵη�
//myself
//int cifang(int n)
//{
//    int count = 0;
//    int i = 1;
//    while(i != n)
//    {
//        i *= 2;
//        count++;
//    }
//    return count;
//}
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    printf("%d\n", cifang(n));
//    return 0;
//}

//teacher
//int cifang(int n)
//{
//    int i = n&(n-1);
//    //2�Ĵη��Ķ�����ֻ��һ��1
//    //���磺8
//    //n:  001000
//    //n-2:000111
//    //&:  000000��ȫ1Ϊ1��
//    if(i == 0)
//    {
//        return 1;
//    }
//    else
//    {
//        return 0;
//    }
//}
//int main()
//{
//    int n = 4;
//    scanf("%d", &n);
//    int ret = cifang(n);
//    if(ret == 1)
//    {
//        printf("yes!\n");
//    }
//    else
//    {
//        printf("no~\n");
//    }
//    return 0;
//}


//4��
//�������������������Ƕ����Ʋ�ͬ�ĸ���
//myself
//int bu_tong(int m ,int n)
//{
//    int i = m ^ n;
//    int count = 0;
//    while(i)
//    {
//        i = i & (i-1);
//        //ÿ��nȥһ��1
//        //ÿ��һ�μ�1
//        count++;
//    }
//    return count;
//}
//int main()
//{
//    int m = 0;
//    int n = 0;
//    scanf("%d%d", &m, &n);
//    printf("%d\n", bu_tong(m,n));
//    return 0;
//}

//��ʦ
//int main()
//{
//    int m = 0;
//    int n = 0;
//    scanf("%d%d", &m, &n);
//    int count = 0;
//    for(int i = 0; i < 32; i++)
//    {
//        if(((m >> i) & 1) != ((n >> i) & 1))
//        {
//            count++;
//        }
//    }
//    printf("%d\n", count);
//    return 0;
//}


//5���ֱ��ӡһ����������������λ��ż��λ
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int i = 0;
//    //ż��λ
//    for(i = 31; i >= 1; i -= 2)
//    {
//        printf("%d ", (n >> i) & 1);
//    }
//
//    printf("\n");
//    //����λ
//    for(i = 30; i >= 0; i -= 2)
//    {
//        printf("%d ", (n >> i) & 1);
//    }
//    return 0;
//}


//6�����������������ݣ����������������
//int main()
//{
//    int a = 0;
//    int b = 0;
//    scanf("%d%d", &a, &b);
//    //��a=10 b=20
//    //a - 001010
//    //b - 010100
//    a = a ^ b;
//    //a - 011110
//    b = a ^ b;
//    //b - 001010
//    a = a ^ b;
//    //a - 010100
//    printf("a=%d b=%d\n", a, b);
//    return 0;
//}

//6�����
int main()
{
    int arr[] = {1,2,3,4,5};
    short* p = (short*)arr;
    int i = 0;
    for(i = 0; i < 4; i++)
    {
        *(p + i) = 0;
    }
    for(i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
//С�˴洢
//0 0 3 4 5

