#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//P132
//字符函数和字符串函数

//一、长度不受限制的字符串函数
//strcpy strcat strcmp

//1、strlen
//int main()
//{
//    char arr[] = "ldy";
//    char str[] = {'l', 'd', 'y'};
//    printf("%d\n", strlen(arr));
//    printf("%d\n", strlen(str));
//    return 0;
//}
//3
//随机值


//2、strcpy
//int main()
//{
//    char arr[20] = {0};
//    strcpy(arr, "hello");
//    printf("%s\n", arr);
//    return 0;
//}
//hello


//3、strcat
//int main()
//{
//    char arr[20] = "hello ";
//    strcat(arr, "world!");
//    printf("%s\n", arr);
//    return 0;
//}
//hello world!


//模拟实现strcat
//void my_strcat(char *dst, const char *src)
//{
//    //1.找到字符串的\0
//    while(*dst)
//    {
//        dst++;
//    }
//    //2.追加字符串内容
//    while(*dst = *src)
//    {
//        dst++;
//        src++;
//    }
//}
//int main()
//{
//    char arr[20] = "hello ";
//    char str[] = "word!";
//    my_strcat(arr, str);
//    printf("%s\n", arr);
//    return 0;
//}


//4、strcmp
//比较字符串str1 和 str2 大小
//如果返回值小于 0，则表示 str1 小于 str2。
//如果返回值大于 0，则表示 str1 大于 str2。
//如果返回值等于 0，则表示 str1 等于 str2。
//int main()
//{
//    printf("%d\n", strcmp("abb", "abc"));//-1
//    printf("%d\n", strcmp("abb", "aaa"));//1
//    printf("%d\n", strcmp("abb", "abb"));//0
//    printf("%d\n", strcmp("abcdef", "abbb"));//1
//    return 0;
//}


//模拟实现strcmp
//void my_strcmp(const char *p, const char *q)
//{
//    while(*p == *q)
//    {
//        if(*p == '\0')
//        {
//            printf("p = q");
//            break;
//        }
//        p++;
//        q++;
//    }
//    if(*p > *q)
//    {
//        printf("p > q");
//    }
//    if(*p < *q)
//    {
//        printf("p < q");
//    }
//}
//int main()
//{
//    char *p = "abcdef";
//    char *q = "abbb";
//    my_strcmp(p, q);
//    return 0;
//}



//二、长度受限的字符串函数
//strncpy strncat strncmp

//1、strncpy
//char *strncpy(char *dest, const char *src, size_t n)
//把 src 所指向的字符串复制到 dest，最多复制 n 个字符。
//当 src 的长度小于 n 时，dest 的剩余部分将用空字节填充
//int main()
//{
//    char arr1[20] = "abcdef";
//    char arr2[] = "qwer";
//    strncpy(arr1, arr2, 2);
//    printf("%s\n", arr1);//qwcdef
//
//    strncpy(arr1, arr2, 6);
//    printf("%s\n", arr1);//qwer
//    return 0;
//}


//2、strncat
//把 src 所指向的字符串追加到 dest 所指向的字符串的结尾，直到 n 字符长度为止。
//int main()
//{
//    char arr1[20] = "hello ";
//    char arr2[] = "world!";
//    strncat(arr1, arr2, 3);
//    printf("%s\n", arr1);//hello wor
//
//    strncat(arr1, arr2, 1);
//    printf("%s\n", arr1);//hello worw
//    return 0;
//}


//3、strncmp
//把 str1 和 str2 进行比较，最多比较前 n 个字节。
//int main()
//{
//    char *p = "abcdef";
//    char *q = "abcqwert";
//    int ret = strncmp(p, q, 3);
//    printf("%d\n", ret);
//    return 0;
//}
//0

//4、strstr
//在字符串 haystack 中查找第一次出现字符串 needle（不包含空结束字符）的位置
//int main()
//{
//    char arr1[] = "abcdefabcdef";
//    char arr2[] = "bcd";
//    //在arr1中查找arr2，找到返回第一次出现的位置，找不到返回NULL
//    char *ret = strstr(arr1, arr2);
//    if(ret != NULL)
//    {
//        printf("find!\n%s\n", ret);
//    }
//    else
//    {
//        printf("no find!\n");
//    }
//    return 0;
//}
//find!
//bcdefabcdef

//模拟实现strstr
//P136 27:15
//思路绝了！
//char* my_strstr(const char *arr1, const char *arr2)
//{
//    const char *s1 = NULL;
//    const char *s2 = NULL;
//    char *cp = arr1;
//
//    while(*cp)
//    {
//        s1 = cp;
//        s2 = arr2;
//        while(*s1 && *s2 && (*s1 == *s2))
//        {
//            s1++;
//            s2++;
//        }
//        if(*s2 == '\0')
//        {
//            return cp;
//        }
//        cp++;
//    }
//    return NULL;
//}
//int main()
//{
//    char arr1[] = "abbbcdefabcdef";
//    char arr2[] = "bc";//极端情况，出现重复的字符
//    char* ret = my_strstr(arr1, arr2);
//    if(ret != NULL)
//    {
//        printf("find!\n%s\n", ret);
//    }
//    else
//    {
//        printf("no find!\n");
//    }
//    return 0;
//}


//5.strtok
//char *strtok(char *str, const char *delim)
//分解字符串 str 为一组字符串，delim 为分隔符
//int main()
//{
//    char arr[] = "ldy@163.com";
//    char *p = "@.";
//    char tmp[20] = {0};
//    strcpy(tmp, arr);//复制一份
    //ldy\0163\0com

//    char *ret = NULL;
//    ret = strtok(tmp, p);//ldy
//    printf("%s\n", ret);
//
//    ret = strtok(NULL, p);//为空会从上次断电开始
//    printf("%s\n", ret);//163
//
//    ret = strtok(NULL, p);//com
//    printf("%s\n", ret);

    //简写
//    for(ret = strtok(tmp, p); ret != NULL; ret = strtok(NULL, p))
//    {
//        printf("%s\n", ret);
//    }
//    return 0;
//}

//6.strerror - 返回错误信息
//char *strerror(int errnum)
//从内部数组中搜索错误号 errnum，并返回一个指向错误消息字符串的指针
#include <errno.h>
//int main()
//{
//    printf("%s\n", strerror(0));
//    printf("%s\n", strerror(1));
//    printf("%s\n", strerror(2));
//    printf("%s\n", strerror(3));
//    printf("%s\n", strerror(4));
//    printf("%s\n", strerror(5));

    //errno - 记录最后的错误代码
//    FILE *pf = fopen("test.txt", "r");//打开这个文件
//    if(pf == NULL)
//    {
//        printf("%s\n", strerror(errno));

        //等同于
//        perror("fopen");//fopen: No such file or directory
//        return 1;
//    }
//    fclose(pf);//关闭文件
//    pf == NULL;
    //No such file or directory - 没文件
//    return 0;
//}



//三、 字符分类函数
#include <ctype.h>

//1.isdigit
//int isdigit(int c)
//该函数检查所传的字符是否是十进制数字。
//如果 c 是一个数字，则该函数返回非零值，否则返回 0
//int main()
//{
//    char ch = 'W';
//    printf("ch=%d\n", isdigit(ch));//0
//
//    char cs = '2';
//    printf("cs=%d\n", isdigit(cs));//1
//    return 0;
//}

//2.islower - 检查是否小写
//C 库函数 int islower(int c) 检查所传的字符是否是小写字母。
//如果 c 是一个小写字母，则该函数返回非零值（true），否则返回 0（false）。
//int main()
//{
//    char ch = 'W';
//    printf("ch=%d\n", islower(ch));//0
//
//    char cs = 'a';
//    printf("cs=%d\n", islower(cs));//2
//    return 0;
//}


//四、字符转换函数

//1.tolower - 大写字母转小写
//toupper - 小写字母转大写
//例一
//int main()
//{
//    char ch = 'W';
//    printf("ch=%c\n", tolower(ch));//w
//
//    char cs = 'a';
//    printf("cs=%c\n", toupper(cs));//A
//    return 0;
//}

//2.isupper - 检查是否是大写字母
//int main()
//{
//    char arr[] = {"WsNbNsWe"};
//    int i = 0;
//    while(arr[i] != '\0')
//    {
//        if(isupper(arr[i]))
//        {
//            arr[i] = tolower(arr[i]);
//        }
//        printf("%c", arr[i]);
//        i++;
//    }
//    return 0;
//}
//wsnbnswe


//五、内存函数

//1.memcpy
//void *memcpy(void *dest, const void *src, size_t n)
//从 src 复制 n 个字符到 dest。
//该函数应该拷贝内存不重叠的情况
//int main()
//{
//    int arr1[10] = {1,2,3,4,5,6,7,8};
//    int arr2[10] = {0};
//
//    memcpy(arr2, arr1, 16);
//    return 0;
//}
//1234

//模拟实现memcpy
//void *my_memcpy(void *dest, const void *src, size_t num)
//{
//    void *ret = dest;
//    while(num--)
//    {
//        *(char*)dest = *(char*)src;
//        dest = (char*)dest + 1;
//        src = (char*)src + 1;
//    }
//    return ret;
//}
//int main()
//{
//    int arr1[10] = {1,2,3,4,5,6,7,8};
//    int arr2[10] = {0};
//
//    my_memcpy(arr2, arr1, 16);
//    return 0;
//}


//2.memmove - 可以处理内存重叠的情况
//void *memmove(void *dest, const void *src, size_t n)
//另一个用于从 src 复制 n 个字符到 dest 的函数。
//int main()
//{
//    int arr1[10] = {1,2,3,4,5,6,7,8};
//    memmove(arr1 + 2, arr1, 16);
//    return 0;
//}
//12123478

//模拟实现memmove
//void *my_memmove(void *dst, const void *src, size_t num)
//{
//    void *ret = dst;
//    if(dst < src)
//    {
        //从前向后拷贝
//        while(num--)
//        {
//            *(char*)dst = *(char*)src;
//            dst = (char*)dst + 1;
//            src = (char*)src + 1;
//        }
//    }
//    else
//    {
//        while(num--)
//        {
//            *((char*)dst + num) = *((char*)src + num);
//        }
//    }
//    return ret;
//}
//int main()
//{
//    int arr1[10] = {1,2,3,4,5,6,7,8};
//    my_memmove(arr1 + 2, arr1, 16);
    //12123478
//    my_memmove(arr1, arr1 + 2, 16);
    //34565678
//    return 0;
//}


//3.memcmp - 比较
//int memcmp(const void *str1, const void *str2, size_t n)
//把 str1 和 str2 的前 n 个字节进行比较。
//int main()
//{
//    float arr1[] = {1.0, 2.0, 3.0, 4.0};
//    float arr2[] = {1.0, 3.0};
//    int ret1 = memcmp(arr1, arr2, 4);//0
//    printf("%d\n", ret1);
//    int ret2 = memcmp(arr1, arr2, 8);//-1
//    printf("%d\n", ret2);
//    return 0;
//}

//4.memset - 设置内存
//void *memset(void *str, int c, size_t n)
//复制字符 c（一个无符号字符）到参数 str 所指向的字符串的前 n 个字符。
int main()
{
    int arr[10] = {0};
    memset(arr, 1, 20);
    return 0;
}
