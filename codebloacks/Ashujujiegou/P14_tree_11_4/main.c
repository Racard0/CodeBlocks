#include <stdio.h>
#include <stdlib.h>
#include "queque.h"

//P14
//二叉树

typedef char BTDataType;
typedef struct BinaryTreeNode
{
    struct BinaryTreeNode *left;
    struct BinaryTreeNode *right;
    BTDataType data;
}BTNode;

//前中后 - 递归 - 深度优先
//前序 - 根左右
void PrevOrder(BTNode *root)
{
    if(root == NULL)
    {
        return ;
    }
    printf("%c ", root->data);//根
    PrevOrder(root->left);//左
    PrevOrder(root->right);//右
}
//中序 - 左根右
void InOrder(BTNode *root)
{
    if(root == NULL)
    {
        return ;
    }
    InOrder(root->left);//左
    printf("%c ", root->data);//根
    InOrder(root->right);//右
}
//后序 - 左右根
void PostOrder(BTNode *root)
{
    if(root == NULL)
    {
        return ;
    }
    PostOrder(root->left);//左
    PostOrder(root->right);//右
    printf("%c ", root->data);//根
}

//层序遍历 - 非递归(队列) - 广度优先
//P16 1:00:00
void LevelOrder(BTNode *root)
{
    //上一层出的时候带下一层
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


//节点数
//法一，有局限性，计算多个会累加
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

//法二 - 传地址
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

//法三
int TreeSzie(BTNode *root)
{
    return root == NULL? 0:TreeSzie(root->left) + TreeSzie(root->right) + 1;
}

//叶子结点 - 没有孩子的结点
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

//老师
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

//销毁 - 后序销毁
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

    printf("先序遍历:");
    PrevOrder(A);//A B D E C
    printf("\n");

    printf("中序遍历:");
    InOrder(A);//DBEAC
    printf("\n");

    printf("后序遍历:");
    PostOrder(A);//DEBCA
    printf("\n");

    //节点数法一,会累加
//    TreeSize(A);
//    printf("Atreesize:%d\n", size);//5
//    TreeSize(B);
//    printf("Btreesize:%d\n", size);//8

    //节点数法二
//    int Asize = 0;
//    TreeSize(A, &Asize);
//    printf("ATreeSize:%d\n", Asize);//5
//
//    int Bsize = 0;
//    TreeSize(B, &Bsize);
//    printf("Btreesize:%d\n", Bsize);//3

    //节点数法三
    printf("Atreesize:%d\n", TreeSzie(A));//5
    printf("Btreesize:%d\n", TreeSzie(B));//3

    //叶子节点
//    int Asize = 0;
//    LeafSize(A, &Asize);
//    printf("Aleafsize:%d\n", Asize);//3
//    int Bsize = 0;
//    LeafSize(B, &Bsize);
//    printf("Bleafesize:%d\n", Bsize);//2

    //叶子结点2
    printf("Aleafsize:%d\n", LeafSize(A));//3
    printf("Bleafsize:%d\n", LeafSize(B));//2

    //层序遍历
    printf("层序遍历:");
    LevelOrder(A);//A B C D E

    DestoryTree(A);
    return 0;
}
