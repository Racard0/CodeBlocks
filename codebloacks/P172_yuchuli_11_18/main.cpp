#include <stdio.h>

//P172
//Ԥ�����ļ�3

//1��Ԥ�������
//int main()
//{
//    printf("%s\n", __FILE__);//�ļ������ļ���λ��
//    printf("%d\n", __LINE__);//�ļ���ǰ�к�
//    printf("%s\n", __DATE__);//����
//    printf("%s\n", __TIME__);//ʱ��
//    printf("%s\n", __FUNCTION__);//���ں���������
//    printf("%d\n", __STDC__);//�������ANSI C��׼����1������δ����
//    return 0;
//}


//д���ļ�
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


//2��#define�����
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


//3��# - �ַ����в������,ֻ���ں�����
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
    //�ȼ���
    printf("%d\n", ldy250);

    return 0;
}
