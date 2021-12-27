#include <stdio.h>
#include <stdlib.h>


//P19
//手撕排序算法


//1、直接插入排序
//void InsertSort(int *a, int n)
//{
//    for(int i = 0; i < n - 1; i++)
//    {
//        int tmp = a[i + 1];
////        int j = i;
//        while(i >= 0 && a[i] > tmp)
//        {
//            a[i + 1] = a[i];
//            i--;
//        }
//        a[i + 1]  = tmp;
//    }
//}
//void test()
//{
//    int a[] = {4,3,6,8,1,2,7,9,5,0};
//    int len = sizeof(a) / sizeof(a[0]);
//    InsertSort(a, len);
//    testprint(a, len);
//}
//void testprint(int *a, int len)
//{
//    for(int i = 0; i < len; i++)
//    {
//        printf("%d ", a[i]);
//    }
//    printf("\n");
//}
//int main()
//{
//    test();
//    return 0;
//}


//2、希尔排序
//直接插入排序的优化
//1.先进行预排序，让数组接近有序
//2.直接插入排序
//void shellsort(int *a, int n)
//{
//    int gap = n;
//    while(gap > 1)
//    {
//        gap = gap / 2;
//        //int gap = gap / 3 + 1; //gap > 1都是预排序，接近有序,gap == 1就是直接插入排序
//        for(int i = 0; i < n - gap; i++)
//        {
//            int tmp = a[i + gap];
//            while(i >= 0 && a[i] > tmp)
//            {
//                a[i + gap] = a[i];
//                i -= gap;
//            }
//            a[i + gap] = tmp;
//        }
//    }
//}
//void shelltest()
//{
//    int a[] = {4,3,6,8,1,2,7,9,5,0};
//    int len = sizeof(a) / sizeof(a[0]);
//    shellsort(a, len);
//    testprint(a, len);
//}
//void testprint(int *a, int len)
//{
//    for(int i = 0; i < len; i++)
//    {
//        printf("%d ", a[i]);
//    }
//    printf("\n");
//}
//int main()
//{
//    shelltest();
//    return 0;
//}


//3、堆排序 1:19:37
//推的逻辑是一颗完全二叉树，推的物理结构是一个数组，通过下标父子节点关系
void swap(int *p1, int *p2)
{
    int tmp = *p1;
    *p1 = *p2;
    *p2 = tmp;
}
void adjustdwon(int *a, int n, int root)
{
    int parent = root;
    int child = parent * 2 + 1; //默认是左孩子
    while(child < n)
    {
        //选出左右最大的孩子
        if(child + 1 < n && a[child + 1] > a[child])
        {
            child += 1;
        }
        if(a[child] > a[parent])
        {
            swap(&a[child], &a[parent]);
            parent = child;
            child = parent * 2 + 1;
        }
        else
        {
            break;
        }
    }
}
void heapsort(int *a, int n)
{
    //建堆
    for(int i = (n - 2) / 2; i >= 0; --i)
    {
        adjustdwon(a, n, i);
    }

    //升序大堆，降序小堆
    int end = n - 1;
    while(end > 0)
    {
        swap(&a[0], &a[end]);
        adjustdwon(a, end, 0);
        end--;
    }
}
void heaptest()
{
    int a[] = {4,3,6,8,1,2,7,9,5,0};
    int len = sizeof(a) / sizeof(a[0]);
    heapsort(a, len);
    testprint(a, len);
}
void testprint(int *a, int len)
{
    for(int i = 0; i < len; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}
int main()
{
    heaptest();
    return 0;
}
