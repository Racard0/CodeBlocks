#include<stdio.h>
#include<string.h>

//1、结果
//int main()
//{
//    int arr[] = {1,2,(3,4),5};
//    printf("%d\n", sizeof(arr));
//    return 0;
//}
//16
//逗号表达式 - 从左向右依次计算,保留最后的结果
//arr[]={1,2,4,5}; int整型占四个字节，4*4=16

//2、结果
//int main()
//{
//    char str[] = "hello bit";//hello bit\0
//    printf("%d %d\n", sizeof(str), strlen(str));
//    return 0;
//}
//10 9
//空格也算
//strlen - 是函数，用来计算字符串的字符个数，不含'\0'
//sizeof - 不是函数，用来计算类型或变量的存储大小的操作符，单位是字节


//3、
//交换
//void reverse(int arr[], int sz)
//{
//    int left = 0;
//    int n = 0;
//    int i;
//    int right = sz - 1;
//    for (i = 0; i < 10; i++)
//    {
//        if (left < right)
//        {
//            n = arr[left];
//            arr[left] = arr[right];
//            arr[right] = n;
//            left++;
//            right--;
//        }
//    }
//}
//
//int main()
//{
//    int  arr[10] = {1,2,3,4,5,6,7,8,9,10};
//    int sz = sizeof(arr) / sizeof(arr[0]);

//    reverse(arr,sz);
//
//    int  i;
//    for (i = 0; i < 10; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}

//交换优化
//void reverse(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//
//	while (left<right)
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
//void print(int arr[], int sz)
//{
//    int i = 0;
//    for (i = 0; i < sz; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    printf("\n");
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	reverse(arr, sz);
//	print(arr, sz);
//
//	return 0;
//}

//4、将数组a的内容和数组b交换（假设长度相同）
//自己写
//int main()
//{
//    int a[3] = {1,2,3};
//    int b[3] = {4,5,6};
//    int i;
//    for (i = 0; i < 3; i++)
//    {
//        int n = a[i];
//        a[i] = b[i];
//        b[i] = n;
//    }
//    int c;
//    printf("b=");
//    for (c = 0; c < 3; c++)
//    {
//        printf("%d ", b[c]);
//    }
//    printf("\n");
//    int d;
//    printf("a=");
//    for (d = 0; d < 3; d++)
//    {
//        printf("%d ", a[d]);
//    }
//    return 0;
//}

//鹏哥写
//int main()
//{
//    int arr1[] = {1,3,5,6,9};
//    int arr2[] = {2,4,6,8,10};
//
//    int sz = sizeof(arr1) / sizeof(arr1[0]);
//    int i;
//    for(i = 0; i < sz; i++)
//    {
//        int tmp = arr1[i];
//        arr1[i] = arr2[i];
//        arr2[i] = tmp;
//    }
//    return 0;
//}
