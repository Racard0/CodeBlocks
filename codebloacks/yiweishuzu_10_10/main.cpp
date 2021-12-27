#include<stdio.h>
#include<string.h>

//P57
//一、 一维数组

//int main()
//{
//    char ch[] = {'b','i','t'};
//
//    printf("%d\n", strlen(ch));
//    return 0;
//}


//int main()
//{
//    int arr[10] = {0};
//    arr[4] = 5;
//    int i = 0;
//
//    printf("%d\n", sizeof(arr));
//    printf("%d\n", sizeof(arr[0]));
//
//    int sz = sizeof(arr) / sizeof(arr[0]);
//    for (i = 0; i < sz; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}
//0 0 0 0 5 0 0 0 0 0

//int main()
//{
//    int arr[10] = { 0 };
//    int i = 0;
//    for(i = 0; i < 10; i++)
//    {
//        printf("&arr[%d] = %p\n", i, &arr[i]);
//        //&p - 按地址的格式打印，为十六进制
//    }
//    return 0;
//}
//每个都差4
//1、一维数组在内存中是连续存放的
//2、随着数组下标的增长，地址是由低到高变化的

//int main()
//{
//    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//    int *p = arr;//数组名是数组首元素的地址
//    int i = 0;
//    for(i = 0; i < 10; i++)
//    {
//        printf("%d ", *p);
//        p++;
//        //知道了第一个元素的地址，往后加就是其他元素的地址
//    }
//    return 0;
//}
//1,2,3,4,5,6,7,8,9,10


//二、二维数组 - 有行和列,行可以省略，列不可以
//几种形式
//int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12}
//int arr[3][4] = {1,2,3,4,5,6,7};
//int arr[3][4] = {{1,2},{3,4},{4,5}};
//int arr[][4] = {{1,2},{3,4},{5,6}};

//int main()
//{
//    int arr[][4] = {{1,2},{3,4},{4,5}};
//    int i = 0;
//    int j = 0;
//    for (i = 0; i < 3; i++)
//    {
//        for (j = 0; j < 4; j++)
//        {
//            printf("%d ",arr[i][j]);
//        }
//        printf("\n");
//    }
//    return 0;
//}
//1 2 0 0
//3 4 0 0
//4 5 0 0

//1、二维数组在数组中存储
//int main()
//{
//    int arr[][4] = {{1,2},{3,4},{4,5}};
//    int i = 0;
//    int j = 0;
//    for (i = 0; i < 3; i++)
//    {
//        for (j = 0; j < 4; j++)
//        {
//            printf("&arr[%d][%d] = %p\n",i ,j ,&arr[i][j]);
//        }
//    }
//    return 0;
//}
//&arr[0][0] = 0060FEC8
//&arr[0][1] = 0060FECC
//&arr[0][2] = 0060FED0
//&arr[0][3] = 0060FED4
//&arr[1][0] = 0060FED8
//&arr[1][1] = 0060FEDC
//&arr[1][2] = 0060FEE0
//&arr[1][3] = 0060FEE4
//&arr[2][0] = 0060FEE8
//&arr[2][1] = 0060FEEC
//&arr[2][2] = 0060FEF0
//&arr[2][3] = 0060FEF4
//整型 - 还是每个差4
//二维数组中在内存也是连续存放的
//跨行也是连续的

//int main()
//{
//    int arr[][4] = {{1,2},{3,4},{4,5}};
//    int i = 0;
//    int j = 0;
//    int *p = &arr[0][0];
//    for (i = 0; i < 12; i++)
//    {
//        printf("%d ", *p);//找到首地址往取1
//        p++;
//    }
//    return 0;
//}
//1 2 0 0 3 4 0 0 4 5 0 0


//三、数组作为函数参数

//1、冒泡排序
 int bubble(int arr[], int sz)
{
    int i = 0;//确定趟数
    int tmp = 0;
    for (i = 0; i < sz -1; i++)
    {
        int j = 0;
        for (j = 0; j < sz-1-i; j++)//一趟冒泡
        {
            if (arr[j] > arr[j+1])//交换
            {
                tmp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = tmp;
            }
        }
    }
}
int main()
{
    int arr[] = {9,8,7,6,5,4,3,2,1,0};
//    int arr[] = {0,1,2,3,4,5,6,7,8,9};

    int sz = sizeof(arr) / sizeof(arr[0]);//数组名是数组元素首地址,必须在自订函数外部

    bubble(arr, sz);
    int a = 0;
    for (a = 0; a < sz; a++)
    {
        printf("%d ", arr[a]);
    }
    return 0;
}

//数组名是什么
//int main()
//{
//    int arr[10] = {0};

    //例外1
//    int sz = sizeof(arr);//1
//    printf("%d\n", sz);
//    //40

    //例外2
//     printf("%p\n", &arr);//2,FED8
//     //输出结果与3、4相同
//     //但加1后是整个数组地址加1
//     printf("%p\n", &arr+1);//FF00
//
//
////    printf("%p\n", &arr[0]);
//    printf("%p\n", arr);//FED8
//    printf("%p\n", arr+1);//FEDC
//    return 0;
//}
//相同地址
//数组名就是数组首元素地址
//但是例外有2
//1、sizeof(数组名) - 表示整个数组 - 计算的整个数组的大小，单位是字节
//eg. - int sz = sizeof(arr)
//2、&数组名 - 数组名表示整个数组 - 取出的是整个数组的地址



