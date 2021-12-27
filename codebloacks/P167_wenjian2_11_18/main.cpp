#include <stdio.h>
#include <stdlib.h>

//P167
//�ļ�2


//1��sprintf - ��һ����ʽ������ת�����ַ���
//     sscanf - ���ַ����л�ԭ��һ���ṹ��
//int sprintf( char *buffer, const char *format, ... );
//sscanf( const char *buffer, const char *format, ... );

//struct S
//{
//    char arr[10];
//    int age;
//    float f;
//};
//int main()
//{
//    struct S s = {"fuck!", 20, 5.5};
//    char buf[100] = {0};
//    //������ת�����ַ���
//    sprintf(buf, "%s %d %f", s.arr, s.age, s.f);
//    printf("%s\n", buf);
//
//    struct S tmp = {0};
//    //��buf��ԭ�ṹ������
//    sscanf(buf, "%s %d %f", tmp.arr, &(tmp.age), &(tmp.f));
//    printf("%s %d %f\n", tmp.arr, tmp.age, tmp.f);
//    return 0;
//}



//2���ļ������д
//fseek - �����д     ftell - ���ص�ǰ�ļ�λ��
//rewind - �����ļ���ʼλ��
//int fseek( FILE *stream, long offset, int origin );
//int main()
//{
//    FILE *pf = fopen("test.dat", "r");
//    if(NULL == pf){
//        perror("main");
//        return 1;
//    }
//    //��
//    int ch = fgetc(pf);
//    printf("%c ", ch);
//    ch = fgetc(pf);
//    printf("%c ", ch);
//
//    //����ָ���ļ�
//    fseek(pf, -2, SEEK_CUR);
//
//    ch = fgetc(pf);
//    printf("%c ", ch);
//    ch = fgetc(pf);
//    printf("%c \n", ch);
//
//    //�ļ�λ��
//    int ret = ftell(pf);
//    printf("%d\n", ret);
//
//    //�ص���ʼλ��
//    rewind(pf);
//    ch = fgetc(pf);
//    printf("%c\n", ch);
//
//    //��
//    fclose(pf);
//    pf = NULL;
//    return 0;
//}



//3��������д
//int main()
//{
//    int a = 10000;
//    FILE *pf = fopen("test.dat", "wb");
//    if(NULL == pf){
//        perror("main");
//        return 1;
//    }
//    fwrite(&a, 4, 1, pf);//��vs�鿴
//
//    fclose(pf);
//    pf = NULL;
//    return 0;
//}



//4��
//fgetc��ȡ��������EOF��������ȡ����ASCIIֵ
//fgets��ȡ��������NULL��������ȡ�����ַ�����ʼ��ַ
//fread����ʵ�ʶ�ȡ��Ԫ�ظ��������С��ָ��Ԫ�ظ������������һ�ζ�ȡ
//feof,�жϽ�����ԭ��
int main()
{
    FILE *pread = fopen("test.dat", "r");
    if(NULL == pread){
        return 1;
    }
    FILE *pwrite = fopen("test2.dat", "w");
    if(NULL == pwrite){
        fclose(pread);
        pread = NULL;
        return 1;
    }
    //��д
    int ch = 0;
    while((ch = fgetc(pread)) != EOF){
        //д
        fputc(ch, pwrite);
    }

    //�ж� - feof�������ļ�ĩβʱ���ط���ֵ
    if(feof(pread)){
        printf("complete\n");
    }
    else{
        printf("fail\n");
    }
    fclose(pread);
    pread = NULL;
    fclose(pwrite);
    pwrite = NULL;
    return 0;
}


