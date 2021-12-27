#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//P164
//文件

//1、打开文件
//fopen
//int main()
//{
////    FILE *pf = fopen("test.dat", "w");
//    //绝对路径 - 转义字符
//    FILE *pf = fopen("E:\\codebloacks\\test_11_17.dat", "w");
//    if(pf == NULL){
//        perror("fopen");
//        return 1;
//    }
//    //写文件
//
//    //关闭文件
//    fclose(pf);
//    pf = NULL;
//    return 0;
//}


//2、写文件
//int main()
//{
//    FILE *pf = fopen("test.dat", "w");
//    if(pf == NULL){
//        perror("fopen");
//        return 1;
//    }
//    //写文件
//    fputc('f', pf);
//    fputc('u', pf);
//    fputc('c', pf);
//    fputc('k', pf);
//    fputc('!', pf);
//
//    //关闭
//    fclose(pf);
//    pf = NULL;
//    return 0;
//}
//test.dat - fuck!


//3、stdout
//int main()
//{
//    fputc('f', stdout);
//    fputc('u', stdout);
//    fputc('c', stdout);
//    fputc('k', stdout);
//    fputc('!', stdout);
//    return 0;
//}


//4、fgetc - 从文件里读
//int main()
//{
//    FILE *pf = fopen("test.dat", "r");
//    if(pf == NULL){
//        perror("fopen");
//        return 1;
//    }
//    int ret = fgetc(pf);
//    printf("%c", ret);
//    ret = fgetc(pf);
//    printf("%c", ret);
//    ret = fgetc(pf);
//    printf("%c", ret);
//    ret = fgetc(pf);
//    printf("%c", ret);
//    ret = fgetc(pf);
//    printf("%c\n", ret);
//
//    fclose(pf);
//    pf = NULL;
//    return 0;
//}



//5、fputs - 整行输入
//int main()
//{
//    FILE *pf = fopen("test.dat", "w");
//    if(pf == NULL){
//        perror("fopen");
//        return 1;
//    }
//    //按行写
//    fputs("fuckfuck\n", pf);
//    fputs("shitshit\n", pf);
//
//    fclose(pf);
//    pf = NULL;
//    return 0;
//}


//6、fgets - 整行读
//char *fgets( char *str, int num, FILE *stream );
//int main()
//{
//    char arr[10];
//    FILE *pf = fopen("test.dat", "r");
//    if(pf == NULL){
//        perror("fopen");
//        return 1;
//    }
//    //按行读 - \0也占一位
//    fgets(arr, 4, pf);
//    printf("%s", arr);
//    fgets(arr, 4, pf);
//    printf("%s\n", arr);
//
//    fclose(pf);
//    pf = NULL;
//    return 0;
//}


//7、fprintf - 写
//int fprintf( FILE *stream, const char *format, ... );
//struct S
//{
//    char arr[10];
//    int num;
//    float sc;
//};
//int main()
//{
//    struct S s = {"abcdefg", 10, 5.5};
//    FILE *pf = fopen("test.dat", "w");
//    if(pf == NULL){
//        perror("fopen");
//        return 1;
//    }
//    //写
//    fprintf(pf, "%s %d %f", s.arr, s.num, s.sc);
//
//    fclose(pf);
//    pf = NULL;
//    return 0;
//}


//8、fscanf - 读
//struct S
//{
//    char arr[10];
//    int num;
//    float sc;
//};
//int main()
//{
//    struct S s = {0};
//    FILE *pf = fopen("test.dat", "r");
//    if(pf == NULL){
//        perror("fopen");
//        return 1;
//    }
//    //读
//    fscanf(pf, "%s %d %f", s.arr, &(s.num), &(s.sc));
//
//    //打印
//    printf("%s %d %f", s.arr, s.num, s.sc);
//
//    fclose(pf);
//    pf = NULL;
//    return 0;
//}


//9、fwrite二进制写
//struct S
//{
//    char arr[10];
//    int num;
//    float sc;
//};
//int main()
//{
//    struct S s = {"abcdefg", 10, 5.5};
//    FILE *pf = fopen("test.dat", "w");
//    if(pf == NULL){
//        perror("fopen");
//        return 1;
//    }
//    //写
//    fwrite(&s, sizeof(struct S), 1, pf);
//
//    fclose(pf);
//    pf = NULL;
//    return 0;
//}


//10、fread二进制读
struct S
{
    char arr[10];
    int num;
    float sc;
};
int main()
{
    struct S s = {0};
    FILE *pf = fopen("test.dat", "r");
    if(pf == NULL){
        perror("fopen");
        return 1;
    }
    //读
    fread(&s, sizeof(struct S), 1, pf);
    printf("%s %d %f\n", s.arr, s.num, s.sc);

    fclose(pf);
    pf = NULL;
    return 0;
}
