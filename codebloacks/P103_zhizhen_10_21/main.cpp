#include<stdio.h>

//P103
//ָ��

//int main()
//{
//    char* ps = "hello bit";
//    char arr[] = "hello world";
//    printf("%c\n", *ps);
//    printf("%c\n", arr);
//    printf("%s\n", arr);
//    return 0;
//}
//h
//?
//hello world
//�ַ�ָ�룬������ַ���Ԫ�صĵ�ַ

//int main()
//{
//    char str1[] = "hello bit";
//    char str2[] = "hello bit";
//    char* str3 = "hello bit";
//    char* str4 = "hello bit";//�����ַ��� - ���ܸ���
//    //����һ������һ��
//
//    if(str1 == str2)
//    {
//        printf("s1 s2 same\n");
//    }
//    else
//    {
//        printf("s1 s2 no same\n");
//    }
//    if(str3 == str4)
//    {
//        printf("s3 s4 same\n");
//    }
//    else{
//        printf("s3 s4 no same\n");
//    }
//}
//s1 s2 no same
//s3 s4 same


//һ��ָ������
//�����д�ŵ���ָ���ַ

//1��
//int main()
//{
//    int a=10;
//    int b = 20;
//    int c = 30;
//    int* arr[3] = {&a, &b, &c};
//    //�������ָ�������
//    int i = 0;
//    for(i = 0; i < 3; i++)
//    {
//        printf("%d ", *(arr[i]));
//    }
//    printf("\n");
//    return 0;
//}

//2��
//int main()
//{
//    int a[5] = {1,2,3,4,5};
//    int b[] = {2,3,4,5,6};
//    int c[] = {3,4,5,6,7};
//    int *arr[3] = {a,b,c};
//    int i = 0;
//    for(i = 0; i < 3; i++)
//    {
//        int j = 0;
//        for(j = 0; j < 5; j++)
//        {
////            printf("%d ", *(arr[i] + j));
//            printf("%d ", arr[i][j]);
//        }
//        printf("\n");
//    }
//    return 0;
//}
//1 2 3 4 5
//2 3 4 5 6
//3 4 5 6 7


//��������ָ�� - ָ�������ָ��
//int main()
//{
//    int a = 10;
//    int *pa = &a;
//    char ch = 'w';
//    char *pc = &ch;
//
//    int arr[10] = {1,2,3,4,5};
//    //����ָ��
//    int (*parr)[10]  = &arr;//ȡ������ĵ�ַ
//
//    double *d[5];
//    double *(*pd)[5] = &d;
//    //pd����һ������ָ��
//    return 0;
//}

//int main()
//{
//    int arr[10] = {0};
//
//    int *p1 = arr;
//    int (*p2)[10] = &arr;
//
//    printf("%p\n", p1);//0060FED0
//    printf("%p\n", p1+1);//0060FED4
//    //���4���ֽڣ�����һ������
//
//    printf("%p\n", p2);//0060FED0   - 6356688
//    printf("%p\n", p2+1);//0060FEF8 - 6356728
//    //���40���ֽڣ�������������
//    return 0;
//}

//
//��������������Ԫ�صĵ�ַ
//����2�����⣺
//1��sizeof(������) - ��������ʾ�������飬����������������С����λ���ֽ�
//2��&������ - ��������ʾ�������飬ȡ��������������ĵ�ַ
//

//1������ָ���Ӧ��
//int main()
//{
//    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//    int (*pa)[10] = &arr;
//    int i = 0;
//    for(i = 0; i < 10; i++)
//    {
//        printf("%d ", *((*pa) + i));
//    }
//    return 0;
//}
//1 2 3 4 5 6 7 8 9 10

//2��
//void print(int (*p)[5], int r, int c)
//{
//    int i = 0;
//    int j = 0;
//    for(i = 0; i < r; i++)
//    {
//        for(j = 0; j < c; j++)
//        {
//            printf("%d ", *(*(p + i) + j));
//        }
//        printf("\n");
//    }
//}
//
//int main()
//{
//    int arr[3][5] = {{1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7}};
//    print(arr, 3, 5);
//    return 0;
//}

//3��
//int (*parr3[10])[5];//һ���洢����ָ������飬�������ܹ����10������ָ�룬
//ÿ������ָ���ܹ�ָ��һ�����飬����5��Ԫ�أ�ÿ��Ԫ����int����

//int (*parr2)[10];//����ָ�룬��ָ���ܹ�ָ��һ�����飬����10��Ԫ��
//ÿ��Ԫ�ص�������int

//int *parr1[10];//����ָ�������
//int arr[5];//��������


//4��һά���鴫�Σ���ȷд��
//void test(int arr[]){};
//void test(int arr[10]){};
//void test(int *arr){};
//
//void test2(int *arr[20]){};
//void test2(int **arr){};
//int main()
//{
//    int arr[10] = {0};
//    int *arr2[20] = {0};
//    test(arr);
//    test2(arr2);
//    return 0;
//}

//5����ά���鴫��
void test(int arr[3][5]){};
void test(int arr[][5]){};
void test(int *arr){};//XXX!����
void test(int *arr[5]){};//XXX!
void test(int (*arr)[5]){};
void test(int **arr){};//XXX!
int main()
{
    int arr[3][5] = {0};
    test(arr);
    return 0;
}
