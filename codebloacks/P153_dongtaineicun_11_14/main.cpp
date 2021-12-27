#include <stdio.h>
#include <stdlib.h>

//P153
//动态内存开辟


//1、malloc
//int main()
//{
//    //开辟10个整型的空间
//    int arr[10];//栈区
//
//    //动态内存开辟
//    int *p = (int*)malloc(10 * sizeof(int));
//
//    //使用空间的时候
//    if(p == NULL)
//    {
////        printf("malloc fail\n");
//
//        perror("errno");//perror()函数打印str(字符串)和一个相应的执行定义的错误消息到全局变量errno中.
//        return 0;
//    }
//    //使用
//    int i;
//    for(i = 0; i < 10; i++)
//    {
//        *(p + i) = i;
//    }
//    for(i = 0; i < 10; i++)
//    {
//        printf("%d ", p[i]);
//        //等价于
//        printf("%d ", *(p + i));
//    }
//
//    //回收空间
//    free(p);
//    p = NULL;
//
//    return 0;
//}



//2、calloc - 会将内存初始化
//void *calloc(size_t nitems, size_t size)
//分配所需的内存空间，并返回一个指向它的指针。malloc 和 calloc 之间的不同点是，malloc 不会设置内存为零，而 calloc 会设置分配的内存为零
//int main()
//{
//    int *p = (int*)calloc(10, sizeof(int));
//    if(p == NULL)
//    {
//        return 1;
//    }
//    for(int i = 0; i < 10; i++)
//    {
////        printf("%d ", p[i]);
//        printf("%d ", *(p + i));
//    }
//    free(p);
//    p = NULL;
//    return 0;
//}
//calloc - 0 0 0 0 0 0 0 0 0 0



//3、realloc
//void *realloc(void *ptr, size_t size) 尝试重新调整之前调用 malloc 或 calloc 所分配的 ptr 所指向的内存块的大小
int main()
{
    int *p = (int*)calloc(10, sizeof(int));
    if(p == NULL)
    {
        perror("main");
        return 1;
    }
    for(int i = 0; i < 10; i++)
    {
        *(p + i) = 5;
    }

    //这里需要p指向更大的空间，需要20个int，realloc调整
    int *ptr = (int*)realloc(p, 20 * sizeof(int));
    if(ptr != NULL)
    {
        p = ptr;
    }

    free(p);
    p = NULL;
    return 0;
}


int main(){
    int *p = (int*)malloc(NULL, 40);
    //这里类似malloc,直接在堆区开辟40个字节
    return 0;
}
