#include<stdio.h>
//int add(int x,int y)
//{
//    int z=0;
//    z=x+y;
//    return z;
//}
int main()
{
    //下标引用操作符
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    printf("%d\n",arr[6]);//7，[6]从0开始，取第六个元素
    /*调用函数的时候，函数名后面的()就是函数调用操作符*/


//    //逗号表达式，用逗号隔开
//    int a=1;
//    int b=2;
//    int c=3;
//          //a=3  c=5   b=8
//    int d=(a=b+1,c=a+2,b=c+3);
//    printf("%d\n",d);//8，从左到右依次计算，最后一个为表达式的结果




//    //条件操作符（三目操作符）
//    //？：
//    //exp1 ? exp2 : exp3
//    //exp1成立，exp2计算，表达式结构为exp2的结果
//    //exp1不成立,exp3计算，表达式结构为exp3的结果
//    int a=6;
//    int b=3;
//    int max=0;
////    if(a>b)
////        max=a;
////    else
////        max=b;//条件判断
//    max=a>b?a:b;//条件操作符
//    printf("%d\n",max);
//



//    int a=3;
//    int b=5;//1
////    int b=0;//0
//    int c=a&&b;
//    printf("%d\n",c);//&&，与，并；1为真，0为假

////    int a=1;//1
//    int a=0;//0
//    int b=0;
//    int c=a||b;
//    printf("%d\n",c);//||,或，



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
//    //后置++，先使用，后++


//    int a=10;
//    int b=++a;
//    printf("%d\n",b);
//    printf("%d\n",a);
//    //11
//    //11
//    //前置++,先++，后使用


//    int a=0;
//    printf("%d\n",~a);//~,按二进制取反，所有的1变0，0变1
//    //为11111111111111111111111111111111
//    //是-1的补码，所以结果为-1
//    //正数的原码、反码、补码相同


//    int arr[10]={0};
//    printf("%d\n",sizeof(arr[0]));//4，计算数组的第一个字节的大小
//    printf("%d\n",sizeof(arr));//40，计算的是数组的总大小，单位是字节；int占四个字节，总共有十个字节
//    int sz=sizeof(arr)/sizeof(arr[0]);//10，数组总数处于数组个数
//    printf("%d\n",sz);
//    int a=10;
//    printf("%d\n",sizeof(int));//sizeof是一个操作符，计算类型或者变量的大小
//    printf("%d",sizeof a);//括号可以省略，因为sizeof是操作符，函数后括号不可省略
//    int a=10;
//    printf("%d\n",!a);//！(逻辑取反)0为假，非0为真
//    int a=2;
//    int b=a>>1;//右移1位
//    int b=a<<1;//左移1位操作符-移动的是二进制的2(00000000000000000000000000000010),移动后为(000...100)为4的二进制
//    printf("%d\n",b);
//    float a=9%2;//%取余数
//    float a=9/2.0;
//    float a=9/2;
//    printf("%f\n",a);
//    int arr[10]={1,2,3,4,5,6,7,8,9,10};//数组用下标来访问
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
//    int sum =add(num1,num2);//函数方法
//    int sum=num1+num2;
//    printf("%d\n",sum);
//    int line = 0;//循环
//    while(line<30000)
//    {
//        printf("daima:%d\n",line);
//        line++;
//    }
//    if(line==30000)
//    {
//        printf("hao offer\n");
//    }
//    int input = 0;//输入的值
//    printf("jia ru bi te:>\n");
//    printf("hao hao xue xi(1/0)?>:");
//    scanf("%d",&input);
//    if(input == 1)
//        printf("hao offer\n");
//    else
//        printf("mai shu\n");
    return 0;

}
