#include<stdio.h>

//1���ṹ��
//struct stu//����һ��ѧ������
//{
//    char name[20];//��Ա����
//    int age;
//    double score;
//};
//struct book//����һ��ͼ������
//{
//    char name[20];
//    float price;
//    char id[30];
//};
//int main()
//{              //l�ĵ�ѧ�������֣����䣬�ɼ�
//    struct stu l={"dong",21,100};//�ṹ��Ĵ����ͳ�ʼ��
//    printf("1��%s %d %lf\n",l.name,l.age,l.score);
//                        //�ṹ�����.��Ա����
//
//    struct stu *pl=&l;//�ṹ��ָ��
//    printf("2��%s %d %lf\n",(*pl).name,(*pl).age,(*pl).score);
//    //�����֮ǰ��ͬ
//
//    printf("3��%s %d %lf\n",pl->name,pl->age,pl->score);
//    //�ṹ��ָ��->��Ա������
//    //�����ͬ
//
//
//    return 0;
//
//}


////��ҵ
//��1�������ֵ
//int num=10;
//int main()
//{
//    int num=1;
      //�ֲ�����
//    printf("num=%d\n",num);//1
//    return 0;
//
//}


#include<string.h>
//int main()
//{
//    char arr[]={'b','i','t'};
//    printf("%d\n",strlen(arr));//Ӧ��Ϊ���ֵ������Ϊ4����vs�����
//    return 0;
//}

//int main()
//{
//
//    printf("%d\n",strlen("c:\test\121"));//�ַ������ȣ�\121Ϊһ���ַ���
//    return 0;
//}


//�ú�������ϴ�ֵ
int max(int x,int y)
{
    if(x>y)
        return x;
    else
        return y;
}
int main()
{
    int a=0;
    int b=0;
    scanf("%d %d",&a,&b);
    int c=max(a,b);
    printf("%d\n",c);
}



