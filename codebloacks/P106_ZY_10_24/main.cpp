#include<stdio.h>

//P106
//��ҵ

//һ������ת��

//1��
//int i;
//int main()
//{
//    i--;
//    if(i > sizeof(i))
//    //sizeof����Ľ����unsiged int
//    //���intת��ΪΪ�޷��������ټ���
//    {
//        printf(">\n");
//    }
//    else
//    {
//        printf("<\n");
//    }
//    return 0;
//}
//>

//2������һ����ǰ����֮��
//���磺2+22+222+2222+22222
//myself
//int sn(int i)
//{
//    int num = 0;
//    int x = 10;
//    int y = 0;
//    for(int n = 1; n <= 5; n++)
//    {
//        i = i + num;
//        num = 2 * x;
//        x *= 10;
//        y += i;
//    }
//    return y;
//}
//int main()
//{
//    int i = 2;
//    printf("%d\n", sn(i));
//    return 0;
//}

//teacher
//int main()
//{
//    int a = 0;
//    int n = 0;
//    scanf("%d %d", &a, &n);
//    int sum = 0;
//    int ret = 0;
//    for(int i = 0; i < n; i++)
//    {
//        ret = ret * 10 + a;
//        sum += ret;
//    }
//    printf("sum=%d\n", sum);
//    return 0;
//}

//3��ʹ��ָ�룬��ӡarr����������
//��һ
//int main()
//{
//    int arr[] = {1,2,3,4,5};
//    int *parr = arr;
//    int sz = sizeof(arr) / sizeof(arr[0]);
//    for(int i = 0; i < sz; i++)
//    {
//        printf("%d ", *(parr+i));
//    }
//    printf("\n");
//    return 0;
//}

//����
//int main()
//{
//    int arr[] = {1,2,3,4,5,6,7,8,9};
//    int sz = sizeof(arr) / sizeof(arr[0]);
//    int *parr = arr;//1�ĵ�ַ
//    int *pend = arr + sz - 1;
//    while(parr <= pend)
//    {
//        printf("%d ", *parr);
//        parr++;
//    }
//    printf("\n");
//    return 0;
//}

//4����0~100000֮������С�ˮ�ɻ����������
//ˮ�ɻ��� - һ��nλ�������λ�����n�η�֮�͵��ڸ�������
//��153=1^3+5^3+3^3=153
//myself
//int main()
//{
//    int i,a,b,c,d,e,f,g;
//    for(i = 0; i <= 100000; i++)
//    {
//        if(i >= 0 && i <= 9)
//        {
//            printf("%d ", i);
//        }
//        if(i >= 100 && i <= 999)
//        {
//            a = i / 100;//��λ
//            b = i / 10 % 10;//ʮλ
//            c = i % 10;//��λ
//            if(i == a*a*a+b*b*b+c*c*c)
//            {
//                printf("%d ", i);
//            }
//        }
//        if(i >= 1000 && i <=9999)
//        {
//            a=i / 1000;//ǧλ
//            b=i % 1000 / 100;//��λ
//            c=i % 1000 % 100 / 10;//ʮλ
//            d=i % 10;//��λ
//            if(i == a*a*a*a+b*b*b*b+d*d*d*d+c*c*c*c)
//            {
//                printf("%d ",i);
//            }
//        }
//        if(i >= 10000 && i <= 99999)
//        {
//            a=i / 10000;//��λ
//            b=i % 10000 / 1000;//ǧλ
//            c=i % 10000 % 1000 / 100;//��λ
//            d=i % 10000 % 1000 % 100 / 10;//ʮλ
//            e=i % 10;//��λ
//            if(i == a*a*a*a*a+b*b*b*b*b+d*d*d*d*d+c*c*c*c*c+e*e*e*e*e)
//            {
//                printf("%d ",i);
//            }
//        }
//    }
//    return 0;
//}
//0 1 2 3 4 5 6 7 8 9 153 370 371 407 1634 8208 9474 54748 92727 93084

//teacher
#include<math.h>
//int main()
//{
//    int i = 0;
//    for(i = 0; i <= 100000; i++)
//    {
//        //�ж�i�Ƿ���������
//        //1������i��λ�� - n
//        int n = 1;
//        int tmp = i;
//        while(tmp / 10)
//        {
//            n++;
//            tmp = tmp / 10;
//        }
//
//        //2������i��ÿһλn������֮��
//        tmp = i;
//        int sum = 0;
//        while(tmp)
//        {
//            //pow������η�
//            sum += pow(tmp % 10, n);
//            tmp = tmp / 10;
//        }
//
//        //3���ж�
//        if(sum == i)
//        {
//            printf("%d ", i);
//        }
//    }
//    return 0;
//}
//0 1 2 3 4 5 6 7 8 9 370 371 407 1634 8208 9474 54748 92727 93084




//����ָ�����
//P106

//1��
//int main()
//{
//    unsigned long pulArray[] = {6,7,8,9,10};
//    unsigned long *pulPtr;
//    pulPtr = pulArray;
//    *(pulPtr + 3) += 3;
//    printf("%d,%d\n", *pulPtr, *(pulPtr + 3));
//    return 0;
//}
//6,12

//2��
//struct stu
//{
//    int num;
//    char name[10];
//    int age;
//};
//void fun(struct stu *p)
//{
//    printf("%s\n", (*p).name);
//    return;
//}
//int main()
//{
//    struct stu students[3] = {{9801, "zhang", 20}, {9802, "wang", 19}, {9803, "zhao", 18}};
//    fun(students + 1);
//    return 0;
//}
//wang

//3�������ַ���
#include<string.h>
//��һ
//void reverse(char *left, char *right)
//{
//    while(left < right)
//    {
//        char tmp = 0;
//        tmp = *left;
//        *left = *right;
//        *right = tmp;
//
//        left++;
//        right--;
//    }
//}
//int main()
//{
//    char arr[] = "dbtxyyds";
//    int len = strlen(arr);
//    reverse(arr, arr + len - 1);
//    printf("%s\n", arr);
//    return 0;
//}
//sdyyxtbd

//����
#include<assert.h>
//void reverse(char *str)
//{
//    assert(str);
//    int len = strlen(str);
//
//    char *left = str;
//    char *right = str + len - 1;
//
//    while(left < right)
//    {
//        char tmp = 0;
//        tmp = *left;
//        *left = *right;
//        *right = tmp;
//        left++;
//        right--;
//    }
//}
//int main()
//{
//    char arr[] = "destroyer";
//    reverse(arr);
//    printf("%s\n", arr);
//    return 0;
//}

//4����ӡ����
//int main()
//{
//    int line = 0;
//    scanf("%d", &line);
//
//    //�ϰ벿��
//    int i = 0;
//    for(i = 0; i < line; i++)
//    {
//        //��ӡһ��
//        //��ӡ�ո�
//        int j = 0;
//        for(j = 0; j < line - 1 - i; j++)
//        {
//            printf(" ");
//        }
//        //��ӡ*
//        for(j = 0; j < 2 * i + 1; j++)
//        {
//            printf("*");
//        }
//        printf("\n");
//    }
//
//    //�°벿��
//    for(i = 0; i < line - 1; i++)
//    {
//        //�ո�
//        int j = 0;
//        for(j = 0; j <= i; j++)
//        {
//            printf(" ");
//        }
//
//        //*
////        for(j = 0; j < 2*(line-i)-3; j++)
//        for(j = 0; j < 2*(line - 1 - i) - 1; j++)
//        {
//            printf("*");
//        }
//        printf("\n");
//    }
//    return 0;
//}

//5��һƿ��ˮ1Ԫ��������ƿ���Ի�һƿ��ˮ����20Ԫ���Ժȶ�����ˮ
//39ƿ
int main()
{
    int money = 0;
    scanf("%d", &money);
    int total = money;
    int empty = money;
    //�û�
    while(empty >= 2)
    {
        total += empty / 2;
        empty = empty / 2 + empty % 2;
    }
    printf("%d\n", total);
    return 0;
}
























//int main()
//{
//    int i,a,b,c,d,e,f,g;
//    printf("'water flower'number is:");
//    for(i=10000;i<100000;i++)
//    {
//        a=i/10000;//��λ
//        b=i%10000/1000;//ǧλ
//        c=i%10000%1000/100;//��λ
//        d=i%10000%1000%100/10;//ʮλ
//        e=i%10;//��λ
//        if(i==a*a*a*a*a+b*b*b*b*b+d*d*d*d*d+c*c*c*c*c+e*e*e*e*e)
//        {
//            printf("%d ",i);
//        }
//    }
//    printf("\n");
//    return 0;
//}
