#include<stdio.h>
#include<string.h>//strlen
#include<assert.h>//assert

//P92
//调试技巧
//调试模拟实现字符串相关函数

//my_strlen
//1、const
//2、assert
//自己写

//size_t - unsigned int，无符号整型
size_t my_strlen(const char* arr)
{
    assert(arr != NULL);
    //等价assert(arr);
    size_t count = 0;
    while(*arr != '\0')
    {
        arr++;
        count++;
    }
    return count;

}
int main()
{
    char arr[] = "0";
    scanf("%s", &arr);

    int ret = my_strlen(arr);
    printf("%d\n", ret);
//    printf("%d\n", strlen(arr));
    return 0;
}

