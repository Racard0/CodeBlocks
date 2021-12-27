#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <limits.h>

//P179
//动态内存管理作业

//1、模拟实现atoi - 把字符串转为整数
//int main()
//{
//    char *p = "-5678";
//    printf("%d\n", atoi(p));
//    return 0;
//}
//-5678

//模拟
//enum State
//{
//    INVALID,
//    VALID
//};
//enum State state = INVALID;
//int my_atoi(const char *p)
//{
//    int flag = 1;
//    //空指针
//    if(NULL == p){
//        return 0;
//    }
//    //跳过空白字符
//    while(isspace(*p)){
//        p++;
//    }
//    //+和-号情况
//    if(*p == '+'){
//        flag = 1;
//        p++;
//    }
//    else if(*p == '-'){
//        flag = -1;
//        p++;
//    }
//    //数字字符转换
//    long long n = 0;
//    while(isdigit(*p)){
//        n = n * 10 + flag * (*p - '0');
//        if(n > INT_MAX || n < INT_MIN){
//            return 0;
//        }
//        p++;
//    }
//    //正常字符情况
//    if(*p == '\0'){
//        state = VALID;
//        return (int)n;
//    }
//    //非法字符情况
//    else{
//        state = INVALID;
//        return (int)n;
//    }
//}
//int main()
//{
//    const char *p = "-24353151a";
//    int ret = my_atoi(p);
//    if(state == VALID){
//        printf("normal:%d\n", ret);
//    }
//    else{
//        printf("abnormal:%d\n", ret);
//    }
//    return 0;
//}




//P181
//1、一个数组中只有两个数字是只出现一次，其他都是出现两次
//编写一个函数找出这两个只出现一次阿数字
//1 2 3 4 5 6 1 2 3 4
//5 6
//自己写 - 暴力算法
//int cmp(const void *a, const void *b)
//{
//    return (*(int*)a - *(int*)b);
//}
//void finddouble(int arr[], int len)
//{
//    int tmp = 0;
//
//    for(int i = 0; i < len; i++){
//        for(int j = i + 1; j < len; j++){
//            if(arr[i] == arr[j]){
//                tmp = arr[i + 1];
//                arr[i + 1] = arr[j];
//                arr[j] = tmp;
//            }
//        }
//    }
//    qsort(arr, len, sizeof(int), cmp);
//    for(int m = len - 2; m < len; m++){
//        printf("%d ", arr[m]);
//    }
//}
//int main()
//{
//    int arr[] = {1, 2, 3, 4, 5, 6, 1, 2, 3, 4};
//    int len = sizeof(arr) / sizeof(arr[0]);
//    finddouble(arr, len);
//    return 0;
//}


//老师写
//异或与，分为两组， 为0或为1一组
//然后两组都异或，剩的就是不相同的
void Find(int arr[], int len)
{
    //1.把所有数字异或
    int i = 0;
    int ret = 0;
    for(i = 0; i < len; i++){
        ret ^= arr[i];
    }
    //2.计算ret哪一位为1
    int pos = 0;
    for(i = 0; i < 32; i++){
        if(((ret >> i) & 1) == 1){
            pos = i;
            break;
        }
    }
    //3.从低位向高位的第pos位为1，为0的放在另外一组
    int num1 = 0;
    int num2 = 0;
    for(i = 0; i < len; i++){
        if((arr[i] >> pos) & 1 == 1){
            num1 ^= arr[i];
        }
        else{
            num2 ^= arr[i];
        }
    }
    printf("%d %d\n", num1, num2);
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 1, 2, 3, 4};
    int len = sizeof(arr) / sizeof(arr[0]);
    Find(arr, len);
    return 0;
}
