#include<stdio.h>

//P84
//�ṹ��
struct abc
{
    char c;
    short s;
    double d;
};
struct stu
{
    struct abc e;//�ṹ��ĳ�Ա�����������ṹ��
    char name[20];
    int age;
    char id[20];
}s,b;
//s,b�ǽṹ��ı�����Ҳ��ȫ�ֱ���

void print1(struct stu l)//��ֵ
{
    printf("%c %d %lf %s %d %s\n", l.e.c, l.e.s, l.e.d, l.name, l.age, l.id);
    //w 20 3.140000 LI 66 250
}
void print2(struct stu* pl)//��ַ
{
    printf("%c %d %lf %s %d %s\n", pl->e.c, pl->e.s, pl->e.d, pl->name, pl->age, pl->id);
    //w 20 3.140000 LI 66 250
}
int main()
{
    struct stu l = {{'w', 20, 3.14}, "LI", 66, "250"};//l�Ƕ���
    //l�ǽṹ��ľֲ�����

    //. -> �ṹ����ʲ�����
    printf("%c\n", l.e.c);//%c - �ַ�
    //����l����e��c
    //w
    printf("%s\n", l.id);//%s - �ַ���
    //250

    //ָ��
    struct stu* pl = &l;
    printf("%c\n", (*pl).e.c);
    //w
    printf("%c\n", pl->e.c);
    //w

    print1(l);//��ֵ����
    print2(&l);//��ַ����

    return 0;
}
