#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//P164
//�ļ�

//1�����ļ�
//fopen
//int main()
//{
////    FILE *pf = fopen("test.dat", "w");
//    //����·�� - ת���ַ�
//    FILE *pf = fopen("E:\\codebloacks\\test_11_17.dat", "w");
//    if(pf == NULL){
//        perror("fopen");
//        return 1;
//    }
//    //д�ļ�
//
//    //�ر��ļ�
//    fclose(pf);
//    pf = NULL;
//    return 0;
//}


//2��д�ļ�
//int main()
//{
//    FILE *pf = fopen("test.dat", "w");
//    if(pf == NULL){
//        perror("fopen");
//        return 1;
//    }
//    //д�ļ�
//    fputc('f', pf);
//    fputc('u', pf);
//    fputc('c', pf);
//    fputc('k', pf);
//    fputc('!', pf);
//
//    //�ر�
//    fclose(pf);
//    pf = NULL;
//    return 0;
//}
//test.dat - fuck!


//3��stdout
//int main()
//{
//    fputc('f', stdout);
//    fputc('u', stdout);
//    fputc('c', stdout);
//    fputc('k', stdout);
//    fputc('!', stdout);
//    return 0;
//}


//4��fgetc - ���ļ����
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



//5��fputs - ��������
//int main()
//{
//    FILE *pf = fopen("test.dat", "w");
//    if(pf == NULL){
//        perror("fopen");
//        return 1;
//    }
//    //����д
//    fputs("fuckfuck\n", pf);
//    fputs("shitshit\n", pf);
//
//    fclose(pf);
//    pf = NULL;
//    return 0;
//}


//6��fgets - ���ж�
//char *fgets( char *str, int num, FILE *stream );
//int main()
//{
//    char arr[10];
//    FILE *pf = fopen("test.dat", "r");
//    if(pf == NULL){
//        perror("fopen");
//        return 1;
//    }
//    //���ж� - \0Ҳռһλ
//    fgets(arr, 4, pf);
//    printf("%s", arr);
//    fgets(arr, 4, pf);
//    printf("%s\n", arr);
//
//    fclose(pf);
//    pf = NULL;
//    return 0;
//}


//7��fprintf - д
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
//    //д
//    fprintf(pf, "%s %d %f", s.arr, s.num, s.sc);
//
//    fclose(pf);
//    pf = NULL;
//    return 0;
//}


//8��fscanf - ��
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
//    //��
//    fscanf(pf, "%s %d %f", s.arr, &(s.num), &(s.sc));
//
//    //��ӡ
//    printf("%s %d %f", s.arr, s.num, s.sc);
//
//    fclose(pf);
//    pf = NULL;
//    return 0;
//}


//9��fwrite������д
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
//    //д
//    fwrite(&s, sizeof(struct S), 1, pf);
//
//    fclose(pf);
//    pf = NULL;
//    return 0;
//}


//10��fread�����ƶ�
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
    //��
    fread(&s, sizeof(struct S), 1, pf);
    printf("%s %d %f\n", s.arr, s.num, s.sc);

    fclose(pf);
    pf = NULL;
    return 0;
}
