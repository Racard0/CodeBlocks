#include <stdio.h>
#include <stdlib.h>

//P153
//��̬�ڴ濪��


//1��malloc
//int main()
//{
//    //����10�����͵Ŀռ�
//    int arr[10];//ջ��
//
//    //��̬�ڴ濪��
//    int *p = (int*)malloc(10 * sizeof(int));
//
//    //ʹ�ÿռ��ʱ��
//    if(p == NULL)
//    {
////        printf("malloc fail\n");
//
//        perror("errno");//perror()������ӡstr(�ַ���)��һ����Ӧ��ִ�ж���Ĵ�����Ϣ��ȫ�ֱ���errno��.
//        return 0;
//    }
//    //ʹ��
//    int i;
//    for(i = 0; i < 10; i++)
//    {
//        *(p + i) = i;
//    }
//    for(i = 0; i < 10; i++)
//    {
//        printf("%d ", p[i]);
//        //�ȼ���
//        printf("%d ", *(p + i));
//    }
//
//    //���տռ�
//    free(p);
//    p = NULL;
//
//    return 0;
//}



//2��calloc - �Ὣ�ڴ��ʼ��
//void *calloc(size_t nitems, size_t size)
//����������ڴ�ռ䣬������һ��ָ������ָ�롣malloc �� calloc ֮��Ĳ�ͬ���ǣ�malloc ���������ڴ�Ϊ�㣬�� calloc �����÷�����ڴ�Ϊ��
//int main()
//{
//    int *p = (int*)calloc(10, sizeof(int));
//    if(p == NULL)
//    {
//        return 1;
//    }
//    for(int i = 0; i < 10; i++)
//    {
////        printf("%d ", p[i]);
//        printf("%d ", *(p + i));
//    }
//    free(p);
//    p = NULL;
//    return 0;
//}
//calloc - 0 0 0 0 0 0 0 0 0 0



//3��realloc
//void *realloc(void *ptr, size_t size) �������µ���֮ǰ���� malloc �� calloc ������� ptr ��ָ����ڴ��Ĵ�С
int main()
{
    int *p = (int*)calloc(10, sizeof(int));
    if(p == NULL)
    {
        perror("main");
        return 1;
    }
    for(int i = 0; i < 10; i++)
    {
        *(p + i) = 5;
    }

    //������Ҫpָ�����Ŀռ䣬��Ҫ20��int��realloc����
    int *ptr = (int*)realloc(p, 20 * sizeof(int));
    if(ptr != NULL)
    {
        p = ptr;
    }

    free(p);
    p = NULL;
    return 0;
}


int main(){
    int *p = (int*)malloc(NULL, 40);
    //��������malloc,ֱ���ڶ�������40���ֽ�
    return 0;
}
