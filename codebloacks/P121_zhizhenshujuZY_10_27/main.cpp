#include<stdio.h>

//P121
//ָ�����ݱ�����

//1��һά����
//int main()
//{
//    int a[] = {1,2,3,4};
//    printf("%d\n", sizeof(a));//16
    //sizeof(������) - ��������ʾ��������-���������������Ĵ�С
//
//    printf("%d\n", sizeof(a + 0));//4,�ǵ�һ��Ԫ�صĵ�ַ
//    printf("%d\n", sizeof(*a));//4��*a�������һ��Ԫ��
//    printf("%d\n", sizeof(a + 1));//4,a+1�ǵڶ���Ԫ�صĵ�ַ
//    printf("%d\n", sizeof(a[1]));//4���ڶ���Ԫ�صĴ�С
//
//    printf("%d\n", sizeof(&a));//4
//    //&������ - ��������ʾ�������飬ȡ��������������ĵ�ַ
//    //������ǵ�ַ�Ĵ�С
//
//    printf("%d\n", sizeof(*&a));//16,��������������
//    //&a - int(*p)[4] = &a
//    //�ȼ���sizeof(a)
//
//    printf("%d\n", sizeof(&a + 1));//4,����һ������
//    printf("%d\n", sizeof(&a[0]));//4
//    printf("%d\n", sizeof(&a[0] + 1));//4
//
//    return 0;
//    //����sizeof(������) &�������������������������Ԫ�صĵ�ַ
//}

//2���ַ�����
#include<string.h>
//int main()
//{
//    char arr[] = {'a', 'b', 'c', 'd', 'e', 'f'};
//    printf("%d\n", sizeof(arr));//6
//    printf("%d\n", sizeof(arr + 0));//4,�ֽ�ռ1������ַ��Ϊ4
//    printf("%d\n", sizeof(*arr));//1����һ��Ԫ��
//    printf("%d\n", sizeof(*arr + 0));//4
//    printf("%d\n", sizeof*(arr + 0));//1
//    printf("%d\n", sizeof(arr[1]));//1���ڶ���Ԫ��
//    printf("%d\n", sizeof(&arr));//4,�����ַ
//    printf("%d\n", sizeof(&arr + 1));//4������һ������
//    printf("%d\n", sizeof(&arr[0] + 1));//4��b�ĵ�ַ


//    printf("%d\n", strlen(arr));//���ֵ
//    printf("%d\n", strlen(arr + 0));//���ֵ
//    printf("%d\n", strlen(*arr));//��97��error
//    printf("%d\n", strlen(arr[1]));//��98��error
//    printf("%d\n", strlen(&arr));//���ֵ char(*)[6]
//    printf("%d\n", strlen(&arr + 1));//���ֵ-6
//    printf("%d\n", strlen(&arr[0] + 1));//���ֵ-1
//    return 0;
//}

//3��
//int main()
//{
//    char arr[] = "abcdef";
//    printf("%d\n", sizeof(arr));//7,abcdef\0
//    printf("%d\n", sizeof(arr + 0));//4,a
//    printf("%d\n", sizeof(*arr));//1,��һ��Ԫ��
//    printf("%d\n", sizeof(arr[1]));//1
//    printf("%d\n", sizeof(&arr));//4,���������ַ,char(*)[7]
//    printf("%d\n", sizeof(&arr + 1));//4,����
//    printf("%d\n", sizeof(&arr[0] + 1));//4��b


//    printf("%d\n", strlen(arr));//6,����
//    printf("%d\n", strlen(arr + 0));//6������
//    printf("%d\n", strlen(*arr));//a,97,error
//    printf("%d\n", strlen(arr[1]));//b,98,error
//    printf("%d\n", strlen(&arr));//6,����
//    printf("%d\n", strlen(&arr + 1));//���������
//    printf("%d\n", strlen(&arr[0] + 1));//5,bcdef
//    return 0;
//}


//4��
int main()
{
    char *p = "abcdef";
//    printf("%d\n", sizeof(p));//4,�ַ�ָ��p�Ĵ�С
//    printf("%d\n", sizeof(p + 1));//4
//    printf("%d\n", sizeof(*p));//1,a
//    printf("%d\n", sizeof(p[0]));//1,p[0]=*(p+0)
//    printf("%d\n", sizeof(&p));//4
//    printf("%d\n", sizeof(&p + 1));//4
//    printf("%d\n", sizeof(&p[0] + 1));//4,a

    printf("%d\n", strlen(p));//6
    printf("%d\n", strlen(p + 1));//5
    printf("%d\n", strlen(*p));//error,97
    printf("%d\n", strlen(p[0]));//error,97
    printf("%d\n", strlen(&p));//���
    printf("%d\n", strlen(&p + 1));//���
    printf("%d\n", strlen(&p[0] + 1));//5��bcdef
    return 0;
}
