#include "contact.h"

//��̬�汾
//void InitContact(Contact *con)
//{
//    con->sz = 0;
//    memset(con->data, 0, sizeof(con->data));
//}

//����̬�汾
void InitContact(Contact *con)
{
    con->data = (PeoInfo*)malloc(DEFAULT_SZ * sizeof(PeoInfo));
    if(con->data == NULL)
    {
        perror("InitContact");
        return ;
    }
    con->sz = 0;//��ʼ��Ĭ����0
    con->capacity = DEFAULT_SZ;

    //���������ļ�
    LoadContact(con);
    printf("load complete!\n");
}


//���������ļ�
void LoadContact(Contact *con)
{
    FILE *pf = fopen("contact.dat", "r");
    if(pf == NULL){
        perror("LoadContact!\n");
        return ;
    }
    PeoInfo tmp = {0};
    while(fread(&tmp, sizeof(PeoInfo), 1, pf)){
        //�Ƿ�����
        check_capacity(con);
        con->data[con->sz] = tmp;
        con->sz++;
    }

    fclose(pf);
    pf = NULL;
}



//��̬�汾
//void AddContact(Contact *con)
//{
//    //ͨѶ¼����
//    if(con->sz == MAX)
//    {
//        printf("full!\n");
//        return ;
//    }
//
//    //������Ϣ
//    printf("name:");
//    scanf("%s", con->data[con->sz].name);
//    printf("sex:");
//    scanf("%s", con->data[con->sz].sex);
//    printf("age:");
//    scanf("%d", &(con->data[con->sz].age));
//    printf("tele:");
//    scanf("%s", con->data[con->sz].tele);
//    printf("addr:");
//    scanf("%s", con->data[con->sz].addr);
//
//    con->sz++;
//    printf("add complete!\n");
//}

//�������
void check_capacity(Contact *con)
{
    if(con->sz == con->capacity)
    {
        PeoInfo *ptr = (PeoInfo*)realloc(con->data, (con->capacity + INC_SZ) * sizeof(PeoInfo));
        if(ptr != NULL)
        {
            con->data = ptr;
            con->capacity += INC_SZ;
            printf("realloc complete!\n");
        }
        else
        {
            perror("AddContact");
            printf("realloc fail\n");
            return ;
        }
    }
}

//����̬�汾
void AddContact(Contact *con)
{
    //��������
    check_capacity(con);

    printf("name:");
    scanf("%s", con->data[con->sz].name);
    printf("sex:");
    scanf("%s", con->data[con->sz].sex);
    printf("age:");
    scanf("%d", &(con->data[con->sz].age));
    printf("tele:");
    scanf("%s", con->data[con->sz].tele);
    printf("addr:");
    scanf("%s", con->data[con->sz].addr);

    con->sz++;
    printf("add complete!\n");
}

void PrintContact(const Contact *con)
{
    //����
    printf("%-10s\t%-5s\t%-5s\t%-12s\t%-10s\n", "name", "age", "sex", "tel", "add");

    //����
    for(int i = 0; i < con->sz; i++)
    {
        printf("%-10s\t%-5d\t%-5s\t%-12s\t%-10s\n", con->data[i].name, con->data[i].age, con->data[i].sex, con->data[i].tele, con->data[i].addr);
    }
}

//����
static int FindByName(Contact *con, char name[])
{
    for(int i = 0; i < con->sz; i++)
    {
        if(strcmp(con->data[i].name, name) == 0)
        {
            return i;
        }
    }
    return -1;//�Ҳ���
}

void DelContact(Contact *con)
{
    if(con->sz == 0)
    {
        printf("empty!\n");
        return ;
    }

    char name[MAX_NAME];
    printf("delete name:");
    scanf("%s", name);
    //����Ҫɾ������
    int pos = FindByName(con, name);
    if(pos == -1)
    {
        printf("none!\n");
        return ;
    }
    //ɾ��
    for(int i = pos; i < con->sz - 1; i++)
    {
        con->data[i] = con->data[i + 1];
    }

    con->sz--;
    printf("del complete!\n");
}

void SearchContact(Contact *con)
{
    if(con->sz == 0)
    {
        printf("empty!\n");
        return ;
    }

    char name[MAX_NAME];
    printf("search name:");
    scanf("%s", name);
    int pos = FindByName(con, name);
    if(pos == -1)
    {
        printf("none!\n");
        return ;
    }
    else
    {
        printf("%-10s\t%-5s\t%-5s\t%-12s\t%-10s\n", "name", "age", "sex", "tel", "add");
        printf("%-10s\t%-5d\t%-5s\t%-12s\t%-10s\n", con->data[pos].name, con->data[pos].age, con->data[pos].sex, con->data[pos].tele, con->data[pos].addr);
    }
    printf("find complete!\n");
}

void ModifyContact(Contact *con)
{
    if(con->sz == 0)
    {
        printf("empty!\n");
        return ;
    }

    char name[MAX_NAME];
    printf("modify name:");
    scanf("%s", name);
    int pos = FindByName(con, name);
    if(pos == -1)
    {
        printf("none!\n");
        return ;
    }
    else
    {
        printf("name:");
        scanf("%s", con->data[pos].name);
        printf("sex:");
        scanf("%s", con->data[pos].sex);
        printf("age:");
        scanf("%d", &(con->data[pos].age));
        printf("tele:");
        scanf("%s", con->data[pos].tele);
        printf("addr:");
        scanf("%s", con->data[pos].addr);
        printf("modify complete!\n");
    }
}

//����̬�汾��Ҫ����
void DestoryContact(Contact *con)
{
    free(con->data);
    con->data = NULL;
    con->sz = 0;
    con->capacity = 0;
    printf("destory complete!\n");
}


//����������Ϣ���ļ�
void SaveContact(Contact *con)
{
    FILE *pf = fopen("contact.dat", "w");
    if(pf == NULL){
        perror("SaveContact");
        return ;
    }
    //д�ļ�
    for(int i = 0; i < con->sz; i++){
        fwrite(con->data + i, sizeof(PeoInfo), 1, pf);
    }
    printf("save complete!\n");

    //�ر�
    fclose(pf);
    pf = NULL;
    return 0;
}
