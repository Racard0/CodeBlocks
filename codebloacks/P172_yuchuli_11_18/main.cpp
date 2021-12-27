#include <stdio.h>

//P172
//预处理文件3

//1、预定义符号
//int main()
//{
//    printf("%s\n", __FILE__);//文件所在文件夹位置
//    printf("%d\n", __LINE__);//文件当前行号
//    printf("%s\n", __DATE__);//日期
//    printf("%s\n", __TIME__);//时间
//    printf("%s\n", __FUNCTION__);//所在函数函数名
//    printf("%d\n", __STDC__);//如果遵守ANSI C标准返回1，否则未定义
//    return 0;
//}


//写到文件
//int main()
//{
//    FILE *pf = fopen("log.dat", "a+");
//    if(NULL == pf){
//        perror("fopen");
//        return 1;
//    }
//    for(int i = 0; i < 10; i++){
//        fprintf(pf, "%s %d %s %s %d\n", __FILE__, __LINE__, __DATE__, __TIME__, i);
//    }
//    fclose(pf);
//    pf = NULL;
//    return 0;
//}


//2、#define定义宏
#define SQUARE(x) x*x
#define SQUARE2(x) ((x)*(x))
#define DOUBLE(x) (x)+(x)
#define DOUBLE2(x) ((x) + (x))
//int main()
//{
//    printf("%d\n", SQUARE(3));//9
//    printf("%d\n", SQUARE(3 + 1));//7 - (3+1*3+1)=7
//    printf("%d\n", SQUARE((3 + 1)));//16
//    printf("%d\n", SQUARE2(3 + 1));//16
//    printf("\n");
//    printf("%d\n", 10 * DOUBLE(4));//44 - 10*4+4=44
//    printf("%d\n", 10 * DOUBLE2(4));//80
//
//    return 0;
//}


//3、# - 字符串中插入参数,只能在宏里用
#define PRINT(x) printf("the value of "#x" is %d\n", x);
#define PRINT2(x, f) printf("the value of "#x" is "f"\n", x);
#define CAT(x,y) x##y
int main()
{
    int a = 10, b = 20, c = 30;
    PRINT(a);
    PRINT(b);
    PRINT(c);

    float f = 5.5;
    PRINT2(f, "%f");

    int ldy250 = 250;
    printf("%d\n", CAT(ldy, 250));
    //等价于
    printf("%d\n", ldy250);

    return 0;
}
