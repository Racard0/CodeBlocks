#include<stdio.h>

//P95
//����


//1�����
//int cnt = 0;
//int fib(int n)
//{
//    cnt++;
//    if(n == 0)
//    {
//        return 1;
//    }
//    else if(n == 1)
//    {
//        return 2;
//    }
//    else
//    {
//        return fib(n - 1) + fib(n - 2);
//    }
//}
//int main()
//{
//    fib(8);
//    printf("%d\n", cnt);
//}
//67
//��״ͼ


//2�����
//int main()
//{
//    int x = 1;
//    do
//    {
//        printf("%2d\n", x++);
//    }while(x--);
//    return 0;
//}
//��ѭ��


//3�����
//int a = 1;
//void test()
//{
//    int a = 2;
//    a += 1;
//}
//int main()
//{
//    test();
//    printf("%d\n", a);
//    return 0;
//}
//1
//ȫ�ֱ���


//4��yֵ
//int main()
//{
//    double x = 2;
//    double y = x + 3/2;
////    double y = x + 3.0/2;
//    //��ӡС�����
//    printf("y=%lf\n", y);
//    return 0;
//}
//y=3.000000


//5������������С������
//myself
//int gong_beishu(int a, int b)
//{
//    if(a % b == 0)
//    {
//        return a;
//    }
//    else if(b % a == 0)
//    {
//        return b;
//    }
//    else
//    {
//        return a*b;
//    }
//}
//int main()
//{
//    int a = 0;
//    int b = 0;
//    scanf("%d%d", &a, &b);
//    printf("%d\n", gong_beishu(a,b));
//    return 0;
//}

//teacher
//int main()
//{
//    int a = 0;
//    int b = 0;
//    scanf("%d%d", &a, &b);
//    int m = a>b?a:b;
//    while(1)
//    {
//        if(m%a==0 && m%b==0)
//        {
//            printf("%d\n", m);
//            break;
//        }
//        m++;
//    }
//    return 0;
//}

//teacher2
//int main()
//{
//    int a = 0;
//    int b = 0;
//    scanf("%d%d", &a, &b);
//    int i = 1;
//    for(i = 1; ; i++)
//    {
//        if(a*i%b == 0)
//        {
//            printf("%d\n", a*i);
//            break;
//        }
//    }
//    return 0;
//}


//6����һ�仰�ĵ��ʵ��ã���㲻����
//i like beijing.
//beijing. like i
#include<string.h>
void reverse(char* left, char* right)
{
    while(left < right)
    {
        char tmp = 0;
        tmp = *left;
        *left = *right;
        *right = tmp;

        left++;
        right--;
    }
}
int main()
{
    char arr[100] = {0};
    gets(arr);
    //gets()������STDIN(��׼����)��ȡ�ַ��������Ǽ��ص�str(�ַ���)��,
    //ֱ����������(\n)�򵽴�EOF. �����ַ�����Ϊһ��null�жϷ�.
    //gets()�ķ���ֵ�Ƕ�����ַ���,������󷵻�NULL.

    //������ת��
    //1���ַ������巭ת
    int len = strlen(arr);
    reverse(arr, arr+len-1);

    //2��ÿ����������
    char* start = arr;
    while(*start)
    {
        char* end = start;
        while(*end != ' ' && *end != '\0')
        {
            end++;
        }

        //����һ������
        reverse(start, end - 1);
        if(*end == ' ')
        {
            start = end+1;
        }
        else
        {
            start = end;
        }
    }
    printf("%s\n", arr);
    return 0;
}
