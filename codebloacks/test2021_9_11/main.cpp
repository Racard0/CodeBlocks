#include<stdio.h>
//int add(int x,int y)
//{
//    int z=0;
//    z=x+y;
//    return z;
//}
int main()
{
    //�±����ò�����
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    printf("%d\n",arr[6]);//7��[6]��0��ʼ��ȡ������Ԫ��
    /*���ú�����ʱ�򣬺����������()���Ǻ������ò�����*/


//    //���ű��ʽ���ö��Ÿ���
//    int a=1;
//    int b=2;
//    int c=3;
//          //a=3  c=5   b=8
//    int d=(a=b+1,c=a+2,b=c+3);
//    printf("%d\n",d);//8�����������μ��㣬���һ��Ϊ���ʽ�Ľ��




//    //��������������Ŀ��������
//    //����
//    //exp1 ? exp2 : exp3
//    //exp1������exp2���㣬���ʽ�ṹΪexp2�Ľ��
//    //exp1������,exp3���㣬���ʽ�ṹΪexp3�Ľ��
//    int a=6;
//    int b=3;
//    int max=0;
////    if(a>b)
////        max=a;
////    else
////        max=b;//�����ж�
//    max=a>b?a:b;//����������
//    printf("%d\n",max);
//



//    int a=3;
//    int b=5;//1
////    int b=0;//0
//    int c=a&&b;
//    printf("%d\n",c);//&&���룬����1Ϊ�棬0Ϊ��

////    int a=1;//1
//    int a=0;//0
//    int b=0;
//    int c=a||b;
//    printf("%d\n",c);//||,��



//    int a=(int)3.14;
//    printf("%d\n",a);//3

//    int a=17,b=5;
//    double c;
//    c=(double)a/b;
//    printf("%f\n",c);


//    int a=10;
//    int b=a++;
//    printf("%d\n",b);
//    printf("%d\n",a);
//    //10
//    //11
//    //����++����ʹ�ã���++


//    int a=10;
//    int b=++a;
//    printf("%d\n",b);
//    printf("%d\n",a);
//    //11
//    //11
//    //ǰ��++,��++����ʹ��


//    int a=0;
//    printf("%d\n",~a);//~,��������ȡ�������е�1��0��0��1
//    //Ϊ11111111111111111111111111111111
//    //��-1�Ĳ��룬���Խ��Ϊ-1
//    //������ԭ�롢���롢������ͬ


//    int arr[10]={0};
//    printf("%d\n",sizeof(arr[0]));//4����������ĵ�һ���ֽڵĴ�С
//    printf("%d\n",sizeof(arr));//40���������������ܴ�С����λ���ֽڣ�intռ�ĸ��ֽڣ��ܹ���ʮ���ֽ�
//    int sz=sizeof(arr)/sizeof(arr[0]);//10���������������������
//    printf("%d\n",sz);
//    int a=10;
//    printf("%d\n",sizeof(int));//sizeof��һ�����������������ͻ��߱����Ĵ�С
//    printf("%d",sizeof a);//���ſ���ʡ�ԣ���Ϊsizeof�ǲ����������������Ų���ʡ��
//    int a=10;
//    printf("%d\n",!a);//��(�߼�ȡ��)0Ϊ�٣���0Ϊ��
//    int a=2;
//    int b=a>>1;//����1λ
//    int b=a<<1;//����1λ������-�ƶ����Ƕ����Ƶ�2(00000000000000000000000000000010),�ƶ���Ϊ(000...100)Ϊ4�Ķ�����
//    printf("%d\n",b);
//    float a=9%2;//%ȡ����
//    float a=9/2.0;
//    float a=9/2;
//    printf("%f\n",a);
//    int arr[10]={1,2,3,4,5,6,7,8,9,10};//�������±�������
//    char ch[5]={'a','b','c'};
//    int i=0;
//    while(i<5)
//    {
//        printf("%c",ch[i]);
//        i++;
//    }
//    int num1=0;
//    int num2=0;
//    scanf("%d%d",&num1,&num2);
//    int sum =add(num1,num2);//��������
//    int sum=num1+num2;
//    printf("%d\n",sum);
//    int line = 0;//ѭ��
//    while(line<30000)
//    {
//        printf("daima:%d\n",line);
//        line++;
//    }
//    if(line==30000)
//    {
//        printf("hao offer\n");
//    }
//    int input = 0;//�����ֵ
//    printf("jia ru bi te:>\n");
//    printf("hao hao xue xi(1/0)?>:");
//    scanf("%d",&input);
//    if(input == 1)
//        printf("hao offer\n");
//    else
//        printf("mai shu\n");
    return 0;

}
