#include<stdio.h>

//һ������

//1���⺯��
#include<string.h>

//strcpy
//int main()
//{
//    char arr1[20] = {0};
//    char arr2[] = "abc";
//
//    strcpy(arr1, arr2);
//
//    printf("%s\n", arr1);
//    return 0;
//}


//2���Զ��庯��

//(1)дһ�������ҳ����������еĽϴ�ֵ
//get_max
//int get_max(int x, int y)//��ֵ����
//{
//    int z = 0;
//    if (x > y)
//    {
//        z = x;
//    }
//    else
//    {
//        z = y;
//    }
//    return z;
//}
//
//int main()
//{
//    int a = 0;
//    int b = 0;
//    printf("num:");
//
//    scanf("%d%d", &a, &b);
//
//    int max = get_max(a, b);//�����ĵ���
//
//    printf("max = %d\n", max);
//    return 0;
//}

//(2)�����������ͱ���
//void����ʾ��������������κ�ֵ��Ҳ����Ҫ����
//void get_exchange(int *pa, int *pb)//�������壬�βΣ��������ڶ̣�ֻ�ں�������Ч
//{                //��ַ����        //ʵ�δ����β���ʵ��ʵ�ε�һ����ʱ����
//                                   //�ı��ββ��ܸı�ʵ��
//    int z = 0;
//    z = *pa;
//    *pa = *pb;
//    *pb = z;
//}
//
//int main()
//{
//    int a = 0;
//    int b = 0;
//    printf("num:");
//    scanf("%d%d", &a, &b);
//
//    get_exchange(&a, &b);//�������ã�ʵ��
//                         //ʵ�� - ���������������ʽ��������
//    printf("exchange:%d %d\n", a, b);
//    return 0;
//}


//(3)��ϰ
//дһ�������ж��ǲ�������(������ʽ)
//�Լ�д��
//int sushu(int x, int y)
//{
//    int n = 0;
//    for (n = 2; n < x; n++)
//    {
//        if (x % n == 0)
//        {
//            y = 0;
//            break;
//        }
//    }
//    if (x == n)
//    {
//        y = 1;
//    }
//    return y;
//}
//
//int main()
//{
//    int i = 0;
//    int m = 0;
//    printf("num:");
//    scanf("%d", &i);
//
//    int ss = sushu(i, m);
//
//    if (ss == 1)
//    {
//        printf("������\n", ss);
//    }
//    else
//    {
//        printf("��������\n", ss);
//    }
//
//}

//��ʦд��
//��ӡ100-200������
//int is_prime(int n)
//{
//    int m = 0;
//    for (m = 2; m < n; m++)
//    {
//        if (n % m == 0)
//        {
//            return 0;
//        }
//    }
//    return 1;
//}
//
//int main()
//{
//    int i = 0;
//    int count = 0;
//    for (i = 100; i <= 200; i++)
//    {
//        if (is_prime(i) == 1)
//        {
//            printf("%d ", i);
//            count++;
//        }
//    }
//    printf("\n����:%d\n", count);
//    return 0;
//}

//�ж��ǲ�������
//�Լ�д��
//int is_year(int x)
//{
//    if((x%4==0) && (x%100!=0) || (x%400==0))
//    {
//        return 1;
//    }
//    return 0;
//}
//
//int main()
//{
//    int i = 0;
//    printf("���������:");
//    scanf("%d", &i);
//    if (is_year(i) == 1)
//    {
//        printf("������\n");
//    }
//    else
//    {
//        printf("��������\n");
//    }
//
//}

//��ӡ1000-2000������
//int is_year(int x)
//{
//    if ((x%4==0) && (x%100!=0) || (x%400==0))
//    {
//        return 1;
//    }
//    else
//    {
//        return 0;
//    }
//}
//
//int main()
//{
//    int i = 0;
//    int count = 0;
//    for (i = 1000; i <= 2000; i++)
//    {
//        if (is_year(i) == 1)
//        {
//            printf("%d ", i);
//            count++;
//        }
//    }
//    printf("\nnumber:%d\n", count);
//    return 0;
//}

//��ʦд��
//int is_year(int x)
//{
//    return ((x%4==0) && (x%100!=0) || (x%400==0));
//    //Ϊ�淵��1��
//}
//
//int main()
//{
//    int i = 0;
//    int count = 0;
//    for (i = 1000; i <= 2000; i++)
//    {
//        if (is_year(i) == 1)
//        {
//            printf("%d ", i);
//            count++;
//        }
//    }
//    printf("\nnumber:%d\n", count);
//    return 0;
//}

//дһ��������ʵ��һ��������������Ķ��ֲ���
int binary_search(int a[], int k, int s)
{
    int left = 0;
    int right = s - 1;

    while(left <= right)
    {
        int mid = (left + right) / 2;
        if (a[mid] > k)
        {
            right = mid - 1;
        }
        else if (a[mid] < k)
        {
            left = mid + 1;
        }
        else
        {
            return mid;
        }
    }
    return -1;//�Ҳ���
}

int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int key = 0;
    printf("Ҫ���ҵ�����");
    scanf("%d",&key);

    int sz = sizeof(arr) / sizeof(arr[0]);

    //�ҵ��˾ͷ����±�
    //�Ҳ�������-1��

    int ret = binary_search(arr, key, sz);//binary n.������
              //����arr���Σ�ʵ�ʴ��ݵĲ�������ı���
              //�������ݹ�ȥ�������׸�Ԫ�صĵ�ַ

    if (-1 == ret)
    {
        printf("�Ҳ���\n");
    }
    else
    {
        printf("�ҵ��ˣ��±�Ϊ��%d\n", ret);
    }
    return 0;
}
