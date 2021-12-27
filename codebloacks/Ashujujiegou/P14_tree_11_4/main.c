#include <stdio.h>
#include <stdlib.h>
#include "queque.h"

//P14
//������

typedef char BTDataType;
typedef struct BinaryTreeNode
{
    struct BinaryTreeNode *left;
    struct BinaryTreeNode *right;
    BTDataType data;
}BTNode;

//ǰ�к� - �ݹ� - �������
//ǰ�� - ������
void PrevOrder(BTNode *root)
{
    if(root == NULL)
    {
        return ;
    }
    printf("%c ", root->data);//��
    PrevOrder(root->left);//��
    PrevOrder(root->right);//��
}
//���� - �����
void InOrder(BTNode *root)
{
    if(root == NULL)
    {
        return ;
    }
    InOrder(root->left);//��
    printf("%c ", root->data);//��
    InOrder(root->right);//��
}
//���� - ���Ҹ�
void PostOrder(BTNode *root)
{
    if(root == NULL)
    {
        return ;
    }
    PostOrder(root->left);//��
    PostOrder(root->right);//��
    printf("%c ", root->data);//��
}

//������� - �ǵݹ�(����) - �������
//P16 1:00:00
void LevelOrder(BTNode *root)
{
    //��һ�����ʱ�����һ��
    Queue q;
    QueueInit(&q);

    if(root != NULL)
    {
        QueuePush(&q, root);
    }
    while(!QueueEmpty(&q))
    {
        BTNode *front = QueueFront(&q);
        QueuePop(&q);
        printf("%c ", front->data);

        if(front->left)
        {
            QueuePush(&q, front->left);
        }
        if(front->right)
        {
            QueuePush(&q, front->right);
        }
    }
    printf("\n");
    QueueDestory(&q);
}


//�ڵ���
//��һ���о����ԣ����������ۼ�
//int size = 0;
//void TreeSize(BTNode *root)
//{
//    if(root == NULL)
//    {
//       return ;
//    }
//    else
//    {
//        size++;
//    }
//    TreeSize(root->left);
//    TreeSize(root->right);
//}

//���� - ����ַ
//void TreeSize(BTNode *root, int *size)
//{
//    if(root == NULL)
//    {
//        return ;
//    }
//    else
//    {
//        (*size)++;
//    }
//    TreeSize(root->left, size);
//    TreeSize(root->right, size);
//}

//����
int TreeSzie(BTNode *root)
{
    return root == NULL? 0:TreeSzie(root->left) + TreeSzie(root->right) + 1;
}

//Ҷ�ӽ�� - û�к��ӵĽ��
//myself
//void LeafSize(BTNode *root, int *size)
//{
//   if(root->left == NULL && root->right == NULL)
//   {
//       (*size)++;
//   }
//   else
//   {
//        LeafSize(root->left, size);
//        LeafSize(root->right, size);
//    }
//}

//��ʦ
int LeafSize(BTNode *root)
{
    if(root == NULL)
    {
        return 0;
    }
    if(root->left == NULL && root->right == NULL)
    {
        return 1;
    }
    return LeafSize(root->left) + LeafSize(root->right);
}

//���� - ��������
void DestoryTree(BTNode *root)
{
    if(root == NULL)
    {
        return ;
    }
    DestoryTree(root->left);
    DestoryTree(root->right);
    free(root);
    root = NULL;
}

int main()
{
    BTNode *A = (BTNode*)malloc(sizeof(BTNode));
    A->data = 'A';
    A->left = NULL;
    A->right = NULL;

    BTNode *B = (BTNode*)malloc(sizeof(BTNode));
    B->data = 'B';
    B->left = NULL;
    B->right = NULL;

    BTNode *C = (BTNode*)malloc(sizeof(BTNode));
    C->data = 'C';
    C->left = NULL;
    C->right = NULL;

    BTNode *D = (BTNode*)malloc(sizeof(BTNode));
    D->data = 'D';
    D->left = NULL;
    D->right = NULL;

    BTNode *E = (BTNode*)malloc(sizeof(BTNode));
    E->data = 'E';
    E->left = NULL;
    E->right = NULL;

    A->left = B;
    A->right = C;
    B->left = D;
    B->right = E;

    printf("�������:");
    PrevOrder(A);//A B D E C
    printf("\n");

    printf("�������:");
    InOrder(A);//DBEAC
    printf("\n");

    printf("�������:");
    PostOrder(A);//DEBCA
    printf("\n");

    //�ڵ�����һ,���ۼ�
//    TreeSize(A);
//    printf("Atreesize:%d\n", size);//5
//    TreeSize(B);
//    printf("Btreesize:%d\n", size);//8

    //�ڵ�������
//    int Asize = 0;
//    TreeSize(A, &Asize);
//    printf("ATreeSize:%d\n", Asize);//5
//
//    int Bsize = 0;
//    TreeSize(B, &Bsize);
//    printf("Btreesize:%d\n", Bsize);//3

    //�ڵ�������
    printf("Atreesize:%d\n", TreeSzie(A));//5
    printf("Btreesize:%d\n", TreeSzie(B));//3

    //Ҷ�ӽڵ�
//    int Asize = 0;
//    LeafSize(A, &Asize);
//    printf("Aleafsize:%d\n", Asize);//3
//    int Bsize = 0;
//    LeafSize(B, &Bsize);
//    printf("Bleafesize:%d\n", Bsize);//2

    //Ҷ�ӽ��2
    printf("Aleafsize:%d\n", LeafSize(A));//3
    printf("Bleafsize:%d\n", LeafSize(B));//2

    //�������
    printf("�������:");
    LevelOrder(A);//A B C D E

    DestoryTree(A);
    return 0;
}
