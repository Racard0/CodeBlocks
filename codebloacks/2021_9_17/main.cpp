#include <stdio.h>

//һ����֧��� switch

//1����1-7ָ������һ��������
//int main()
//{
//    int day = 0;
//    scanf("%d", &day);
//    switch(day)
//    {
//    case 1+0://��ڣ��������
//        printf("monday\n");
//        break;//���ڣ��������
//    case 2:
//        printf("thuesday\n");
//        break;
//    case 3:
//        printf("wednesday\n");
//        break;
//    case 4:
//        printf("thursday\n");
//        break;
//    case 5:
//        printf("friday\n");
//        break;
//    case 6:
//        printf("saturday\n");
//        break;
//    case 7:
//        printf("sunday\n");
//        break;
//
//    }
//    return 0;
//}

//2��1-5Ϊ�����գ�6��7Ϊ��Ϣ��
//int main()
//{
//    int day = 0;
//    scanf("%d", &day);
//    switch(day)
//    {
//    case 1:
//    case 2:
//    case 3:
//    case 4:
//    case 5:
//        printf("workday\n");
//        break;
//    case 6:
//    case 7:
//        printf("holiday\n");
//        break;
//
//    }
//    return 0;
//}

//3��default, ��ʾ
//int main()
//{
//    int day = 0;
//    scanf("%d", &day);
//    switch(day)
//    {
//    case 1:
//    case 2:
//    case 3:
//    case 4:
//    case 5:
//        printf("workday\n");
//        break;
//    case 6:
//    case 7:
//        printf("holiday\n");
//        break;
//    default:
//        printf("default\n");
//        break;
//    }
//    return 0;
//}
//��������涨ֵ����ʾ

//4��
//int main()
//{
//    int n = 1;
//    int m = 2;
//    //scanf("%d %d", &n, &m);
//    switch (n)//switch(n)����Ƕ��ʹ��
//    {
//    case 1:
//        m++;//m=3
//    case 2:
//        n++;//n=2
//    case 3:
//        switch (n)
//        {
//        case 1://n=2 ��ִ��case 1
//            n++;
//        case 2:
//            m++;//m=4
//            n++;//n=3
//            break;
//        }
//    case 4:
//        m++;//m=5
//        break;
//    default:
//        break;
//
//    }
//    printf("m = %d, n = %d\n", m, n);
//    return 0;
//}
//m=5 n=3



//����ѭ����� while

//1����ӡ1-10
//int main()
//{
//    int num = 1;
//    while (num <= 10)//�жϱ��ʽ
//    {
//        printf("%d ", num);
//        num ++;
//    }
//    return 0;
//}

//break��ֹ
//int main()
//{
//    int num = 1;
//    while (num <= 10)//�жϱ��ʽ
//    {
//        if (num == 5)
//            break;
//            //��whileѭ���У�������ֹѭ��
//        printf("%d ", num);
//        num ++;
//    }
//    return 0;
//}
//1 2 3 4

//continue����
//int main()
//{
//    int num = 1;
//    while (num <= 10)//�жϱ��ʽ
//    {
//        if (num == 5)
//            continue;
//            //��whileѭ���У���������ѭ��continue����Ĵ���ֱ��ȥ�жϣ����Ƿ������һ��ѭ��
//        printf("%d ", num);
//        num ++;
//    }
//    return 0;
//}
//1 2 3 4 ��ѭ��
//�޷�����

//getchar,�ӱ�׼����(���̻�����)��ȡһ���ַ�
//EOF,end of file,�ļ�������־
//int main()
//{
//    int ch = getchar();
////    printf("%c\n", ch);
//    putchar(ch);//���һ���ַ�������һ����ͬ
//    return 0;
//}
//��������ַ�

//int main()
//{
//    int ch = 0;
//    while ((ch = getchar()) !=EOF)//ctrl+z,getchar��ȡ����������EOF
//    {
//        putchar(ch);
//    }
//    return 0;
//}
//ͬ��

//��������
//int main()
//{
//    char pw[20] = {0};
//    printf ("code��");
//    scanf ("%s",pw);
//    printf ("confirm(y/n)��");
//
//    //��������
//    //getchar();//����'\n'����ֻ��������
//    //
//
//    //������������ַ�
//    int tmp = 0;
//    while ((tmp = getchar()) != '\n')
//    {
//        ;
//    }
//    //
//
//    int ch = getchar();
//    if (ch == 'y')
//    {
//        printf("success");
//    }
//    else
//    {
//        printf("failure");
//    }
//    return 0;
//}


//��������2
//int main()
//{
//    int ch = 0;
//    while ((ch = getchar()) != EOF)
//    {
//        if (ch < '0' || ch > '9')
//            //С�ڡ�0�������ڡ�9�����������ֵ�����ASCII��ֵ
//            continue;
//
//        putchar(ch);
//    }
//    return 0;
//}
//ֻ��ӡ���֣�����Ӧ��ĸ



//����forѭ��

//1����ӡ1-10
//int main()
//{
//    int i = 0;
//       //��ʼ�����жϣ�����
//       //forѭ�����ص��ǳ�ʼ������ִֻ��һ��
//    for (i=1; i <= 10; i++)
//    {
//        printf("%d ", i);
//
//    }
//    return 0;
//}

//continue
//int main()
//{
//    int i = 0;
//    for (i = 1; i <= 10; i++)
//    {
//        if (i == 5)
//            continue;
//
//        printf("%d ", i);
//    }
//    return 0;
//}
//1 2 3 4 6 7 8 9 10

//break
//int main()
//{
//    int i = 0;
//    for (i = 1; i <= 10; i++)
//    {
//        if (i == 5)
//            break;
//
//        printf("%d ", i);
//    }
//    return 0;
//}
//1 2 3 4

//����
//int main()
//{
//    for (;;)
//    {
//        printf("ok\n");
//    }
//    return 0;
//}
//��ѭ��
//����ʡ�ԣ�ʡ���жϲ��֣��жϲ��ֺ�Ϊ��

//��2
//int main()
//{
//    int i = 0;
//    int j = 0;
//    for (i = 0; i < 3; i++)
//    {
//        for (j = 0; j < 3; j++)
//        {
//            printf("wc\n");
//        }
//    }
//    return 0;
//}
//�Ŵ�wc

//��3
//int main()
//{
//    int i = 0;
//    int j = 0;
//    for (; i < 3; i++)
//    {
//        for (; j < 3; j++)
//        {
//            printf("wc\n");
//        }
//    }
//    return 0;
//}
//����wc

//��4
//int main()
//{
//    int x, y;
//    for (x = 0, y = 0; x < 2 && y < 5; ++x, y++)//&&���߼����롱�����
//    {
//        printf("wc\n");
//    }
//    return 0;
//}

//ѭ�����ٴ�
int main()
{
    int i = 0;
    int k = 0;
    for (i = 0, k = 0; k = 0; i++, k++)
        //һ������Ϊ��ֵ�������������жϣ��ж�Ϊk=0���ж�����Ϊ�٣�һ�ζ���ѭ��
        k++;
    return 0;
}
//��ѭ��
