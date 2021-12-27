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

//��̬�汾
//typedef struct Contact
//{
//    PeoInfo data[MAX];//�����ӽ������˵���Ϣ
//    int sz;//��¼��ǰͨѶ¼����Ч��Ϣ����
//}Contact;

//����̬�汾
typedef struct Contact
{
    PeoInfo *data;//ָ��̬����ռ䣬���������ϵ����Ϣ
    int sz;//��¼��ǰͨѶ¼��Ч��Ϣ����
    int capacity;//��¼��ǰͨѶ¼�������
}Contact;


void InitContact(Contact *con);
void AddContact(Contact *con);
void PrintContact(const Contact *con);
void DelContact(Contact *con);
void SearchContact(Contact *con);
void ModifyContact(Contact *con);
void check_capacity(Contact *con);

//����̬�汾��������
void DestoryContact(Contact *con);

//��������ͨѶ¼��Ϣ���ļ�
void SaveContact(Contact *con);

//���������ļ�
void LoadContact(Contact *con);

#endif // CONTACT_H_INCLUDED
