#include<stdio.h>

//P69
//������

//һ����λ��
// <<>> - ��λ��,�Զ�������ʽ
//1��
//<< - ����
//int main()
//{
//    int a = 2;
//    int b = a << 1;//<< - ���ƣ�����߶���һλ�����ұ߲�0
//    printf("b = %d\n", b);
//
////    int c = 2;
////    int d = c >> 1;//>> - ���ƣ����ұ߶���һλ������߲�0
////    printf("d = %d\n", d);
//    return 0;
//}
//b=4
//d=1

//2��
//>> - ����
//1���������ƣ��ұ߶�������߲�ԭ����λ
//2���߼����ƣ��ұ߶�������߲�0
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
//��������
//b=-1

//����λ������
//1��
//& - ��λ����������������ƽ��С��롱���㡣��0Ϊ0,ȫ1Ϊ1

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

//2��
// | - ��λ�򣬰������ƽ��С������㡣��1Ϊ1��ȫ0Ϊ0

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

//3��
//^ - ��λ��򣬰������ƣ���ͬΪ0������Ϊ1

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

//4����������int����������ʹ�õ�����������
//a=3 b=5,������a=5,b=3

//��һ,�ӷ�
//int main()
//{
//    int a = 3;
//    int b = 5;
//    printf("����ǰ\n");
//    printf("a = %d b = % d\n", a, b);
//    a = a + b;
//    b = a - b;
//    a = a - b;
//    printf("������\n");
//    printf("a = %d b = % d\n", a, b);
//    return 0;
//}
//�÷����������̫���������

//���������
//int main()
//{
//    int a = 3;
//    int b = 5;
//    printf("����ǰ\n");
//    printf("a = %d b = % d\n", a, b);
//    a = a ^ b;
//    //a = 110(6)
//    b = a ^ b;
//    //b = 011(3)
//    a = a ^ b;
//    //a = 101(5)
//    printf("������\n");
//    printf("a = %d b = % d\n", a, b);
//    return 0;
//}

//4��
//��ϰ����һ���������ڴ��еĶ�������1�ĸ���
//��һ���Ӽ�
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
//    printf("1�ĸ�����%d\n", count);
//    return 0;
//}

//�����������
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
//    printf("1�ĸ�����%d\n", count);
//    return 0;
//}

//short - ռ�����ֽ�
//int main()
//{
//    short a = 5;
//    int b = 3;
//    printf("%d\n", sizeof(a = a + b));
//    printf("%d\n", a);
//    return 0;
//}


// ~ - ��λȡ��
//int main()
//{
//    int a = -1;
//    //ԭ�� - 10000000000000000000000000000001
//    //���� - 11111111111111111111111111111110
//    //���� - 11111111111111111111111111111111
//    //��λȡ�� - 00000000000000000000000000000000
//    int b = ~a;
//    printf("b=%d\n", b);
//    return 0;
//}
//b=0

//int main()
//{
//    int a = 1;
//    //������ԭ�룬���룬�������䱾��
//    int b = ~a;
//    printf("b=%d\n", b);
//    return 0;
//}
//b=-2

//ǰ�ú��� ++--
//int main()
//{
//    int a = 10;
//    int b = a++;//��ʹ�ã���++
//    printf("a=%d b=%d\n", a, b);
//    return 0;
//}
//a=11, b=10

//int main()
//{
//    int a = 10;
//    int b = ++a;//��++����ʹ��
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

//& - ���ر�����ַ
//int main()
//{
//    int a = 10;
//    printf("&a=%p,", &a);//& - ȡ��ַ������
//
//    int *pa = &a;//pa������ŵ�ַ - pa����һ��ָ�����
//
//    *pa = 20;//* - �����ò����� - ��ӷ���ca������
//    printf("*pa=%d\n" ,*pa);
//
//    return 0;
//}
//&a=��ַ,*pa=20

//ǿ������ת��
//int main()
//{
//    int a = (int)3.14;
//    printf("%d\n", a);
//    return 0;
//}

//sizeof
//void test1(int arr[])//int *arr��������Ԫ�ص��׵�ַ,4���ֽ�
//{
//    printf("sizeof(arr[])=%d,", sizeof(arr));//4
//}
//void test2(char ch[])//char *ch��ָ���С�������ͣ����Ǵ�ŵ�ַ
//{
//    printf("sizeof(ch[])=%d\n", sizeof(ch));//4
//}
//int main()
//{
//    int arr[10] = {0};
//    char ch[10] = {0};
//    printf("sizeof(arr)=%d,", sizeof(arr));//intռ4���ֽ� 4*10=40
//    printf("sizeof(ch)=%d,", sizeof(ch));//charռ1���ֽ� 1*10=10
//    test1(arr);
//    test2(ch);
//    return 0;
//
//}
//sizeof(arr)=40,sizeof(ch)=10,sizeof(arr[])=4,sizeof(ch[])=4

//������ϵ������
//�Ƚ�2���ַ�������ʹ��==

//�ġ��߼������� - ֻ�����
//int main()
//{
//    int i = 0, a = 0, b = 2, c = 3, d = 4;
//    i = a++ && ++b && d++;
//    //a++ && ++b Ϊ0�����治���ڼ�������
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

//�塢���������� - ��Ŀ������
// ? :
//��ͨ
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
//��Ŀ
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

//���ֵ
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

//�������ű��ʽ
//int main()
//{
//    int a = 3;
//    int b = 5;
//    int c = 0;
//
//    //, - Ҫ�����������μ��㣬���������ʽ�Ľ�������һ�����ʽ�Ľṹ
//    int d = (c = 5, a = c + 3, b = a - 4, c += 5);
//    printf("a=%d b=%d c=%d d=%d\n", a, b, c, d);
//    return 0;
//}
//a=8 b=4 c=10 d=10

//�ߡ��±�����
//[]
//int main()
//{
//    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//
//    printf("%d\n", arr[4]);
//    return 0;
//}
//5

//�ˡ���������
//int add(int x, int y)
//{
//    return x+y;
//}
//int main()
//{
//    int a = 10;
//    int b = 20;
//    //��������, () - �������ò�����
//    int ret = add(a, b);
//
//    printf("%d\n", ret);
//    return 0;
//}

//�š����ʽṹ��Ա
//.  �ṹ��.��Ա��
//-> �ṹ��ָ��->��Ա��
//struct book
//{
//    //�ṹ��ĳ�Ա��������
//    char name[20];
//    char id[20];
//    int price;
//};
//int main()
//{
//    //�ṹ�����.��Ա��
//    struct book a = {"C����", "2018015190", 100};
//    printf("name:%s\n", a.name);
//    printf("id:%s\n", a.id);
//    printf("price:%d\n", a.price);
//    return 0;
//}
//name:C����
//id:2018015190
//price:100

//��һ
//struct book
//{
//    char name[20];
//    char id[20];
//    int price;
//};
//int main()
//{
//    struct book a = {"C����", "2018015190", 100};
//    struct book *pa = &a;
//    printf("name:%s, id:%s, price:%dԪ\n", (*pa).name, (*pa).id, (*pa).price);
//    return 0;
//}

//����
//struct book
//{
//    char name[20];
//    char id[20];
//    int price;
//};
//int main()
//{
//    struct book a = {"C����", "2018015190", 100};
//    struct book *pa = &a;
//    //�ṹ��ָ��->��Ա��
//    printf("name:%s, id:%s, price:%dԪ\n", pa->name, pa->id, pa->price);
//    return 0;
//}
//name:C����, id:2018015190, price:100Ԫ

//ʮ�����ʽ��ֵ
//1����ʽ����ת��
//��1����������
//����
//int main()
//{
//    //char���� - һ���ֽڣ�ռ��λ
//    char a = 3;
//    //a - 00000011
//    char b = 127;
//    //b - 01111111
//    char c = a+b;
//    //���㣬�����һ
//    //c - 10000010
//
//    printf("c=%d\n", c);
//    //%d - �������
//    //�Ӽ��������ò�����㣬�����ķ���ԭ�벹�����䱾��
//    //���ݷ���λ���� - 11111111111111111111111110000010�����룩
//    //               - 11111111111111111111111110000001�����룩
//    //               - 10000000000000000000000001111110��ԭ�룩
//    //c=-126
//    return 0;
//}
//c=-126

//����
//int main()
//{
//    char a = -3;
//    //a - 10000011(ԭ��)
//    //  - 11111100�����룩
//    //  - 11111101�����룩
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

//��ϰ
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
//c,ֻ��c��int����

//��2
//int main()
//{
//    char c = 1;
//    printf("%u %u %u\n", sizeof(c), sizeof(+c), sizeof(-c));
//    //ֻҪ���������Ҫ����������
//    return 0;
//}
//1 4 4

//(2)����ת�� - ����ת�� - ����Խ��
//long double
//double
//float
//unsigned long int
//long int
//unsigned int
//int


//ʮһ�� ����������
//1�����ȼ�
//2�������
//3���Ƿ������ֵ˳��

//����ѧ���� - ��ȷ��
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

//̷��ǿ������� - ����˳��ȷ��
int main()
{
    int i = 0;
    int ret = (++i) + (++i) + (++i);
    printf("%d\n", ret);
    return 0;
}
