#include<stdio.h>

//һ�� ������ҵ

//1���Ѻ������������������ݷ��ظ���������
//��һ���β�������
//void test(int arr[])
//{
//    arr[0] = 1;
//    arr[1] = 2;
//}
//
//int main()
//{
//    int arr[10] = {0};
//    test(arr);
//
//    return 0;
//
//}
//{1,2,0,0,0,0,0,0,0,0}

//�������β�������ָ��
//void test(int *a, int *b)
//{
//    *a = 1;
//    *b = 2;
//}
//
//int main()
//{
//    int n = 0;
//    int i = 0;
//    test(&n, &i);
//
//    return 0;
//}

//������������ȫ�ֱ���
//int a = 0;
//int b = 0;
//void test()
//{
//    a = 1;
//    b = 2;
//}
//
//int main()
//{
//    test();
//
//    return 0;
//}

//2��
//��ӡ�˷��������������Լ�����
//����9����ӡ99�˷�������12��ӡ12*12��
void excel(int n)
{
    int a = 0;
    for (a = 1; a <= n; a++)//��
    {
        int b = 0;
        for (b = 1; b <= a; b++)//��
        {
            printf("%d*%d=%-2d ", b, a, a*b);
        }
        printf("\n");
    }
}

int main()
{
    int n = 0;
    printf("����������˷���");
    scanf("%d", &n);
    excel(n);
    return 0;
}
