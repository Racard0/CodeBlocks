#include <stdio.h>
#include <stdlib.h>

//P167
//文件2


//1、sprintf - 把一个格式化数据转换成字符串
//     sscanf - 从字符串中还原出一个结构体
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
//    //把数据转换成字符串
//    sprintf(buf, "%s %d %f", s.arr, s.age, s.f);
//    printf("%s\n", buf);
//
//    struct S tmp = {0};
//    //从buf还原结构体数据
//    sscanf(buf, "%s %d %f", tmp.arr, &(tmp.age), &(tmp.f));
//    printf("%s %d %f\n", tmp.arr, tmp.age, tmp.f);
//    return 0;
//}



//2、文件随机读写
//fseek - 随机读写     ftell - 返回当前文件位置
//rewind - 返回文件起始位置
//int fseek( FILE *stream, long offset, int origin );
//int main()
//{
//    FILE *pf = fopen("test.dat", "r");
//    if(NULL == pf){
//        perror("main");
//        return 1;
//    }
//    //读
//    int ch = fgetc(pf);
//    printf("%c ", ch);
//    ch = fgetc(pf);
//    printf("%c ", ch);
//
//    //调整指针文件
//    fseek(pf, -2, SEEK_CUR);
//
//    ch = fgetc(pf);
//    printf("%c ", ch);
//    ch = fgetc(pf);
//    printf("%c \n", ch);
//
//    //文件位置
//    int ret = ftell(pf);
//    printf("%d\n", ret);
//
//    //回到起始位置
//    rewind(pf);
//    ch = fgetc(pf);
//    printf("%c\n", ch);
//
//    //关
//    fclose(pf);
//    pf = NULL;
//    return 0;
//}



//3、二进制写
//int main()
//{
//    int a = 10000;
//    FILE *pf = fopen("test.dat", "wb");
//    if(NULL == pf){
//        perror("main");
//        return 1;
//    }
//    fwrite(&a, 4, 1, pf);//用vs查看
//
//    fclose(pf);
//    pf = NULL;
//    return 0;
//}



//4、
//fgetc读取结束返回EOF，正常读取返回ASCII值
//fgets读取结束返回NULL，正常读取返回字符串起始地址
//fread返回实际读取的元素个数，如果小于指定元素个数，就是最后一次读取
//feof,判断结束的原因
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
    //读写
    int ch = 0;
    while((ch = fgetc(pread)) != EOF){
        //写
        fputc(ch, pwrite);
    }

    //判断 - feof，到达文件末尾时返回非零值
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


