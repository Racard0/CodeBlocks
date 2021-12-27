#ifndef CONTACT_H_INCLUDED
#define CONTACT_H_INCLUDED

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_NAME 20
#define MAX_SEX 10
#define MAX_TELE 12
#define MAX_ADDR 30
#define MAX 1000

#define DEFAULT_SZ 3
#define INC_SZ 2

typedef struct PeoInfo
{
    char name[MAX_NAME];
    char sex[MAX_SEX];
    int age;
    char tele[MAX_TELE];
    char addr[MAX_ADDR];
}PeoInfo;

//静态版本
//typedef struct Contact
//{
//    PeoInfo data[MAX];//存放添加进来的人的信息
//    int sz;//记录当前通讯录中有效信息个数
//}Contact;

//！动态版本
typedef struct Contact
{
    PeoInfo *data;//指向动态申请空间，用来存放联系人信息
    int sz;//记录当前通讯录有效信息个数
    int capacity;//记录当前通讯录最大容量
}Contact;


void InitContact(Contact *con);
void AddContact(Contact *con);
void PrintContact(const Contact *con);
void DelContact(Contact *con);
void SearchContact(Contact *con);
void ModifyContact(Contact *con);
void check_capacity(Contact *con);

//！动态版本，需销毁
void DestoryContact(Contact *con);

//！！保存通讯录信息到文件
void SaveContact(Contact *con);

//！！加载文件
void LoadContact(Contact *con);

#endif // CONTACT_H_INCLUDED
