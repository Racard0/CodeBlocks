#include<stdio.h>

//P79
//ָ��

//һ�� ָ�����͵�����
//1��ָ�����;����ˣ�ָ������õ�Ȩ���ж��
//2��ָ�����;����ˣ�ָ����һ���߶�Զ��������

//����Ұָ�룺ָ��ָ���λ���ǲ���֪�ģ�����ġ�����ȷ�ġ�û����ȷ���Ƶ�
//����

//1��ָ��δ��ʼ��
//int main()
//{
//    int *p;//pΪҰָ��
//    //p��һ���ֲ���ָ��������ֲ���������ʼ����Ĭ�������ֵ
//    *p = 20;//�Ƿ������ڴ�
//    return 0;
//}

//2��ָ��Խ��
//int main()
//{
//    int arr[10] = {0};
//    int *p = arr;
//    int i = 0;
//    for (i = 0; i <= 10; i++)
//    {
//        *p = i;//pΪҰָ��
//        //�ӵ�11������p�ķ�Χ
//        p++;
//    }
//    return 0;
//}

//3��ָ��ָ��Ŀռ��ͷ�
//int *test()
//{
//    int a = 10;
//    return &a;
//}
//int main()
//{
//    int *p = test();
//    *p = 20;//pΪҰָ��
//    return 0;
//}

//4������Ұָ��
//��1��ָ���ʼ��
//��֪p��ʼ��Ϊ��ֵʱ��ֱ��ΪNULL

//С��ָ��Խ��
//ָ��ָ��ռ��ͷż�ʱ��NULL
//ʹ��ǰ�����Ч��

//����ָ������

//1��ָ��+-����
//#define N_VALUES 5
//float values[N_VALUES];
//float *vp;
//for (vp = &values[0]; vp < &values[N_VALUES];)
//{
//    *vp++ = 0;
//}
//���ΪN_VALUES��5����ȫΪ0

//int main()
//{
//    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//    int *p = arr;
//    int *pend = arr + 9;
//
//    while(p <= pend)
//    {
//        printf("%d ", *p);
//        p++;
//    }
//    return 0;
//}
//1 2 3 4 5 6 7 8 9 10

//2��ָ��-ָ��,�õ���������ָ��֮���Ԫ�ظ���
//���ǰ�ᣬ����ָ��ָ��ͬһ��ռ�
//int main()
//{
//    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//    printf("%d\n", &arr[9] - &arr[0]);
//    return 0;
//}
//9

#include<string.h>
//int my_strlen(char *str)
//{
//    char *start = str;
//    while (*str != '\0')
//    {
//        str++;
//    }
//    return str - start;
//}
//int main()
//{
//    int len = my_strlen("abc");
//    printf("%d\n", len);
//    return 0;
//}
//3



//P82
//һ��ָ�������
//int main()
//{
//    int arr[] = {0};
//    //%p - ָ��
//    printf("%p\n", arr);//��������������Ԫ�صĵ�ַ
//    printf("%p\n", &arr[0]);
//    return 0;
//}

//int main()
//{
//    int arr[10] = {0};
//    int *p = arr;
//    int i = 0;
//    for (i = 0; i < 10; i++)
//    {
//        printf("%p <---> %p\n", &arr[i], p+i);
//        //p+i�����ľ��������±�Ϊi�ĵ�ַ
//    }
//    return 0;
//}
//�����ͬ

//int main()
//{
//    int arr[10] = {0};
//    int *p = arr;
//    int i = 0;
//    for (i = 0; i < 10; i++)
//    {
//        *(p+i) = i;
//    }
//    for (i = 0; i < 10; i++)
//    {
//        printf("%d ", *(p+i));
//    }
//    return 0;
//}

//int main()
//{
//    int arr[10] = {1,2,3,4,5,6,7,8,9,20};
//    int *p = arr;
//
//    printf("%d\n", arr[2]);
//    //arr[2] ==> *(arr+2) ==> *(2+arr) ==> 2[arr]
//    //==> *(p+2) ==> *(2+p) ==> p[2] ==>
//    printf("%d\n", 2[arr]);
//    printf("%d\n", 2[p]);
//    printf("%d\n", p[2]);
//    return 0;
//}


//��������ָ�� - ����
//int main()
//{
//    int a = 10;
//    int *pa = &a;//pa��ָ�������һ��ָ��
//
//    //ppa,����ָ��
//    int **ppa = &pa;//paҲ�Ǳ�����&paȡ��pa���ڴ��е���ʼ��ַ
//    //*ppa==pa
//    //*pa==a
//    //**ppa=a
//
//    int ***pppa = &ppa;//����ָ��
//
//    return 0;
//}

//����ָ������ - ����
int main()
{
    int arr[10];
    //�������� - ������͵�����
    char ch[5];
    //�ַ����� - ����ַ�
    int *parr[5];
    //ָ������ - ���ָ��
    char *pch[5];
    //�ַ�ָ������
    return 0;
}

