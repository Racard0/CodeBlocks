#include<stdio.h>

//P112
//ָ�����3

//1��һ��ָ�봫��
//void print(int *p, int sz)
//{
//    for(int i = 0; i < sz; i++)
//    {
//        printf("%d ", *(p+i));
//    }
//    printf("\n");
//}
//int main()
//{
//    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//    int *p = arr;
//    int sz = sizeof(arr) / sizeof(arr[0]);
//    print(p, sz);
//    return 0;
//}

//2������ָ�봫��
//void test(int **ppa)
//{
//    **ppa = 20;
//}
//int main()
//{
//    int a = 10;
//    int *pa = &a;//һ��ָ��
//    int **ppa = &pa;//����ָ��
//    test(ppa);
//    test(&pa);//��һ��ָ������ĵ�ַ
//
//    int *arr[10] = {0};
//    test(arr);//�����һ��ָ�������
//    printf("a=%d\n", a);
//    return 0;
//}
//a=20


//3������ָ��
//int add(int x, int y)
//{
//    return x + y;
//}
//int main()
//{
//    int (*pf)(int, int) = &add;
//    //�ȼ���
////    int (*pf)(int, int) = add;
//    int ret = (*pf)(3, 5);
//    //�ȼ���
////    int ret = pf(3, 5);
////    int ret = add(3, 5);
//    printf("%d\n", ret);
//    return 0;
//}
//8

//4����C�����ȱ�ݡ�
//(1)
//int main()
//{
//    (*(void(*)())0)();
    //����0��ַ�ĺ���
    //�ú����޲Σ�����������void
    //1.void(*)() - ����ָ������
    //2.(void(*)())0 - ��0����ǿ������ת����������Ϊһ��������ַ
    //3.*(void(*)())0 - ��0��ַ���н����ò���
    //4.(*(void(*)())0)() - ����0��ַ���ĺ���

//    return 0;
//}

//(2)
//void(*signal(int, void(*)(int)))(int);
//1.signal��()��ϣ�˵��signal�Ǻ�����
//2.signal�����ĵ�һ��������������int,�ڶ��������������Ǻ���ָ��
//�û�����ָ��ָ���һ������Ϊint,����������void�ĺ���
//3.signal�����ķ�������Ҳ��һ������ָ�룬�ú���ָ��ָ��һ������Ϊint
//����������void�ĺ���
//signal��һ������������

//��
//typedef void(*pfun)(int);//��void(*)(int)�ĺ���ָ��l����������Ϊpfun
//pfun signal(int, pfun);

//5������ָ������
//int add(int x, int y)
//{
//    return x + y;
//}
//int sub(int x, int y)
//{
//    return x - y;
//}
//int main()
//{
//    int (*pf1)(int, int) = add;
//    int (*pf2)(int, int) = sub;
//
//    int (*pfarr[2])(int, int) = {add, sub};
//    //pfarr���Ǻ���ָ������
//    return 0;
//}


//6��������
int Add(int x, int y)
{
    return x + y;
}
int Sub(int x, int y)
{
    return x - y;
}
int Mul(int x, int y)
{
    return x * y;
}
int Div(int x, int y)
{
    return x / y;
}
void menu()
{
    printf("*************************\n");
    printf("******* 1.Add  2.Sub ****\n");
    printf("******* 3.Mul  4.Div ****\n");
    printf("*******    0.Exit    ****\n");
    printf("*************************\n");
}
//int main()
//{
//    int intput = 0;
//
//    do
//    {
//        menu();
//
//        int x = 0;
//        int y = 0;
//        int num = 0;
//        printf("choose:");
//        scanf("%d", &intput);
//
//        switch(intput)
//        {
//        case 1:
//            printf("number:");
//            scanf("%d %d", &x, &y);
//            num = Add(x, y);
//            printf("num=%d\n", num);
//            break;
//        case 2:
//            printf("number:");
//            scanf("%d %d", &x, &y);
//            num = Sub(x, y);
//            printf("num=%d\n", num);
//            break;
//        case 3:
//            printf("number:");
//            scanf("%d %d", &x, &y);
//            num = Mul(x, y);
//            printf("num=%d\n", num);
//            break;
//        case 4:
//            printf("number:");
//            scanf("%d %d", &x, &y);
//            num = Div(x, y);
//            printf("num=%d\n", num);
//            break;
//        case 0:
//            printf("Exit!!\n");
//            break;
//        default:
//            printf("choose again\n");
//            break;
//        }
//    }while(intput);
//    return 0;
//}

//����ָ�����鷽ʽ
//int main()
//{
//    int intput = 0;
//    do{
//        menu();
//        int (*parr[5])(int, int) = {NULL, Add, Sub, Mul, Div};
//        int x = 0;
//        int y = 0;
//        int num = 0;
//        printf("choose:");
//        scanf("%d", &intput);
//
//        if(intput >= 1 && intput <= 4)
//        {
//            printf("number:");
//            scanf("%d %d", &x, &y);
//            num = (parr[intput])(x, y);
//            printf("num=%d\n", num);
//        }
//        else if(intput == 0)
//        {
//            printf("WARNING\n");
//            printf("  EXIT \n");
//            break;
//        }
//        else
//        {
//            printf("choose again\n");
//        }
//    }while(intput);
//    return 0;
//}

//�ص�������ʽ
int calc(int (*pf)(int x, int y))//�ص�
{
    int x,y;
    printf("number:");
    scanf("%d %d", &x, &y);
    return pf(x, y);

}
int main()
{
    int intput = 0;

    do
    {
        menu();

        int x = 0;
        int y = 0;
        printf("choose:");
        scanf("%d", &intput);

        switch(intput)
        {
        case 1:
            printf("num=%d\n", calc(Add));
            break;
        case 2:
            printf("num=%d\n", calc(Sub));
            break;
        case 3:
            printf("num=%d\n", calc(Mul));
            break;
        case 4:
            printf("num=%d\n", calc(Div));
            break;
        case 0:
            printf("Exit!!!\n");
            break;
        default:
            printf("choose again\n");
            break;
        }
    }while(intput);
    return 0;
}
