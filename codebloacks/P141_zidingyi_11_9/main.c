#include <stdio.h>
#include <stdlib.h>

//P141
//�Զ�������


//1��
//struct s
//{
//    char c;
//    int i;
//}s1, s2;
//struct b
//{
//    double d;
//    struct s s;
//    char c;
//};
//int main()
//{
//    struct b sb = {3.14, {'w', 100}, 'q'};
//    printf("%f %c %d %c\n", sb.d, sb.s.c, sb.s.i, sb.c);
//    return 0;
//}
//3.140000 w 100 q


//2���Զ����С
//�ṹ���ڴ����
//1.�ṹ��ĵ�һ����Ա���ڽṹ��������ڴ��д洢λ�õ�0ƫ�ƴ���ʼ
//2.�ӵڶ�����Ա��������г�Ա��������һ������������Ա�Ĵ�С��Ĭ�϶������Ľ�Сֵ������������������ַ��
//3.�ṹ����ܴ�С�ǽṹ������г�Ա�Ķ������������Ǹ���������������
//struct S
//{
//    char c1;
//    int i;
//    char c2;
//};
//struct S2
//{
//    char c1;
//    int i;
//    double d;
//};
//struct S3
//{
//    char c1;
//    char c2;
//    int i;
//};
//struct S4
//{
//    double d;
//    char c;
//    int i;
//};
//struct S5
//{
//    char c1;
//    struct S4 s4;
//    double d;
//};

//�޸�Ĭ�϶�����Ϊ2
//#pragma pack(2)
//struct S6
//{
//    char c1;
//    int i;
//    char c2;
//};
//#pragma pack()
//
//int main()
//{
//    struct S s = {0};
//    struct S2 s2 = {0};
//    struct S3 s3 = {0};
//    struct S4 s4 = {0};
//    struct S5 s5 = {0};
//    printf("%d\n", sizeof(s));//12
//    printf("%d\n", sizeof(s2));//16
//    printf("%d\n", sizeof(s3));//8
//    printf("%d\n", sizeof(s4));//16
//    printf("%d\n", sizeof(s5));//32
//    printf("%d\n", sizeof(struct S6));//8
//    return 0;
//}


//3��offsetof
//offsetof(type, member-designator)
//��һ���ṹ��Ա����ڽṹ��ͷ���ֽ�ƫ��������Ա���� member-designator �����ģ��ṹ���������� type �и�����
#include <stddef.h>
//struct S
//{
//    char c1;
//    int i;
//    char c2;
//};
//int main()
//{
//    printf("%d\n", offsetof(struct S, c1));//0
//    printf("%d\n", offsetof(struct S, i));//4
//    printf("%d\n", offsetof(struct S, c2));//8
//    return 0;
//}


//4���ṹ�崫��
//��ָ��Ϻ�


//5��λ�� - int���ͣ�ð�ź������
//struct A
//{
//    int _a : 2;//2�ֽ�
//    int _b : 5;//5�ֽ�
//    int _c : 10;//10�ֽ�
//    int _d : 30;//30�ֽ�
//};
//int main()
//{
//    printf("%d\n", sizeof(struct A));//8
//    return 0;
//}


//6��ö��
//enum Color
//{
//    RED,
//    GREEN,
//    BLUE
//};
//int main()
//{
//    printf("%d\n", RED);//0
//    printf("%d\n", GREEN);//1
//    printf("%d\n", BLUE);//2
//    return 0;
//}


//7�������� - �����壬����һ��ռ䣬һ��һ���
//union Un
//{
//    char c;
//    int i;
//};
//int main()
//{
//    union Un u;
//    printf("%d\n", sizeof(union Un));//4
//    printf("%p\n", &u);//0060FEFC
//    printf("%p\n", &(u.c));//0060FEFC
//    printf("%p\n", &(u.i));//0060FEFC
//    return 0;
//}

//������Ӧ��
//�鿴��С��
//int check_sys()
//{
//    union U
//    {
//        char c;
//        int i;
//    }u;
//    u.i = 1;
//    return u.c;
//}
//int main()
//{
//    int ret = check_sys();
//    if(ret == 1)
//    {
//        printf("С��\n");
//    }
//    else
//    {
//        printf("���\n");
//    }
//    return 0;
//}


//8���������Ա��С
//��С����������Ա��С
//������Ա��С��������������������ʱ��Ҫ��������������������
union UN
{
    char a[5];//1
    int i;//4
};
int main()
{
    printf("%d\n", sizeof(union UN));
    return 0;
}
