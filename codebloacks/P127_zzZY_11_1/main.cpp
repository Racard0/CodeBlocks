#include<stdio.h>

//P127
//指针作业

//1、一个杨氏矩形找到里面的数
//int yangshi(int arr[3][3], int h, int l, int n)
//{
//    int x = 0;//行
//    int y = l;//列
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
//            printf("第%d行，第%d列\n", x, y);
//            return 1;
//        }
//    }
//    return 0;
//}
//int main()
//{
//    int arr[3][3] = {1,2,3,4,5,6,7,8,9};
//    int n;
//    printf("要寻找的数:");
//    scanf("%d", &n);
//
//    //返回1找到了,返回0没找到
//    int ret = yangshi(arr, 3, 2, n);
//    if(ret == 1)
//    {
//        printf("找到了\n");
//    }
//    else
//    {
//        printf("没找到\n");
//    }
//    return 0;
//}


//2、
//左旋字符串
//ABCD左旋一个字符得到BDCA
//ABCD左旋两个字符得到CDAB
#include<string.h>//strcmp strstr strncat

//法一
//void zuoxuan(char *str, int k)
//{
//    int len = strlen(str);
//    for(int i = 0; i < k; i++)//每次旋转一个字符
//    {
//        char tmp = *str;
//        //后边len-1个字符往前
//        for(int j = 0; j < len - 1; j++)
//        {
//            *(str + j) = *(str + j + 1);
//        }
//
//        //tmp放最后
//        *(str + len - 1) = tmp;
//    }
//}
//int main()
//{
//    char arr[] = "ABCDEFG";
//    int k;
//    printf("原字符串");
//    printf("%s\n", arr);
//    printf("旋转字符个数：");
//    scanf("%d", &k);
//    zuoxuan(arr, k);
//    printf("%s\n", arr);
//    return 0;
//}


//法二、三步翻转
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
//    reverse(str, str+k-1);//左
//    reverse(str+k, str+len-1);//右
//    reverse(str, str+len-1);//全部
//}
//int main()
//{
//    char arr[] = "ABCDEFG";
//    int k;
//    printf("原字符串");
//    printf("%s\n", arr);
//    printf("旋转字符个数：");
//    scanf("%d", &k);
//    zuoxuan(arr, k);
//    printf("%s\n", arr);
//    return 0;
//}


//3、写一个函数判断 一个字符串是否为另一个字符串旋转之后的字符串
//例如给定s1=AABCD和s2=BCDAA,返回1
//s1=abcd和s2=ABCD返回0

//法一，穷举
//int zuoxuan(char *arr1, char *arr2)
//{
//    int len = strlen(arr1);
//    for(int i = 0; i < len; i++)//每次旋转一个字符
//    {
//        char tmp = *arr1;
//        //后边len-1个字符往前
//        for(int j = 0; j < len - 1; j++)
//        {
//            *(arr1 + j) = *(arr1 + j + 1);
//        }
//
//        //tmp放最后
//        *(arr1 + len - 1) = tmp;
//
//        if(strcmp(arr1, arr2) == 0)
//如果返回值小于 0，则表示 str1 小于 str2。
//如果返回值大于 0，则表示 str1 大于 str2。
//如果返回值等于 0，则表示 str1 等于 str2。
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
//    //如果是旋转字符为1，不是为0
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


//法二，全库函数
//int zuoxuan(char *arr1, char *arr2)
//{
    //长度不相等，肯定不是旋转得到
//    if(strlen(arr1) != strlen(arr2))
//    {
//        return NULL;
//    }

    //1.arr1字符后追加一个arr1
    //AABCDAABCD
//    int len = strlen(arr1);
//    strncat(arr1, arr2, len);
    //strncat - 将字符串from 中至多count个字符连接到字符串to中，追加空值结束符。返回处理完成的字符串。

    //2.判断arr2是否是arr1字串
//    char *ret = strstr(arr1, arr2);
    //strstr - 函数返回一个指针，它指向字符串str2 首次出现于字符串str1中的位置，如果没有找到，返回NULL


//    if(ret == NULL)
//    {
//        return 0;
//    }
//    else
//    {
//        return 1;
//    }
//  等价于
//    return ret != NULL;
//
//}
//int main()
//{
//    char arr1[] = "AABCD";
//    char arr2[] = "BCDAA";
//    int ret = zuoxuan(arr1, arr2);
//
//    //如果是旋转字符为1，不是为0
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

