//P149
//ͨѶ¼
//1.���1000���˵���Ϣ
//ÿ���˵���Ϣ�����������Ա�绰��ַ
//2.�����˵���Ϣ
//3.ɾ���˵���Ϣ
//4.�޸��˵���Ϣ
//5.�����˵���Ϣ
//6.����ͨѶ¼��Ϣ


//����һ�θ���
//��̬�����汾
//1����ʼ�����ܴ��������Ϣ
//2�����ռ����ʱ������������Ϣ


//�����ڶ��θ���
//1����ͨѶ¼�˳�ʱ����Ϣд���ļ���
//2����ͨѶ¼��ʼ��ʱ�������ļ�����Ϣ��ͨѶ¼��

#include "contact.h"

void menu()
{
    printf("---------------------------------\n");
    printf("----    1.add     2.del      ----\n");
    printf("----    3.search  4.modify   ----\n");
    printf("----    5.sort    6.print    ----\n");
    printf("----    0.exit               ----\n");
    printf("---------------------------------\n");
}

enum Option
{
    ex,
    add,
    del,
    search,
    modify,
    sort,
    print
};

int main()
{
    int input;
    Contact con;//ͨѶ¼

    //����̬����£���data����һ�������Ŀռ��ڶ����ϣ�sz=0��capacity��ʼ��Ϊ��ǰ���������
    InitContact(&con);
    do
    {
        menu();
        printf("choose:");
        scanf("%d", &input);
        switch(input)
        {
        case add:
            AddContact(&con);
            break;
        case del:
            DelContact(&con);
            break;
        case search:
            SearchContact(&con);
            break;
        case modify:
            ModifyContact(&con);
            break;
        case sort:
            break;
        case print:
            PrintContact(&con);
            break;
        case ex:
            //����������Ϣ���ļ�
            SaveContact(&con);

            //����̬�汾�˳���Ҫ����
            DestoryContact(&con);

            printf("exit!\n");
            break;
        default:
            printf("input again!\n");
            break;
        }
    }while(input);
    return 0;
}
