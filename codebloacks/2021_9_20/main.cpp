#include<stdio.h>

//һ����ҵ

//1��
//��ӡ1000-2000�������
//���꣺
//��ͨ�꣺�ܱ�4���������ܱ�100���������
//�����꣺�ܱ�400����

//�Լ�д��
//int main()
//{
//    int i = 0;
//    int count = 0;//������
//    for (i = 1000; i <= 2000; i++)
//    {
//        if (i % 4 == 0)//����ܱ�4����
//        {
//            if (i % 100 == 0)//����ܱ�100����
//            {
//                if (i % 400 == 0)//����ܱ�400����
//                {
//                    printf("%d ", i);
//                    count++;
//                }
//                else
//                {
//                    continue;
//                }
//            }
//            else
//            {
//                printf("%d ", i);
//                count++;
//            }
//        }
//    }
//    printf("\n����Ϊ��%d\n", count);
//    return 0;
//}

//1��
//��ʦд��
//int main()
//{
//    int y = 0;
//    int count = 0;//������
//    for (y = 1000; y <= 2000; y++)
//    {
//        if (y % 4 == 0)
//        {
//            if (y % 100 != 0)//y����100������������0
//            {
//                printf("%d ", y);
//                count++;
//            }
//        }
//
//        if (y % 400 == 0)
//        {
//            printf("%d ", y);
//            count++;
//        }
//    }
//    printf("\n����Ϊ��%d\n", count);
//    return 0;
//}

//1��
//д����
//int main()
//{
//    int y = 0;
//    int count = 0;
//    for (y = 1000; y <= 2000; y++)
//    {
//        if (((y % 4 ==0) && (y % 100 != 0)) || (y % 400 == 0))
//            //&& - �ң�һ��Ϊ�٣�ȫ��Ϊ�档 || - ��һ��Ϊ�棬ȫ��Ϊ��
//            {
//                printf("%d ", y);
//                count++;
//            }
//    }
//    printf("\n����Ϊ��%d\n", count);
//    return 0;
//}


//2��
//��ӡ1-100������
//������ֻ�ܱ�1����������
//int main()
//{
//    int i = 0;
//
//    for (i = 100; i <= 200; i++)
//    {
//        //�ж�i�Ƿ�Ϊ����
//        //��2��i-1֮��������Գ�i�����ܷ�����
//        int n = 0;
//        for (n = 2; n < i; n++)
//        {
//            if (i % n == 0)
//            {
//                break;
//            }
//        }
//
//        if (i == n)
//        {
//            printf("%d ", i);//����
//        }
//
//    }
//    return 0;
//}

//2��
//����
//int main()
//{
//    int i = 0;
//
//    int count = 0;
//    for (i = 100; i <= 200; i++)
//    {
//        int m = 1;//����i��������
//        int n = 0;
//        for (n = 2; n < i; n++)
//        {
//            if (i % n == 0)
//            {
//                m = 0;
//                break;
//            }
//
//        }
//        if (m == 1)
//        {
//            printf("% d", i);
//            count++;
//        }
//    }
//    printf("\ncount��%d\n", count);
//    return 0;
//}

//2��
//����

//����m=a*b
//a��b��������һ������<=��ƽ��m��
//���� 16=2*8=4*4

#include<math.h>
//int main()
//{
//    int i = 0;
//    int count = 0;
//    for (i = 100; i <= 200; i++)
//    {
//        int m = 1;
//        int n = 0;
//        for (n = 2; n <= sqrt(i); n++)
//            //sqrt - ��ƽ������
//        {
//            if (i % n == 0)
//            {
//                m = 0;
//                break;
//
//            }
//        }
//        if (m == 1)
//            {
//                printf("%d ", i);
//                count++;
//            }
//    }
//    printf("\ncount:%d\n", count);
//    return 0;
//}

//2��
//����
//int main()
//{
//    int i = 0;
//    int count = 0;
//    //i��101��ʼ
//    for (i = 101; i <= 200; i += 2)//ż��������������
//    {
//        int m = 1;
//        int n = 0;
//        for (n = 2; n <= sqrt(i); n++)
//            //sqrt - ��ƽ������
//        {
//            if (i % n == 0)
//            {
//                m = 0;
//                break;
//
//            }
//        }
//        if (m == 1)
//            {
//                printf("%d ", i);
//                count++;
//            }
//    }
//    printf("\ncount:%d\n", count);
//    return 0;
//}


//����goto���
//int main()
//{
//    flag:
//        printf("heh\n");
//        printf("hah\n");
//
//        goto flag;
//        return 0;
//}
//����ѭ��

//1���ػ�С����
//C�����ṩ��һ��������system() - ִ��ϵͳ����

#include<string.h>
#include<stdlib.h>

//int main()
//{
//    char input[] = {0};//���������Ϣ
//    system("shutdown -s -t 60");//system - stdlib.h
//
//again:
//    printf("�ػ�\n");
//    scanf("%s", input);//string.h
//
//    if (strcmp(input, "no") == 0)//���ַ����Ƚϲ���ʹ��==��Ӧ��ʹ��strcmp() - string compare
//    {
//        system("shutdown -a");
//    }
//    else
//    {
//        goto again;
//    }
//    return 0;
//
//}

//1��
//��ʹ��goto���
//int main()
//{
//    char input[] = {0};//���������Ϣ
//    system("shutdown -s -t 60");//system - stdlib.h
//    while (1)
//    {
//        printf("�ػ�\n");
//        scanf("%s", input);//string.h
//
//        if (strcmp(input, "no") == 0)//���ַ����Ƚϲ���ʹ��==��Ӧ��ʹ��strcmp() - string compare
//            {
//                system("shutdown -a");
//                break;
//            }
//    }
//    return 0;
//
//}
//goto���ֻ����һ��������Χ����ת�����ܿ纯��


//��������

//strcpy
//int main()
//{
//    char arr1[20] = {0};
//    char arr2[] = "hello world";
//    strcpy(arr1, arr2);
//    printf("%s\n", arr1);//%s - ���ַ�����ʽ��ӡarr1
//    return 0;
//}

//memset
int main()
{
    char arr[] = "hello world";
    memset(arr, 'x', 5);

    printf("%s\n", arr);

    return 0;
}
