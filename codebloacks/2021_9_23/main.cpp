#include<stdio.h>
//һ������

//1��дһ��������ÿ����һ�Σ�numֵ��1
//void add(int *p)
//{
//    (*p)++;
//}
//
//int main()
//{
//    int num = 0;
//    add(&num);
//    printf("%d\n", num);//1
//
//    add(&num);
//    printf("%d\n", num);//2
//
//    add(&num);
//    printf("%d\n", num);//3
//
//    add(&num);
//    printf("%d\n", num);//4
//    return 0;
//}


//����������Ƕ�׵��ú���ʽ����
//1��Ƕ�׵���
//void test2()
//{
//    printf("hehe\n");
//}
//
//int test1()
//{
//    test2();
//    return 0;
//}
//int main()
//{
//    test1();
//    return 0;
//}

//2����ʽ���� - ��һ�������ķ���ֵ��Ϊ��һ�������Ĳ���
#include<string.h>
//int main()
//{
//    int len = strlen("abc");
//    printf("%d\n", strlen("abc"));
//    return 0;
//}

//int main()
//{
//    char arr1[20] = {0};
//    char arr2[] = "bit";
//
//    printf("%s\n", strcpy(arr1, arr2));
//    return 0;
//}

//int main()
//{
//    printf("%d", printf("%d", printf("%d",43)));
//    //�������ص��Ǵ�ӡ����Ļ�ϵ��ַ��ĸ���
//    return 0;
//}
//4321


//���������������Ͷ���
//����������һ������ں�����ʹ��֮ǰ��Ҫ������������ʹ��
//������ǰ����
//
//int main()
//{
//    int a = 10;
//    int b = 20;
//
//    //�������� - ��֪��(������������������)
//    int add(int, int );
//
//    int c = add(a, b);
//    printf("%d\n", c);
//    return 0;
//
//}
//�����Ķ���
//int add(int x, int y)
//{
//    return x+y;
//}

//������
#include "main.h.h"
#include "sub.h"

int main()
{
    int a = 15;
    int b = 20;
//    int c = add(a, b);
    int c = sub(a, b);
    printf("%d\n", c);
    return 0;
}
