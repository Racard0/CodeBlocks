#include<stdio.h>

//P87
//���Լ���

//1����1��+2��+3!......+n!
//int main()
//{
//    int n = 5;
//    for(int i = 1; i < n; i++)
//    {
//        n *= i;
//    }
//    printf("%d\n", n);
//    return 0;
//}
//����nһֱ�ڱ仯

//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
////    int ret = 1;
//    int num = 0;
//    for(int m = 1; m <= n; m++)
//    {
//        int ret = 1;//ÿ�ζ�Ҫ����Ϊ1
//        for(int i = 1; i <= m; i++)
//        {
//            ret *= i;
//        }
//        num += ret;
//    }
//    printf("%d\n", num);
//    return 0;
//}

//int main()
//{
//    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//    for(int i = 1; i <= 12; i++)
//    {
//        arr[i] = 0;
//        printf("hehe\n");
//    }
//    return 0;
//}
#include<string.h>//strcpy
//void my_strcpy(char* arr1, char* arr2)
//{
//    //��һ
////    while(*arr2 != '\0')
////    {
//////        *arr1 = *arr2;
//////        arr1++;
//////        arr2++;
////        *arr1++ = *arr2++;
////    }
////    *arr1 = *arr2;
//
//    //����
////    do
////    {
////        *arr1 = *arr2;
////        arr1++;
////        arr2++;
////    }while(*arr2 != '\0');
////    *arr1 = *arr2;
//
//    //���� - ����
//    while(*arr1++ = *arr2++)//�ȸ�����\0,��ʹ��ѭ��ֹͣ
//    {
//        ;
//    }
//}
//int main()
//{
//    char arr1[] = "***********";
//    char arr2[] = "nbnbnb";
//
////    strcpy(arr1, arr2);//1��Ŀ��ռ��ַ 2��Դ�ռ��ַ
////�����ַ���from �е��ַ����ַ���to��������ֵ������������ֵΪָ��to��
//
//    my_strcpy(arr1, arr2);
//    printf("%s\n", arr1);
//    return 0;
//}


#include<assert.h>//arrest
void my_strcpy(char* arr1, char* arr2)
{
    assert(arr2 != NULL);//����
    //assert - ��assert()���ڴ����⡣������ʽ�Ľ��Ϊ�㣬
    //��д������Ϣ��STDERR���˳�����ִ�С������NDEBUG�Ѿ����壬��assert()�������ԡ�
    while(*arr1++ = *arr2++)
    {
        ;
    }
}
int main()
{
     char arr1[] = "***********";
    char arr2[] = "nbnbnb";

    my_strcpy(arr1, NULL);
    ////Assertion failed: arr2 != NULL

//    my_strcpy(arr1, arr2);

    printf("%s\n", arr1);
    return 0;
}

