#include<stdio.h>

//��ŵ��
void hnt(int num, char source, char target, char auxiliary)
//num��Բ�̵�������source,��ʼ����target,Ŀ��ס��auxiliary��������
{
    static int i = 1;//ͳ���ƶ�����
    if (num == 1)//���Բ������Ϊ1��ֱ���ƶ���Ŀ����
    {
        printf("��%d�Σ���%c�ƶ���%c\n", i, source, target);
        i++;
    }
    else
    {
        hnt(num - 1, source, auxiliary, target);
        //�ݹ����hnt��������num-1��Բ�̴���ʼ���ƶ���������
        printf("��%d�Σ���%c�ƶ���%c\n", i, source, target);
        //����ʼ�������һ��Բ���ƶ���Ŀ������
        i++;
        hnt(num - 1, auxiliary, target, source);
        //�ݹ����hnt���������������ϵ�num-1Բ���ƶ���Ŀ������
    }
}

int main()
{
    int h = 0;
    printf("��ŵ����Բ��������");
    scanf("%d", &h);
    hnt(h, 'a', 'b', 'c');

    //Բ��������aΪ��ʼ����bΪĿ������cΪ������
    return 0;
}
