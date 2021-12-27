#include<stdio.h>

//P96
//数据存储

//一、

//release版本
//int main()
//{
//    int i = 0;
//    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//    for(i = 0;i <= 12; i++)
//    {
//        arr[i] = 0;
//        printf("hehe\n");
//    }
//    return 0;
//}
//release不会死循环
//自动优化


//二、大小端字节序
//大端字节序 - 把数据的低位字节序的内容存放在高地址处
//高位字节序的内容存放在低地址处
//小端字节序 - 把数据的低位字节序的内容存放在低地址处
//高位字节序的内容存放在高地址处

//1、
//int main()
//{
//    int a = 0x11223344;
//    return 0;
//}

//2、判断当前机器的字节序
//法一
//int main(){
//    int a = 1;
//    char* p = (char*)&a;
//    if(*p == 1){
//        printf("小端字节序\n");
//    }
//    else{
//        printf("大端字节序\n");
//    }
//    return 0;
//}

//法二
//int check_sys(){
//    int a = 1;
//    char* p = (char*)&a;
//    if(*p == 1){
//        return 1;
//    }
//    else{
//        return 0;
//    }
//}
//int main(){
//    int ret = check_sys();
//    if(ret == 1){
//        printf("xiao\n");
//    }
//    else{
//        printf("da\n");
//    }
//    return 0;
//}

//简化
//int check_sys()
//{
//    int a = 1;
//    char* p = (char*)&a;
//    return *p;
//    //返回1表示小端，0表示大端
//}
//int main()
//{
//    int ret = check_sys();
//    if(ret == 1)
//    {
//        printf("xiao\n");
//    }
//    else
//    {
//        printf("da\n");
//    }
//    return 0;
//}


//三、练习

//1、结果
//int main()
//{
//    char a = -1;
//    signed char b = -1;
//    unsigned char c = -1;
//    //无符号字符型
//    //原 - 10000001
//    //反 - 11111110
//    //补 - 11111111
//    //整型提升
//    //00000000000000000000000011111111 - 255
//    printf("a=%d b=%d c=%d\n", a, b, c);
//    return 0;
//}
//a=-1 b=-1 c=255

//2、结果
//int main()
//{
//    char a = -128;
//    //10000000000000000000000010000000
//    //11111111111111111111111101111111
//    //11111111111111111111111110000000
//    //%u - 不把1看作符号位
//    //11111111111111111111111110000000 - 4294967168
//    printf("%u\n", a);
//    //%u - 无符号十进制整数
//    return 0;
//}
//4294967168

//3、
//int main()
//{
//    char a = 128;
//    //00000000000000000000000010000000
//    //10000000
//    //11111111111111111111111110000000
//    printf("%u\n", a);
//    return 0;
//}
//4294967168

//4、
//int main()
//{
//    int i = -20;
//    unsigned int  j = 10;
//    printf("%d\n", i + j);
//    return 0;
//}
//-10

//5、
//int main()
//{
//    unsigned int i;
//    for(i = 9; i >= 0; i--)
//    {
//        printf("%u\n", i);
//    }
//    return 0;
//}
//无符号，i恒大于0
//死循环

//6、
#include<string.h>
//int main()
//{
//    char a[1000];
//    int i;
//    for(i=0; i<1000; i++)
//    {
//        a[i] = -1-i;
//    }
//    //-1 -2 -3...-127 -128 127 126...3 2 1 0 -1 -2 -3...-127 -128 127...
//    printf("%d", strlen(a));
//    //strlen到0停止
//    //128+127=255
//    return 0;
//}
//255

//7、
//unsigned char i = 0;
//int main()
//{
//    for(i=0; i<=255;i++)
//    {
//        printf("hello world\n");
//    }
//    return 0;
//}
//永远不会大于255
//死循环


//四、浮点型练习

//1、
//int main()
//{
//    int n = 9;
//    float* pflaot = (float*)&n;
//    printf("n=%d\n", n);

//    printf("*pfloat=%f\n", *pflaot);
      //把int看做浮点数
      //0 00000000 000000000000000000001001
      //s     e                m
      //0.000000000000000000001001*2^-126 - 太小了
//
//    *pflaot = 9.0;
      //1001.0
      //1.001*2^3
      //e=3
      //0 10000010 00100000000000000000000 - 1091567616
//    printf("n=%d\n", n);
//    printf("*pfloat=%f\n", *pflaot);
//    return 0;
//}
//n=9
//*pfloat=0.000000
//n=1091567616
//*pfloat=9.000000

//2、
int main()
{
    float f = 5.5f;
    //101.1
    //.001 * 2^2
    //s=0 m=1.011 e=2
    //s=0 m=011 e=127+2

    //0100 0000 011 0000 0000 0000 0000 0000
    //40 b0 00 00

    return 0;
}
