#include<stdio.h>

//P108
//������ҵ

//1������һ�����飬������ȫ���ŵ�ż��ǰ
//myself
//void move(int arr[], int sz)
//{
//    int *left = arr;
//    int *right = arr + sz - 1;
//    while(left < right)
//    {
//        if(*left % 2 == 0)
//        {
//            int tmp = *left;
//            *left = *right;
//            *right = tmp;
//            *left++;
//            *right--;
//        }
//        *left++;
//        *right--;
//    }
//}

//teacher
//void move(int arr[], int sz)
//{
//    int left = 0;
//    int right = sz - 1;
//
//    while(left < right)
//    {
//        //��ǰ������ż��
//        while((left < right) && (arr[left] % 2 == 1))
//        {
//            left++;
//        }
//        //�Ӻ���ǰ������
//        while((left < right) && (arr[right] % 2 == 0))
//        {
//            right--;
//        }
//
//        if(left < right)
//        {
//            int tmp = arr[left];
//            arr[left] = arr[right];
//            arr[right] = tmp;
//        }
//    }
//}
//1 9 3 7 5 6 4 8 2 10

//void print(int arr[], int sz)
//{
//    for(int i = 0; i < sz; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    printf("\n");
//}
//int main()
//{
//    int arr[] = {1,2,3,4,5,6,7,8,9,10};
//    int arr[] = {1,3,5,7,9};
//    int sz = sizeof(arr) / sizeof(arr[0]);
//    move(arr, sz);
//    print(arr, sz);
//    return 0;
//}
//1 9 3 7 5 6 4 8 2 10



//P110
//���ݵĴ洢��ҵ

//1��
//int main()
//{
//    //usigned char 0~255
//
//    unsigned char a = 200;
//    unsigned char b = 100;
//    unsigned char c = 0;
//    c = a + b;
//    //a - 00000000000000000000000011001000
//    //b - 00000000000000000000000001100100
//    //c - 00000000000000000000000100101100
//    //�ض� 00101100 - 44
//    printf("a+b=%d c=%d\n", a + b, c);
//    return 0;
//}
//a+b=300 c=44
//a+b����������,c������Χ��
//���������������������

//2��
//int main()
//{
//    unsigned int a = 0x1234;
//    unsigned char b = *(unsigned char*)&a;
//
//    return 0;
//}
//b=0x00

//3���������
//int main()
//{
//    int arr[10][10] = {0};
//    int i = 0;//��
//    int j = 0;//��
//    for(i = 0; i < 10; i++)//��ӡ��
//    {
//        for(j = 0; j <= i; j++)//��ӡ��
//        {
//            if(j == 0)
//            {
//                arr[i][j] = 1;
//            }
//            if(i == j)
//            {
//                arr[i][j] = 1;
//            }
//            if(j >= 1 && i >= 2)
//            {
//                arr[i][j] = arr[i-1][j-1] + arr[i-1][j];
//            }
//        }
//    }
//
//    for(i = 0; i < 10; i++)
//    {
//        for(j = 0; j <= i; j++)
//        {
//            printf("%d ", arr[i][j]);
//        }
//        printf("\n");
//
//    }
//    return 0;
//}
//1
//1 1
//1 2 1
//1 3 3 1
//1 4 6 4 1
//1 5 10 10 5 1
//1 6 15 20 15 6 1
//1 7 21 35 35 21 7 1
//1 8 28 56 70 56 28 8 1
//1 9 36 84 126 126 84 36 9 1

//4�������֣���֪����˵�滰һ��˵�ٻ�
//A:no me
//B:C
//C:D
//D:no me
//int main()
//{
//    char killer = 0;
//    for(killer = 'A'; killer <= 'D'; killer++)
//    {
//        if((killer != 'A') + (killer == 'C') + (killer == 'D') + (killer != 'D') == 3)
//        {
//            printf("������%c\n", killer);
//        }
//    }
//    return 0;
//}
//������C

//5��Ԥ�����������ÿ����ֻ˵����һ��
//A:B2,A3
//B:B2,E4
//C:C1,D2
//D:C5,D3
//E:E4,A1
int main()
{
    int a,b,c,d,e;
    for(a = 1; a <= 5; a++)
    {
        for(b = 1; b <= 5; b++)
        {
            for(c = 1; c <= 5; c++)
            {
                for(d = 1; d <= 5; d++)
                {
                    for(e = 1; e <= 5; e++)
                    {
                        if((b == 2) + (a == 3) == 1 && (b == 2) + (e == 4) == 1 && (c == 1) + (d == 2) == 1 && (c == 5) + (d == 3) == 1 && (e == 4) + (a == 1) == 1)
                        {
                            if(a*b*c*d*e == 120)
                            {
                                printf("a=%d b=%d c=%d d=%d e=%d\n", a, b, c, d, e);
                            }
                        }
                    }
                }
            }
        }
    }
    return 0;
}
//a=3 b=1 c=5 d=2 e=4





















#include <stdlib.h>
//int main()
//{
//    int s = 1, h;                    // ��ֵ�͸߶�
//    int i, j;                        // ѭ������
//    scanf("%d", &h);                 // �������
//    printf("1\n");                   // �����һ�� 1
//    for (i = 2; i <= h; s = 1, i++)         // ���� i �� 2 �����
//    {
//        printf("1 ");                // ��һ�� 1
//        for (j = 1; j <= i - 2; j++) // ��λ�� j �ƹ���һ��ֱ�ӿ�ʼѭ��
//            //printf("%d ", (s = (i - j) / j * s));
//            printf("%d ", (s = (i - j) * s / j));
//        printf("1\n");               // ���һ�� 1������
//    }
//    getchar();                       // ��ͣ�ȴ�
//    return 0;
//}

//#define M 10       // ����
//// #define PYRAMID // ����������������ո�
//// #define REVERSE // ��������һ�Σ��õ�����
//int main(void)
//{
//  int a [M][M], i, j;   // ��ά�����ѭ��������a[��][��]
//  for (i = 0; i<M; i++) // ÿһ��
//  {
//#ifdef PYRAMID
//    for (j = 0;j <= M-i; j++) printf ("  ");
//#endif // ������
//    for (j = 0; j <= i; j++) // ��ֵ��ӡ
//      printf("%4d", (a[i][j] = (i == j || j == 0) ? 1 : // ��β�� 1
//        a[i - 1][j] + a[i - 1][j - 1] )); // ʹ����һ�м���
//    printf("\n");
//  }
//#ifdef REVERSE
//  for(i = M-2; i >= 0; i--)
//  {
//#ifdef PYRAMID
//    for (j = 0;j <= M - i; j++) printf("  ");
//#endif // ������
//    for (j = 0;j <= i; j++) printf("%4d",a[i][j]); // ֱ��ʹ����ǰ��õ�ֵ
//    printf("\n");
//  }
//#endif // ���ν���
//  getchar(); // ��ͣ�ȴ�
//}
