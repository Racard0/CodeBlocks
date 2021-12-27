#include<stdio.h>

//P117
//指针进阶6

//1、冒泡排序
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


//2、qsort();- 快速排序
//整形数据，字符串数据，结构体数据
//void qsort(void *base,//base存放的是待排序数据中第一个对象的地址
//           size_t num,//排序数据元素的个数
//           size_t size,//排序数据中一个元素的大小，单位是字节
//           int (*cmp)(const void*, const void*));//用来比较待排序数据中的2个元素的函数

#include<stdlib.h>//qsort
#include <string.h>//strcmp
//整型数据
//int cmp_int(const void *e1, const void *e2)
//{
////    return *(int*)e1 - *(int*)e2;
//    //升序
//    //0 1 2 3 4 5 6 7 8 9
//
//    return *(int*)e2 - *(int*)e1;
//    //降序
//    //9 8 7 6 5 4 3 2 1 0
//}
//void test1()
//{
//    int arr[] = {1,3,5,7,9,8,6,4,2,0};
//    int sz = sizeof(arr) / sizeof(arr[0]);
//    //排序
//    qsort(arr, sz, sizeof(arr[0]), cmp_int);
//
//    for(int i = 0; i < sz; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    printf("\n");
//}

//结构体数据
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
    //strcmp - 比较字符串
//}
//void test2()
//{
//    struct Stu s[3] = {{"zhangsan", 30}, {"lisi", 20}, {"wangwu", 40}};
//    int sz = sizeof(s) / sizeof(s[0]);

    //按年龄来排序
//    qsort(s, sz, sizeof(s[0]), by_age);
//    for(int i = 0; i < sz; i++)
//    {
//        printf("%c ", s[i]);
//    }
//    printf("\n");
    //l z w

    //按名字排序
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


//3、模仿qsort实现一个冒泡排序通用算法
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
    int i = 0;//趟数
    for(i = 0; i < sz; i++)
    {
        //一趟的排序
        int j = 0;
        for(j = 0; j < sz - 1 - i; j++)
        {
            //两元素比较
            //arr[j] arr[j+1]
            if(cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)
            {
                //交换
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
    //升序
    return *(int*)e1 - *(int*)e2;
}
void test1()
{
    //整型数据排序
    int arr[] = {1,3,5,7,9,2,4,6,8,0};
    int sz = sizeof(arr) / sizeof(arr[0]);

    //排序
    bubble(arr, sz, sizeof(arr[0]), cmp_int);
    //打印
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
    //strcmp - 比较字符串
}
void test2()
{
    //结构体排序
    struct Stu s[3] = {{"zhangsan", 30}, {"lisi", 20}, {"wangwu", 40}};

    int sz = sizeof(s) / sizeof(s[0]);
    //按年龄排序
    bubble(s, sz, sizeof(s[0]), by_age);
    for(int i = 0; i < sz; i++)
    {
        printf("%c ", s[i]);
    }
    printf("\n");
    //按名字
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
