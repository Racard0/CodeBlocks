#include<stdio.h>

//һ����ʾ����ַ��������ƶ����м���

//####################
//w##################!
//we################!!
//wel##############!!!
//...
//welcome to bit!!!!!!

#include<string.h>
#include<windows.h>

//int main()
//{
//    char arr1[] = "welcome to bit!!!!!!";
//    char arr2[] = "####################";
//    int left = 0;
//    int right = strlen(arr2) - 1;
//
//    while (left <= right)
//    {
//        arr2[left] = arr1[left];
//        arr2[right] = arr1[right];
//        printf("%s\n", arr2);
//
//        Sleep(1000);//˯��һ��
//        system("cls");//�����Ļ
//
//        left++;
//        right--;
//
//    }
//    printf("%s\n", arr2);
//    return 0;
//}


//����ģ���û���¼����ֻ�ܵ�¼���Ρ�������ξ�����������˳�����

//int main()
//{
//    int i = 0;
//    char password[20] = {0};
//    //��������Ϊ123456
//    for (i = 0; i < 3; i++)
//    {
//        printf("code:");
//        scanf("%s", password);
//        //if (password == "123456") // err - �����ַ����Ƚϣ�����ʹ��==��Ӧ��ʹ��strcmp
//        if (strcmp(password, "123456") == 0)
//            //strcmp - �ַ�����ȣ�����0
//        {
//            printf("sucess!\n");
//            break;
//        }
//        else
//        {
//            printf("again!\n");
//        }
//    }
//    if (i == 3)
//    {
//        printf("out!\n");
//
//    }
//    return 0;
//}


//������������Ϸ
//1���Զ�����һ��1-100�������
//2��������
//a.�¶��ˣ���ϲ�㣬��Ϸ������
//b.�´��ˣ�������´��˻���С�ˣ������£�ֱ���¶�
//3������һֱ�棬�����˳���Ϸ

#include<stdlib.h>
#include<time.h>

//void menu()
//{
//    printf("******************\n");
//    printf("***** 1.play *****\n");
//    printf("***** 0.exit *****\n");
//    printf("******************\n");
//}
//
//void game()
//{
//    //��������Ϸ��ʵ��
//    //1�����������
//    //rand����������һ��0-32767֮�������
//    //ʱ�� - ʱ���
//
//    int num = rand() % 100 + 1;//%100��������0-99��Ȼ��+1����Χ��1-100
//
//    //2��������
//
//    int guess = 0;
//    while (1)
//    {
//        printf("number:");
//        scanf("%d", &guess);
//        if (guess < num)
//        {
//            printf("small\n");
//
//        }
//        else if (guess > num)
//        {
//            printf("big\n");
//        }
//        else
//        {
//            printf("yes\n");
//            break;
//        }
//    }
//}
//
//int main()
//{
//    int input = 0;
//    srand((unsigned int)time(NULL));
//
//    do
//    {
//        menu();//�򿪲˵�
//        printf("choose:");
//        scanf("%d", &input);
//        switch (input)
//        {
//        case 1:
//            game();
//            break;
//        case 0:
//            printf("exit!");
//            break;
//        default:
//            printf("choose again!");
//            break;
//        }
//    }while (input);
//    return 0;
//}


//�ġ���ҵ
//1��
//int main()
//{
//    int i = 0;
//    for (i = 0; i < 10; i++)
//    {
//        if (i = 5)//һ��=Ϊ��ֵ��==Ϊ�ж�
//            printf("%d ", i);
//    }
//    return 0;
//}
//��ѭ��5

//2��
//int func(int a)
//{
//    int b;
//    switch(a)
//    {
//    case 1:
//        b = 30;
//    case 2:
//        b = 20;
//    case 3:
//        b = 16;
//    default:
//        b = 0;
//    }
//    return b;
//}
//
//int main()
//{
//    printf("%d\n", func(1));
//    return 0;
//}
//func(1)=0,û��break

//3��
//int main()
//{
//    int x = 3;
//    int y = 3;
//    switch (x % 2)
//    {
//    case 1:
//        switch (y)
//        {
//            case 0:
//                printf("first");
//            case 1:
//                printf("second");
//                break;
//            default:
//                printf("hello");
//        }
//    case 2:
//        printf("third");
//
//    }
//    return 0;
//}
//hellothird


//4��
//�������������Ӵ�С���
//ү��һ�δ��Լ�tm������Ĵ��룬��һ��ʵ�֣���jb�ж�
//int main()
//{
//    int a = 0;
//    int b = 0;
//    int c = 0;
//    printf("number:");
//    scanf("%d %d %d",&a,&b,&c);
//    if (a > b)
//    {
//        if (b > c)
//        {
//            printf("%d %d %d\n", a, b, c);
//        }
//        else//b < c
//        {
//            if (a > c)
//            {
//                printf("%d %d %d\n", a, c, b);
//            }
//            else//a < c
//            {
//                printf("%d %d %d\n", c, a, b);
//            }
//        }
//    }
//    else//b > a
//    {
//        if (a > c)
//        {
//            printf("%d %d %d\n", b, a, c);
//        }
//        else//c > a
//        {
//            if (b > c)
//            {
//                printf("%d %d %d\n", b, c, a);
//            }
//            else//c > b
//            {
//                printf("%d %d %d\n", c, b, a);
//            }
//        }
//    }
//
//    return 0;
//}

//4��
//��ʦ�Ĵ���
//int main()
//{
//    int a = 0;
//    int b = 0;
//    int c = 0;
//    scanf("%d%d%d", &a, &b, &c);
//    if (a < b)
//    {
//        int num = a;
//        a = b;
//        b = num;
//    }
//    if (a < c)
//    {
//        int num = a;
//        a = c;
//        c = num;
//    }
//    if (b < c)
//    {
//        int num = b;
//        b = c;
//        c = num;
//    }
//    printf("%d %d %d\n", a, b, c);
//    return 0;
//}
//�����úܶ�

//5����ӡ1-100������3�ı���
//�Լ�д��
//int main()
//{
//    int i = 3;
//    do
//    {
//        printf("%d ", i);
//        i += 3;
//    }while (i <= 99);
//    return 0;
//}

//5����ʦд��
//int main()
//{
//    int i = 0;
//    for (i=1; i <=100; i++)
//    {
//        if (i % 3 ==0)//�ж��Ƿ�Ϊ3�ı�������������Ϊ0
//        {
//            printf("%d ",i);
//        }
//    }
//    return 0;
//}

//5��
//��2
//int main()
//{
//    int i = 0;
//    for (i = 3; i <= 100; i+=3)
//    {
//        printf("%d\n",i);
//    }
//    return 0;
//}

//6��
//�������������������������Լ��
//int main()
//{
//    int i = 0;
//    int m = 0;
//    scanf("%d%d",&i,&m);
//    int max = 0;
//    //�������Լ������m��i�еĽ�Сֵ
//
//    if (i < m)
//    {
//        max = i;
//    }
//    else
//    {
//        max = m;
//    }
//
//    while (1)
//    {
//        if (i % max == 0 && m % max == 0)
//        {
//            printf("���Լ��:%d\n", max);
//            break;
//        }
//        else
//        {
//            max--;
//        }
//    }
//    return 0;
//}

//6��
//��2
//շת�����
int main()
{
    int i = 0;
    int m = 0;
    scanf("%d%d",&i,&m);
    int t = 0;
    while (t = i%m)
    {
        i = m;
        m = t;
    }
    printf("���Լ��:%d\n",m);
    //��С������ = i*m/���Լ��

    return 0;
}
