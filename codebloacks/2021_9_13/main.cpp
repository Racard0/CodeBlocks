#include<stdio.h>
//typedef unsigned int u_int;//typedef���Ը���������ȡ����,��unsigned intȡ��u_int

//void test()
//{
//    static int a=1;//static:���ξֲ�������������̬�������ı�ֲ��������������ڣ�������ʱa�Ǿֲ�����
//    a++;           //�����ϸı��˱������洢����
//    printf("%d ",a);
//}

//extern int g_val;//extern,�����ⲿ����(test2.cpp)


//extern int Add(int,int);


//#define max 250
//int main()
//{
//    printf("%d\n",max);


//    int a=10;
//    int b=20;
//    int sum=Add(a,b);
//    printf("sum=%d\n",sum);

//    printf("%d\n",g_val);//2021,ȫ�ֱ��������������ж�����ʹ��


//    int i=0;
//    while(i<10)
//    {
//        test();
//        i++;
//    }



//    unsigned int num=100;//����������ʽ��˼��ͬ
//    u_int num=100;//typedef:���Ը���������ȡ����
//    return 0;
//}


//1��define �����
//#define add(X,Y) X+Y
//int main()
//{
//    printf("%d\n",add(3,6));//3+6=9
//    printf("%d\n",4*add(3,6));//4*3+6=18
//    return 0;
//}

//��((X)+(Y))ʱ
//#define add(X,Y) ((X)+(Y))
//int main()
//{
//    printf("%d\n",add(3,6));//3+6=9
//    printf("%d\n",4*add(3,6));//4*(3+6)=36
//    return 0;
//}


//2��ָ��
//int main()
//{
//    int a= 10;
//    printf("%p\n",&a);//%p,ר��������ӡ��ַ
//    int *pa=&a;//pa������ŵ�ַ������ָ�����
//    //*˵��a��ָ�����
//    //int˵��aִ�еĶ�����int���͵�
//    //����
//    char ch='w';
//    int *pc=&ch;//�ַ���ָ��
//    return 0;
//}

//* �����ò����� (ָ�롪����ַ)
//int main()
//{
//    int a=10;
//    int *p=&a;
//    *p=20;//�����ã�*pa����ͨ��pa��ĵ�ַ�ҵ�a
//    printf("%d\n",a);
//    return 0;
//}


int main()
{
    printf("%d\n",sizeof(char*));     //4
    printf("%d\n",sizeof(short*));    //4
    printf("%d\n",sizeof(int*));      //4
    printf("%d\n",sizeof(long*));     //4
    printf("%d\n",sizeof(long long*));//4
    printf("%d\n",sizeof(float*));    //4
    printf("%d\n",sizeof(double*));   //4
    return 0;
    //ָ��������ŵ�ַ
    //ָ����Ҫ���ռ䣬ȡ���ڵ�ַ�Ĵ洢��Ҫ���ռ�
    //32λ 32it 4byte
    //64λ 64it 8byte
}


