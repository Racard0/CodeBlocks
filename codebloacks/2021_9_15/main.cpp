#include<stdio.h>

//һ����ҵ
//1������Ľ��
//int sum(int a)
//{
//    int c=0;
//    static int b=3;
//    c +=1;
//    b +=2;
//    return(a+b+c);
//}
//int main()
//{
//    int i;
//    int a=2;
//    for(i=0;i<5;i++)
//    {
//        printf("%d,",sum(a));
//    }
//}
//���Ϊ 8 10 12 14 16

//2�����һ��С�ɻ�
//int main()
//{
//    printf("     **     \n");
//    printf("     **     \n");
//    printf("************\n");
//    printf("************\n");
//    printf("    *  *    \n");
//    printf("    *  *    \n");
//
//    return 0;
//}


//3������һ������M(1<=M<=100000)�����M���Ա�5���������YES���������NO
//int main()
//{
//    //����
//    int m=0;
//    printf("������һ������:");
//    scanf("%d",&m);
//
//    //�жϲ����
//    if(m%5==0)
//        printf("YES\n");
//    else
//        printf("NO\n");
//    return 0;
//
//}



//������֧��� if else
//1��˫��֧
//int main()
//{
//    int age=0;
//    scanf("%d",&age);
//    if(age>=18)
//        printf("����\n");
//    else
//    {
//        printf("weichennian\n");
//        printf("bunengtanlianai\n");
//    }
//    //if else ����ֻ��ִ��һ�����
//    //Ҫִ������������Ӵ�����
//    return 0;
//}

//2�����֧
//int main()
//{
//    int age=0;
//    scanf("%d",&age);
//    if(age<18)
//        printf("shao nian\n");
//    else if(age>=18 && age<26)//&& �߼����롱�����������ʹ�� 18<=age<26 ���ָ�ʽ����ֿ��жϡ��������
//                              //Ҳ��д��(age<26) ���߼�����ͬ
//        printf("qing nian\n");
//    else if(age>=26 && age<50)//(age<50)
//        printf("zhuang nian\n");
//    else if(age>=50 && age<100)//(age<100)
//        printf("lao nian\n");
//    else
//        printf("chang shou lao ren\n");
//    return 0;
//}

//3������else����
//int main()
//{
//    int a=0;
//    int b=2;                                        //Ӧ��Ϊ
//    if(a==1)                                        // {
//        if(b==2)                                    //    if(b==2)
//            printf("heh\n");//                      //        printf("heh\n");
//        else                                        //    else
//            printf("hah\n");//���ڵ� if else ���   //        printf("hah\n");
//    return 0;                                       // }
//    //�˴�����Ϊ��
//}

//4���ж�Ϊ��������ż��
//int main()
//{
//    int num = 0;
//    scanf ("%d", &num);
//    if (num % 2 == 1)
//    {
//        printf ("����\n");
//    }
//    else
//    {
//        printf ("ż��\n");
//    }
//    return 0;
//}

//5�����1-100֮�������
//����һ
//int main()
//{
//    int num = 0;
//    int count = 0;//�������ж�������
//    for (num = 1; num < 101; num++)
//    {
//        if (num % 2 == 1)
//        {
//            printf("%d ", num);
//            count++;
//        }
//    }
//    printf("\ncount=%d\n", count);
//    return 0;
//
//}

//������
int main()
{
    int num = 0;
    for (num = 1; num <= 100; num += 2)//A += B  ��ͬ��  A=A+B
        {
            printf("%d ", num);
        }
    return 0;
}
