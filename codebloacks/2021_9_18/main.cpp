#include<stdio.h>

//һ��do while ѭ��(��ִ�У����ж�)
//1����ӡ1-10
//int main()
//{
//    int i = 1;
//    do
//    {
//        printf("%d ", i);
//        i++;
//    }while (i <= 10);
//
//    return 0;
//
//}
//1 2 3 4 5 6 7 8 9 10

//2��break
//int main()
//{
//    int i = 1;
//    do
//    {
//        if (i == 5)
//            break��
//            //����ѭ��������������
//                           |
//        printf("%d ", i);  |
//        i++;               |
//    }while (i <= 10);      |
//                           |
//    return 0;   <����������������������
//
//}
//1 2 3 4

//3��continue
//int main()
//{
//    int i = 1;
//    do
//    {
//        if (i == 5)
//            continue;
//
//        printf("%d ", i);
//        i++;
//    }while (i <= 10);
//
//    return 0;
//
//}
//1 2 3 4 ѭ��
//��Զ������5�ı˶ˣ�һֱѭ����ȥ

//4���׳�

//for
//int main()
//{
//    int i = 0;
//    printf("�����룺");
//    scanf("%d", &i);
//    int sum = 1;
//    for (int n = 1; n <= i; n++)
//    {
//        sum *= n;
//    }
//    printf("���Ϊ��%d\n", sum);
//    return 0;
//}

//do while
//int main()
//{
//    int i = 0;
//    printf("number:");
//    scanf("%d", &i);
//    int sum = 1;
//    int n = 1;
//    do
//    {
//        sum *= n;
//        n++;
//    }while(n <= i);
//
//    printf("sum:%d\n", sum);
//    return 0;
//}

//1-10�Ľ׳�֮��
//int main()
//{
//    int i = 0;
//    int sum = 1;
//    int num = 0;
//    for(i=1; i <= 10; i++)
//        {
//            sum *= i;
//            num += sum;//��������ôû�뵽��
//        }
//    printf("%d\n", num);
//    return 0;
//}

//1-10�׳�֮��2
//int main()
//{
//    int i = 0;
//    int n = 0;
//    int z = 0;
//    printf("num:");
//    scanf("%d", &z);
//    int sum = 1;
//    int num = 0;
//    for (n = 1; n <= z; n++)
//    {
//        sum = 1;
//        //����n�Ľ׳�֮ǰ����um��ʼΪ1
//        for (i = 1; i <= z; i++)
//        {
//            sum *= i;
//            num += sum;
//        }
//    }
//    printf("sum:%d\n", num);
//    return 0;
//}

//��һ�����������в��Ҿ����ĳ������(���ֲ���)
int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int k = 0;//��arr�������������в���k��ֵ
    printf("Ѱ�ҵ���Ϊ:");
    scanf ("%d", &k);
    int sz = sizeof(arr) / sizeof(arr[10]);//�����Ԫ�ظ���
    int left = 0;
    int right = sz - 1;
    while (left <= right)
    {

        int mid = (left + right) / 2;
        if (arr[mid] < k)
        {
            left = mid + 1;

        }
        else if (arr[mid] > k)
        {
            right = mid - 1;

        }
        else
        {
            printf("�±�Ϊ:%d\n", mid);
            break;
        }
    }
    if (left > right)
    {
        printf("�Ҳ���");
    }
    return 0;
}
