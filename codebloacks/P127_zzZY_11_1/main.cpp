#include<stdio.h>

//P127
//ָ����ҵ

//1��һ�����Ͼ����ҵ��������
//int yangshi(int arr[3][3], int h, int l, int n)
//{
//    int x = 0;//��
//    int y = l;//��
//    while(x < h && y >= 0)
//    {
//        if(arr[x][y] < n)
//        {
//            x++;
//        }
//        else if(arr[x][y] > n)
//        {
//            y--;
//        }
//        else
//        {
//            printf("��%d�У���%d��\n", x, y);
//            return 1;
//        }
//    }
//    return 0;
//}
//int main()
//{
//    int arr[3][3] = {1,2,3,4,5,6,7,8,9};
//    int n;
//    printf("ҪѰ�ҵ���:");
//    scanf("%d", &n);
//
//    //����1�ҵ���,����0û�ҵ�
//    int ret = yangshi(arr, 3, 2, n);
//    if(ret == 1)
//    {
//        printf("�ҵ���\n");
//    }
//    else
//    {
//        printf("û�ҵ�\n");
//    }
//    return 0;
//}


//2��
//�����ַ���
//ABCD����һ���ַ��õ�BDCA
//ABCD���������ַ��õ�CDAB
#include<string.h>//strcmp strstr strncat

//��һ
//void zuoxuan(char *str, int k)
//{
//    int len = strlen(str);
//    for(int i = 0; i < k; i++)//ÿ����תһ���ַ�
//    {
//        char tmp = *str;
//        //���len-1���ַ���ǰ
//        for(int j = 0; j < len - 1; j++)
//        {
//            *(str + j) = *(str + j + 1);
//        }
//
//        //tmp�����
//        *(str + len - 1) = tmp;
//    }
//}
//int main()
//{
//    char arr[] = "ABCDEFG";
//    int k;
//    printf("ԭ�ַ���");
//    printf("%s\n", arr);
//    printf("��ת�ַ�������");
//    scanf("%d", &k);
//    zuoxuan(arr, k);
//    printf("%s\n", arr);
//    return 0;
//}


//������������ת
//void reverse(char *left, char *right)
//{
//    while(left < right)
//    {
//        char tmp = *left;
//        *left = *right;
//        *right = tmp;
//        left++;
//        right--;
//    }
//}
//void zuoxuan(char *str, int k)
//{
//    int len = strlen(str);
//    reverse(str, str+k-1);//��
//    reverse(str+k, str+len-1);//��
//    reverse(str, str+len-1);//ȫ��
//}
//int main()
//{
//    char arr[] = "ABCDEFG";
//    int k;
//    printf("ԭ�ַ���");
//    printf("%s\n", arr);
//    printf("��ת�ַ�������");
//    scanf("%d", &k);
//    zuoxuan(arr, k);
//    printf("%s\n", arr);
//    return 0;
//}


//3��дһ�������ж� һ���ַ����Ƿ�Ϊ��һ���ַ�����ת֮����ַ���
//�������s1=AABCD��s2=BCDAA,����1
//s1=abcd��s2=ABCD����0

//��һ�����
//int zuoxuan(char *arr1, char *arr2)
//{
//    int len = strlen(arr1);
//    for(int i = 0; i < len; i++)//ÿ����תһ���ַ�
//    {
//        char tmp = *arr1;
//        //���len-1���ַ���ǰ
//        for(int j = 0; j < len - 1; j++)
//        {
//            *(arr1 + j) = *(arr1 + j + 1);
//        }
//
//        //tmp�����
//        *(arr1 + len - 1) = tmp;
//
//        if(strcmp(arr1, arr2) == 0)
//�������ֵС�� 0�����ʾ str1 С�� str2��
//�������ֵ���� 0�����ʾ str1 ���� str2��
//�������ֵ���� 0�����ʾ str1 ���� str2��
//        {
//            return 1;
//        }
//    }
//    return 0;
//}
//int main()
//{
//    char arr1[] = "AABCD";
//    char arr2[] = "BCDAA";
//    int ret = zuoxuan(arr1, arr2);
//
//    //�������ת�ַ�Ϊ1������Ϊ0
//    if(ret == 1)
//    {
//        printf("yes\n");
//    }
//    else
//    {
//        printf("no\n");
//    }
//    return 0;
//}


//������ȫ�⺯��
//int zuoxuan(char *arr1, char *arr2)
//{
    //���Ȳ���ȣ��϶�������ת�õ�
//    if(strlen(arr1) != strlen(arr2))
//    {
//        return NULL;
//    }

    //1.arr1�ַ���׷��һ��arr1
    //AABCDAABCD
//    int len = strlen(arr1);
//    strncat(arr1, arr2, len);
    //strncat - ���ַ���from ������count���ַ����ӵ��ַ���to�У�׷�ӿ�ֵ�����������ش�����ɵ��ַ�����

    //2.�ж�arr2�Ƿ���arr1�ִ�
//    char *ret = strstr(arr1, arr2);
    //strstr - ��������һ��ָ�룬��ָ���ַ���str2 �״γ������ַ���str1�е�λ�ã����û���ҵ�������NULL


//    if(ret == NULL)
//    {
//        return 0;
//    }
//    else
//    {
//        return 1;
//    }
//  �ȼ���
//    return ret != NULL;
//
//}
//int main()
//{
//    char arr1[] = "AABCD";
//    char arr2[] = "BCDAA";
//    int ret = zuoxuan(arr1, arr2);
//
//    //�������ת�ַ�Ϊ1������Ϊ0
//    if(ret == 1)
//    {
//        printf("yes\n");
//    }
//    else
//    {
//        printf("no\n");
//    }
//    return 0;
//}

