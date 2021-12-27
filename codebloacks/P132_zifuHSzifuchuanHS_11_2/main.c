#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//P132
//�ַ��������ַ�������

//һ�����Ȳ������Ƶ��ַ�������
//strcpy strcat strcmp

//1��strlen
//int main()
//{
//    char arr[] = "ldy";
//    char str[] = {'l', 'd', 'y'};
//    printf("%d\n", strlen(arr));
//    printf("%d\n", strlen(str));
//    return 0;
//}
//3
//���ֵ


//2��strcpy
//int main()
//{
//    char arr[20] = {0};
//    strcpy(arr, "hello");
//    printf("%s\n", arr);
//    return 0;
//}
//hello


//3��strcat
//int main()
//{
//    char arr[20] = "hello ";
//    strcat(arr, "world!");
//    printf("%s\n", arr);
//    return 0;
//}
//hello world!


//ģ��ʵ��strcat
//void my_strcat(char *dst, const char *src)
//{
//    //1.�ҵ��ַ�����\0
//    while(*dst)
//    {
//        dst++;
//    }
//    //2.׷���ַ�������
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


//4��strcmp
//�Ƚ��ַ���str1 �� str2 ��С
//�������ֵС�� 0�����ʾ str1 С�� str2��
//�������ֵ���� 0�����ʾ str1 ���� str2��
//�������ֵ���� 0�����ʾ str1 ���� str2��
//int main()
//{
//    printf("%d\n", strcmp("abb", "abc"));//-1
//    printf("%d\n", strcmp("abb", "aaa"));//1
//    printf("%d\n", strcmp("abb", "abb"));//0
//    printf("%d\n", strcmp("abcdef", "abbb"));//1
//    return 0;
//}


//ģ��ʵ��strcmp
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



//�����������޵��ַ�������
//strncpy strncat strncmp

//1��strncpy
//char *strncpy(char *dest, const char *src, size_t n)
//�� src ��ָ����ַ������Ƶ� dest����ิ�� n ���ַ���
//�� src �ĳ���С�� n ʱ��dest ��ʣ�ಿ�ֽ��ÿ��ֽ����
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


//2��strncat
//�� src ��ָ����ַ���׷�ӵ� dest ��ָ����ַ����Ľ�β��ֱ�� n �ַ�����Ϊֹ��
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


//3��strncmp
//�� str1 �� str2 ���бȽϣ����Ƚ�ǰ n ���ֽڡ�
//int main()
//{
//    char *p = "abcdef";
//    char *q = "abcqwert";
//    int ret = strncmp(p, q, 3);
//    printf("%d\n", ret);
//    return 0;
//}
//0

//4��strstr
//���ַ��� haystack �в��ҵ�һ�γ����ַ��� needle���������ս����ַ�����λ��
//int main()
//{
//    char arr1[] = "abcdefabcdef";
//    char arr2[] = "bcd";
//    //��arr1�в���arr2���ҵ����ص�һ�γ��ֵ�λ�ã��Ҳ�������NULL
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

//ģ��ʵ��strstr
//P136 27:15
//˼·���ˣ�
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
//    char arr2[] = "bc";//��������������ظ����ַ�
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
//�ֽ��ַ��� str Ϊһ���ַ�����delim Ϊ�ָ���
//int main()
//{
//    char arr[] = "ldy@163.com";
//    char *p = "@.";
//    char tmp[20] = {0};
//    strcpy(tmp, arr);//����һ��
    //ldy\0163\0com

//    char *ret = NULL;
//    ret = strtok(tmp, p);//ldy
//    printf("%s\n", ret);
//
//    ret = strtok(NULL, p);//Ϊ�ջ���ϴζϵ翪ʼ
//    printf("%s\n", ret);//163
//
//    ret = strtok(NULL, p);//com
//    printf("%s\n", ret);

    //��д
//    for(ret = strtok(tmp, p); ret != NULL; ret = strtok(NULL, p))
//    {
//        printf("%s\n", ret);
//    }
//    return 0;
//}

//6.strerror - ���ش�����Ϣ
//char *strerror(int errnum)
//���ڲ���������������� errnum��������һ��ָ�������Ϣ�ַ�����ָ��
#include <errno.h>
//int main()
//{
//    printf("%s\n", strerror(0));
//    printf("%s\n", strerror(1));
//    printf("%s\n", strerror(2));
//    printf("%s\n", strerror(3));
//    printf("%s\n", strerror(4));
//    printf("%s\n", strerror(5));

    //errno - ��¼���Ĵ������
//    FILE *pf = fopen("test.txt", "r");//������ļ�
//    if(pf == NULL)
//    {
//        printf("%s\n", strerror(errno));

        //��ͬ��
//        perror("fopen");//fopen: No such file or directory
//        return 1;
//    }
//    fclose(pf);//�ر��ļ�
//    pf == NULL;
    //No such file or directory - û�ļ�
//    return 0;
//}



//���� �ַ����ຯ��
#include <ctype.h>

//1.isdigit
//int isdigit(int c)
//�ú�������������ַ��Ƿ���ʮ�������֡�
//��� c ��һ�����֣���ú������ط���ֵ�����򷵻� 0
//int main()
//{
//    char ch = 'W';
//    printf("ch=%d\n", isdigit(ch));//0
//
//    char cs = '2';
//    printf("cs=%d\n", isdigit(cs));//1
//    return 0;
//}

//2.islower - ����Ƿ�Сд
//C �⺯�� int islower(int c) ����������ַ��Ƿ���Сд��ĸ��
//��� c ��һ��Сд��ĸ����ú������ط���ֵ��true�������򷵻� 0��false����
//int main()
//{
//    char ch = 'W';
//    printf("ch=%d\n", islower(ch));//0
//
//    char cs = 'a';
//    printf("cs=%d\n", islower(cs));//2
//    return 0;
//}


//�ġ��ַ�ת������

//1.tolower - ��д��ĸתСд
//toupper - Сд��ĸת��д
//��һ
//int main()
//{
//    char ch = 'W';
//    printf("ch=%c\n", tolower(ch));//w
//
//    char cs = 'a';
//    printf("cs=%c\n", toupper(cs));//A
//    return 0;
//}

//2.isupper - ����Ƿ��Ǵ�д��ĸ
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


//�塢�ڴ溯��

//1.memcpy
//void *memcpy(void *dest, const void *src, size_t n)
//�� src ���� n ���ַ��� dest��
//�ú���Ӧ�ÿ����ڴ治�ص������
//int main()
//{
//    int arr1[10] = {1,2,3,4,5,6,7,8};
//    int arr2[10] = {0};
//
//    memcpy(arr2, arr1, 16);
//    return 0;
//}
//1234

//ģ��ʵ��memcpy
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


//2.memmove - ���Դ����ڴ��ص������
//void *memmove(void *dest, const void *src, size_t n)
//��һ�����ڴ� src ���� n ���ַ��� dest �ĺ�����
//int main()
//{
//    int arr1[10] = {1,2,3,4,5,6,7,8};
//    memmove(arr1 + 2, arr1, 16);
//    return 0;
//}
//12123478

//ģ��ʵ��memmove
//void *my_memmove(void *dst, const void *src, size_t num)
//{
//    void *ret = dst;
//    if(dst < src)
//    {
        //��ǰ��󿽱�
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


//3.memcmp - �Ƚ�
//int memcmp(const void *str1, const void *str2, size_t n)
//�� str1 �� str2 ��ǰ n ���ֽڽ��бȽϡ�
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

//4.memset - �����ڴ�
//void *memset(void *str, int c, size_t n)
//�����ַ� c��һ���޷����ַ��������� str ��ָ����ַ�����ǰ n ���ַ���
int main()
{
    int arr[10] = {0};
    memset(arr, 1, 20);
    return 0;
}
