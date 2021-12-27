#include "contact.h"

//静态版本
//void InitContact(Contact *con)
//{
//    con->sz = 0;
//    memset(con->data, 0, sizeof(con->data));
//}

//！动态版本
void InitContact(Contact *con)
{
    con->data = (PeoInfo*)malloc(DEFAULT_SZ * sizeof(PeoInfo));
    if(con->data == NULL)
    {
        perror("InitContact");
        return ;
    }
    con->sz = 0;//初始化默认是0
    con->capacity = DEFAULT_SZ;

    //！！加载文件
    LoadContact(con);
    printf("load complete!\n");
}


//！！加载文件
void LoadContact(Contact *con)
{
    FILE *pf = fopen("contact.dat", "r");
    if(pf == NULL){
        perror("LoadContact!\n");
        return ;
    }
    PeoInfo tmp = {0};
    while(fread(&tmp, sizeof(PeoInfo), 1, pf)){
        //是否增容
        check_capacity(con);
        con->data[con->sz] = tmp;
        con->sz++;
    }

    fclose(pf);
    pf = NULL;
}



//静态版本
//void AddContact(Contact *con)
//{
//    //通讯录满了
//    if(con->sz == MAX)
//    {
//        printf("full!\n");
//        return ;
//    }
//
//    //增加信息
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

//检查增容
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

//！动态版本
void AddContact(Contact *con)
{
    //考虑增容
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
    //标题
    printf("%-10s\t%-5s\t%-5s\t%-12s\t%-10s\n", "name", "age", "sex", "tel", "add");

    //数据
    for(int i = 0; i < con->sz; i++)
    {
        printf("%-10s\t%-5d\t%-5s\t%-12s\t%-10s\n", con->data[i].name, con->data[i].age, con->data[i].sex, con->data[i].tele, con->data[i].addr);
    }
}

//查找
static int FindByName(Contact *con, char name[])
{
    for(int i = 0; i < con->sz; i++)
    {
        if(strcmp(con->data[i].name, name) == 0)
        {
            return i;
        }
    }
    return -1;//找不到
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
    //查找要删除的人
    int pos = FindByName(con, name);
    if(pos == -1)
    {
        printf("none!\n");
        return ;
    }
    //删除
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

//！动态版本需要销毁
void DestoryContact(Contact *con)
{
    free(con->data);
    con->data = NULL;
    con->sz = 0;
    con->capacity = 0;
    printf("destory complete!\n");
}


//！！保存信息到文件
void SaveContact(Contact *con)
{
    FILE *pf = fopen("contact.dat", "w");
    if(pf == NULL){
        perror("SaveContact");
        return ;
    }
    //写文件
    for(int i = 0; i < con->sz; i++){
        fwrite(con->data + i, sizeof(PeoInfo), 1, pf);
    }
    printf("save complete!\n");

    //关闭
    fclose(pf);
    pf = NULL;
    return 0;
}
