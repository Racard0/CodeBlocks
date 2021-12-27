#include<stdio.h>

//P117
//ָ�����6

//1��ð������
//void bubble(int arr[], int sz)
//{
//    int tmp;
//    for(int i = 0; i < sz - 1; i++)
//    {
//        for(int j = 0; j < sz - i - 1; j++)
//        {
//            if(arr[j] > arr[j + 1])
//            {
//                tmp = arr[j];
//                arr[j] = arr[j + 1];
//                arr[j + 1] = tmp;
//            }
//        }
//    }
//}
//void bubble(int arr[], int sz)
//{
//    int *left = arr;
//    int *right = arr + sz - 1;
//    for(int i = 0; i < sz -1 ; i++)
//    {
//        int tmp = 0;
//        if(left < right)
//        {
//            tmp = *left;
//            *left = *right;
//            *right = tmp;
//            *left++;
//            *right--;
//        }
//    }
//}
//int main()
//{
//    int arr[] = {9,8,7,6,5,4,3,2,1,0};
//    int sz = sizeof(arr) / sizeof(arr[0]);
//    bubble(arr, sz);
//    for(int i = 0; i < sz; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    printf("\n");
//    return 0;
//}
//0 1 2 3 4 5 6 7 8 9


//2��qsort();- ��������
//�������ݣ��ַ������ݣ��ṹ������
//void qsort(void *base,//base��ŵ��Ǵ����������е�һ������ĵ�ַ
//           size_t num,//��������Ԫ�صĸ���
//           size_t size,//����������һ��Ԫ�صĴ�С����λ���ֽ�
//           int (*cmp)(const void*, const void*));//�����Ƚϴ����������е�2��Ԫ�صĺ���

#include<stdlib.h>//qsort
#include <string.h>//strcmp
//��������
//int cmp_int(const void *e1, const void *e2)
//{
////    return *(int*)e1 - *(int*)e2;
//    //����
//    //0 1 2 3 4 5 6 7 8 9
//
//    return *(int*)e2 - *(int*)e1;
//    //����
//    //9 8 7 6 5 4 3 2 1 0
//}
//void test1()
//{
//    int arr[] = {1,3,5,7,9,8,6,4,2,0};
//    int sz = sizeof(arr) / sizeof(arr[0]);
//    //����
//    qsort(arr, sz, sizeof(arr[0]), cmp_int);
//
//    for(int i = 0; i < sz; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    printf("\n");
//}

//�ṹ������
//struct Stu
//{
//    char name[20];
//    int age;
//};
//int by_age(const void *e1, const void *e2)
//{
//    return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
//}
//int by_name(const void *e1, const void *e2)
//{
//    return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
    //strcmp - �Ƚ��ַ���
//}
//void test2()
//{
//    struct Stu s[3] = {{"zhangsan", 30}, {"lisi", 20}, {"wangwu", 40}};
//    int sz = sizeof(s) / sizeof(s[0]);

    //������������
//    qsort(s, sz, sizeof(s[0]), by_age);
//    for(int i = 0; i < sz; i++)
//    {
//        printf("%c ", s[i]);
//    }
//    printf("\n");
    //l z w

    //����������
//    qsort(s, sz, sizeof(s[0]), by_name);
//    for(int i = 0; i < sz; i++)
//    {
//        printf("%c ", s[i]);
//    }
//    printf("\n");
    //l w z
//}
//int main()
//{
//    test1();
//    test2();
//    return 0;
//}


//3��ģ��qsortʵ��һ��ð������ͨ���㷨
void swap(char *buf1, char *buf2, int width)
{
    int i = 0;
    for(i = 0; i < width; i++)
    {
        char tmp = *buf1;
        *buf1 = *buf2;
        *buf2 = tmp;
        buf1++;
        buf2++;
    }
}
void bubble(void *base, int sz, int width, int (*cmp)(const void *e1, const void *e2))
{
    int i = 0;//����
    for(i = 0; i < sz; i++)
    {
        //һ�˵�����
        int j = 0;
        for(j = 0; j < sz - 1 - i; j++)
        {
            //��Ԫ�رȽ�
            //arr[j] arr[j+1]
            if(cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)
            {
                //����
                swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
            }
        }
    }
}
void print_arr(int arr[], int sz)
{
    for(int i = 0; i < sz; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int cmp_int(const void *e1, const void *e2)
{
    //����
    return *(int*)e1 - *(int*)e2;
}
void test1()
{
    //������������
    int arr[] = {1,3,5,7,9,2,4,6,8,0};
    int sz = sizeof(arr) / sizeof(arr[0]);

    //����
    bubble(arr, sz, sizeof(arr[0]), cmp_int);
    //��ӡ
    print_arr(arr, sz);

}
struct Stu
{
    char name[20];
    int age;
};
int by_age(const void *e1, const void *e2)
{
    return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
}
int by_name(const void *e1, const void *e2)
{
    return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
    //strcmp - �Ƚ��ַ���
}
void test2()
{
    //�ṹ������
    struct Stu s[3] = {{"zhangsan", 30}, {"lisi", 20}, {"wangwu", 40}};

    int sz = sizeof(s) / sizeof(s[0]);
    //����������
    bubble(s, sz, sizeof(s[0]), by_age);
    for(int i = 0; i < sz; i++)
    {
        printf("%c ", s[i]);
    }
    printf("\n");
    //������
    bubble(s, sz, sizeof(s[0]), by_name);
    for(int i = 0; i < sz; i++)
    {
        printf("%c ", s[i]);
    }
    printf("\n");
}
int main()
{
    test1();
    test2();
    return 0;
}
//0 1 2 3 4 5 6 7 8 9
//l z w
//l w z
