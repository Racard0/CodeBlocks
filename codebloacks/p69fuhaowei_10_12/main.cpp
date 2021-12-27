#include<stdio.h>

//P69
//操作符

//一、移位符
// <<>> - 移位符,以二进制形式
//1、
//<< - 左移
//int main()
//{
//    int a = 2;
//    int b = a << 1;//<< - 左移，最左边丢弃一位，最右边补0
//    printf("b = %d\n", b);
//
////    int c = 2;
////    int d = c >> 1;//>> - 右移，最右边丢弃一位，最左边补0
////    printf("d = %d\n", d);
//    return 0;
//}
//b=4
//d=1

//2、
//>> - 右移
//1、算术右移：右边丢弃，左边补原符号位
//2、逻辑右移：右边丢弃，左边补0
//int main()
//{
//    int a = 10;//1010
//    int b = a >> 1;//101
//    printf("b = %d\n", b);
//    return 0;
//}
//b=5

//int main()
//{
//    int a = -1;
//    int b = a >> 1;
//    printf("b=%d\n", b);
//    return 0;
//}
//算术右移
//b=-1

//二、位操作符
//1、
//& - 按位与操作符，按二进制进行“与”运算。有0为0,全1为1

//int main()
//{
//    int a = 3;
//    int b = 5;
//    int c = a & b;
//    printf("c = %d\n", c);
//    //3 - 00000000000000000000000000000011
//    //5 - 00000000000000000000000000000101
//    //c - 00000000000000000000000000000001
//    return 0;
//}
//c=1

//2、
// | - 按位或，按二进制进行“或”运算。有1为1，全0为0

//int main()
//{
//    int a = 3;
//    int b = 5;
//    int c = a | b;
//    //00000000000000000000000000000111
//    printf("c=%d\n", c);
//    return 0;
//}
//c=7

//3、
//^ - 按位异或，按二进制，相同为0，相异为1

//int main()
//{
//    int a = 3;
//    int b = 5;
//    int c = a ^ b;
//    //00000000000000000000000000000110
//    printf("c=%d\n", c);
//    return 0;
//}
//c=6

//4、交换两个int变量，不能使用第三个变量，
//a=3 b=5,交换后，a=5,b=3

//法一,加法
//int main()
//{
//    int a = 3;
//    int b = 5;
//    printf("交换前\n");
//    printf("a = %d b = % d\n", a, b);
//    a = a + b;
//    b = a - b;
//    a = a - b;
//    printf("交换后\n");
//    printf("a = %d b = % d\n", a, b);
//    return 0;
//}
//该法，如果数字太大容易溢出

//法二，异或
//int main()
//{
//    int a = 3;
//    int b = 5;
//    printf("交换前\n");
//    printf("a = %d b = % d\n", a, b);
//    a = a ^ b;
//    //a = 110(6)
//    b = a ^ b;
//    //b = 011(3)
//    a = a ^ b;
//    //a = 101(5)
//    printf("交换后\n");
//    printf("a = %d b = % d\n", a, b);
//    return 0;
//}

//4、
//练习，求一个整数在内存中的二进制中1的个数
//法一，加减
//int main()
//{
//    int num = 0;
//    printf("number:");
//    scanf("%d",&num);
//    int count = 0;
//    while(num)
//    {
//        if (num % 2 == 1)
//        {
//            count++;
//        }
//        num = num / 2;
//    }
//    printf("1的个数：%d\n", count);
//    return 0;
//}

//法二，运算符
//int main()
//{
//    int num = 0;
//    printf("number:");
//    scanf("%d",&num);
//    int count = 0;
//    while(num)
//    {
//        if (num & 1 == 1)
//        {
//            count++;
//        }
//        num = num >> 1;
//    }
//    printf("1的个数：%d\n", count);
//    return 0;
//}

//short - 占两个字节
//int main()
//{
//    short a = 5;
//    int b = 3;
//    printf("%d\n", sizeof(a = a + b));
//    printf("%d\n", a);
//    return 0;
//}


// ~ - 按位取反
//int main()
//{
//    int a = -1;
//    //原码 - 10000000000000000000000000000001
//    //反码 - 11111111111111111111111111111110
//    //补码 - 11111111111111111111111111111111
//    //按位取反 - 00000000000000000000000000000000
//    int b = ~a;
//    printf("b=%d\n", b);
//    return 0;
//}
//b=0

//int main()
//{
//    int a = 1;
//    //正数的原码，反码，补码是其本身
//    int b = ~a;
//    printf("b=%d\n", b);
//    return 0;
//}
//b=-2

//前置后置 ++--
//int main()
//{
//    int a = 10;
//    int b = a++;//先使用，再++
//    printf("a=%d b=%d\n", a, b);
//    return 0;
//}
//a=11, b=10

//int main()
//{
//    int a = 10;
//    int b = ++a;//先++，后使用
//    printf("a=%d,b=%d\n", a, b);
//    return 0;
//}
//a=11,b=11

//int main()
//{
//    int a = 10;
//    int b = a--;
//    printf("a=%d,b=%d\n", a, b);
//    return 0;
//}
//a=9 b=10

//int main()
//{
//    int a = 10;
//    int b = --a;
//    printf("a=%d,b=%d\n", a, b);
//    return 0;
//}
//a=9,b=9

//int main()
//{
//    int a = 10;
//    printf("a=%d,a=%d\n", a--, a);
//    return 0;
//}
//a=10,a=9

//int main()
//{
//    int a = 10;
//    printf("a=%d,a=%d\n", --a, a);
//    return 0;
//}
//a=9,a=9

//& - 返回变量地址
//int main()
//{
//    int a = 10;
//    printf("&a=%p,", &a);//& - 取地址操作符
//
//    int *pa = &a;//pa用来存放地址 - pa就是一个指针变量
//
//    *pa = 20;//* - 解引用操作符 - 间接访问ca操作符
//    printf("*pa=%d\n" ,*pa);
//
//    return 0;
//}
//&a=地址,*pa=20

//强制类型转换
//int main()
//{
//    int a = (int)3.14;
//    printf("%d\n", a);
//    return 0;
//}

//sizeof
//void test1(int arr[])//int *arr，传的是元素的首地址,4个字节
//{
//    printf("sizeof(arr[])=%d,", sizeof(arr));//4
//}
//void test2(char ch[])//char *ch，指针大小不论类型，都是存放地址
//{
//    printf("sizeof(ch[])=%d\n", sizeof(ch));//4
//}
//int main()
//{
//    int arr[10] = {0};
//    char ch[10] = {0};
//    printf("sizeof(arr)=%d,", sizeof(arr));//int占4个字节 4*10=40
//    printf("sizeof(ch)=%d,", sizeof(ch));//char占1个字节 1*10=10
//    test1(arr);
//    test2(ch);
//    return 0;
//
//}
//sizeof(arr)=40,sizeof(ch)=10,sizeof(arr[])=4,sizeof(ch[])=4

//三、关系操作符
//比较2个字符串不能使用==

//四、逻辑操作符 - 只看真假
//int main()
//{
//    int i = 0, a = 0, b = 2, c = 3, d = 4;
//    i = a++ && ++b && d++;
//    //a++ && ++b 为0，后面不用在继续运算
//    printf("a=%d b=%d c=%d d=%d\n", a, b, c, d);
//    return 0;
//}
//a=1 b=2 c=3 d=4

//int main()
//{
//    int i = 0, a = 1, b = 2, c = 3, d = 4;
//    i = a++ && ++b && d++;
//    printf("a=%d b=%d c=%d d=%d\n", a, b, c, d);
//    return 0;
//}
//a=2 b=3 c=3 d=5

//int main()
//{
//    int i = 0, a = 1, b = 2, c = 3, d = 4;
//    i = a++ || ++b || d++;
//    printf("a=%d b=%d c=%d d=%d\n", a, b, c, d);
//    return 0;
//}
//a=2 b=2 c=3 d=4

//int main()
//{
//    int i = 0, a = 0, b = 2, c = 3, d = 4;
//    i = a++ || ++b || d++;
//    printf("a=%d b=%d c=%d d=%d\n", a, b, c, d);
//    return 0;
//}
//a=1 b=3 c=3 d=4

//五、条件操作符 - 三目操作符
// ? :
//普通
//int main()
//{
//    int a = 3;
//    int b = 0;
//
//    if (a > 5)
//    {
//        b = 1;
//    }
//    else
//    {
//        b = -1;
//    }
//    printf("b=%d\n", b);
//    return 0;
//}
//三目
//int main()
//{
//    int a = 3;
//    int b = 0;
//
//    b = (a>5 ? 1:-1);
//
//    printf("b=%d\n", b);
//    return 0;
//}
//b=-1

//最大值
//int main()
//{
//    int a =10;
//    int b = 5;
//
//    int max = (a>b ? 10:5);
//
//    printf("max=%d\n", max);
//    return 0;
//}

//六、逗号表达式
//int main()
//{
//    int a = 3;
//    int b = 5;
//    int c = 0;
//
//    //, - 要从左向右依次计算，但整个表达式的结果是最后一个表达式的结构
//    int d = (c = 5, a = c + 3, b = a - 4, c += 5);
//    printf("a=%d b=%d c=%d d=%d\n", a, b, c, d);
//    return 0;
//}
//a=8 b=4 c=10 d=10

//七、下标引用
//[]
//int main()
//{
//    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//
//    printf("%d\n", arr[4]);
//    return 0;
//}
//5

//八、函数调用
//int add(int x, int y)
//{
//    return x+y;
//}
//int main()
//{
//    int a = 10;
//    int b = 20;
//    //函数调用, () - 函数调用操作符
//    int ret = add(a, b);
//
//    printf("%d\n", ret);
//    return 0;
//}

//九、访问结构成员
//.  结构体.成员名
//-> 结构体指针->成员名
//struct book
//{
//    //结构体的成员（变量）
//    char name[20];
//    char id[20];
//    int price;
//};
//int main()
//{
//    //结构体变量.成员名
//    struct book a = {"C语言", "2018015190", 100};
//    printf("name:%s\n", a.name);
//    printf("id:%s\n", a.id);
//    printf("price:%d\n", a.price);
//    return 0;
//}
//name:C语言
//id:2018015190
//price:100

//法一
//struct book
//{
//    char name[20];
//    char id[20];
//    int price;
//};
//int main()
//{
//    struct book a = {"C语言", "2018015190", 100};
//    struct book *pa = &a;
//    printf("name:%s, id:%s, price:%d元\n", (*pa).name, (*pa).id, (*pa).price);
//    return 0;
//}

//法二
//struct book
//{
//    char name[20];
//    char id[20];
//    int price;
//};
//int main()
//{
//    struct book a = {"C语言", "2018015190", 100};
//    struct book *pa = &a;
//    //结构体指针->成员名
//    printf("name:%s, id:%s, price:%d元\n", pa->name, pa->id, pa->price);
//    return 0;
//}
//name:C语言, id:2018015190, price:100元

//十、表达式求值
//1、隐式类型转换
//（1）整型提升
//正数
//int main()
//{
//    //char类型 - 一个字节，占八位
//    char a = 3;
//    //a - 00000011
//    char b = 127;
//    //b - 01111111
//    char c = a+b;
//    //计算，逢二进一
//    //c - 10000010
//
//    printf("c=%d\n", c);
//    //%d - 输出整型
//    //加减法都是用补码计算，正数的反码原码补码是其本身
//    //根据符号位补齐 - 11111111111111111111111110000010（补码）
//    //               - 11111111111111111111111110000001（反码）
//    //               - 10000000000000000000000001111110（原码）
//    //c=-126
//    return 0;
//}
//c=-126

//负数
//int main()
//{
//    char a = -3;
//    //a - 10000011(原码)
//    //  - 11111100（反码）
//    //  - 11111101（补码）
//    char b = 127;
//    //b - 00011111
//    char c = a+b;
//    //c - 01111100
//    printf("c=%d\n", c);
//    //c - 000000000000000000000000011111100
//    //c=124
//    return 0;
//}
//c=124

//练习
//int  main()
//{
//    char a = 0xb6;
//    short b = 0xb600;
//    int c = 0xb6000000;
//
//    if (a == 0xb6)
//        printf("a");
//    if (b == 0xb600)
//        printf("b");
//    if (c == 0x6000000)
//        printf("c");
//    return 0;
//}
//c,只有c是int类型

//练2
//int main()
//{
//    char c = 1;
//    printf("%u %u %u\n", sizeof(c), sizeof(+c), sizeof(-c));
//    //只要参与运算就要被整型提升
//    return 0;
//}
//1 4 4

//(2)算术转换 - 向上转换 - 精度越高
//long double
//double
//float
//unsigned long int
//long int
//unsigned int
//int


//十一、 操作符属性
//1、优先级
//2、结合性
//3、是否控制求值顺序

//不科学代码 - 不确定
//int fun()
//{
//    static int count = 1;
//    return ++count;
//}
//int main()
//{
//    int answer;
//    answer = fun() - fun() * fun();
//    printf("%d\n", answer);
//    return 0;
//}

//谭浩强经典错误 - 计算顺序不确定
int main()
{
    int i = 0;
    int ret = (++i) + (++i) + (++i);
    printf("%d\n", ret);
    return 0;
}
