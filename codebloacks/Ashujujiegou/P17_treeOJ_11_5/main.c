#include <stdio.h>
#include <stdlib.h>

//P17
//二叉树力扣
//28：20


//P144.二叉树前序遍历
int TreeSize(struct TreeNode *root)
{
    return root == NULL ? 0 : TreeSize(root->left) +TreeSize(root->right) + 1;
}
void _prevOrder(struct TreeNode *root, int *a, int *i)
{
    if(root == NULL)
    {
        return ;
    }
    a[*i] = root->val;
    ++(*i);
    _prevOrder(root->left, a, i);
    _prevOrder(root->right, a, i);
}
int *prerorder(struct TreeNode *root, int *returnSize)
{
    int size = TreeSize(root);
    int *a = (int*)malloc(size*sizeof(int));
    int i = 0;
    _prevOrder(root, a, &i);
    *returnSize = size;
    return a;
}


//P145.二叉树的后序遍历
int TreeSize(struct TreeNode *root)
{
    return root == NULL ? 0 : TreeSize(root->left) + TreeSize(root->right) + 1;
}
void _postOrder(struct TreeNode *root, int *a, int *i)
{
    if(root == NULL)
    {
        return ;
    }
    _postOrder(root->left, a, i);
    _postOrder(root->right, a, i);
    a[*i] = root->val;
    ++(*i);
}
int *postorderTraversal(struct TreeNode *root, int *returnSize)
{
    int size = TreeSize(root);
    int *a = (int*)malloc(size*sizeof(int));
    int i = 0;
    _postOrder(root, a, &i);
    *returnSize = size;
    return a;
}


//P94.二叉树的中序遍历
int TreeSize(struct TreeNode *root)
{
    return root == NULL ? 0 : TreeSize(root->left) + TreeSize(root->right) + 1;
}
void _inOrder(struct TreeNode *root, int *a, int *i)
{
    if(root == NULL)
    {
        return ;
    }
    _inOrder(root->left, a, i);
    a[*i] = root->val;
    ++(*i);
    _inOrder(root->right, a, i);
}
int *inorderTraversal(struct TreeNode *root, int *returnSize)
{
    int size = TreeSize(root);
    int *a = (int*)malloc(size*sizeof(int));
    int i = 0;
    _inOrder(root, a, &i);
    *returnSize = size;
    return a;
}


//P104.二叉树的最大深度
//分治算法
int maxDepth(struct TreeNode *root)
{
    if(root == NULL)
    {
        return 0;
    }
    int leftdepth = maxDepth(root->left);
    int rightdepth = maxDepth(root->right);
    return leftdepth > rightdepth ? leftdepth + 1 : rightdepth + 1;
}


//P110.平衡二叉树
int maxDepth(struct TreeNode *root)
{
    if(root == NULL)
    {
        return 0;
    }
    int left = maxDepth(root->left);
    int right = maxDepth(root->right);
    return left > right ? left + 1 : right + 1;
}
bool isBalanced(struct TreeNode *root)
{
    if(root == NULL)
    {
        return true;
    }
    int left = maxDepth(root->left);
    int right = maxDepth(root->right);
    return abs(left - right) < 2 && isBalanced(root->left) && isBalanced(root->right);
    //abs - 取绝对值
}


//牛客网
//二叉树遍历
//https://www.nowcoder.com/practice/4b91205483694f449f94c179883c1fef?tpId=60&tqId=29483&tPage=1&rp=1&ru=/ta/tsing-kaoyan
#include <stdio.h>
typedef struct TreeNode
{
    struct TreeNode *left;
    struct TreeNode *right;
    char val;
}TNode;
TNode *CreateTree(char *a, int *pi)
{
    if(a[*pi] == '#')
    {
        ++(*pi);	
        return NULL;
    }
    TNode *root = (TNode*)malloc(sizeof(TNode));
    if(root == NULL)
    {
        printf("malloc fail\n");
        exit(-1);
    }
    root->val = a[*pi];
    ++(*pi);
    root->left = CreateTree(a, pi);
    root->right = CreateTree(a, pi);
    return root;
}
void inorder(TNode *root)
{
    if(root == NULL)
    {
        return ;
    }
    inorder(root->left);
    printf("%c ", root->val);
    inorder(root->right);
}
int main()
{
    char str[100];
    scanf("%s", str);
    int i = 0;
    TNode *root = CreateTree(str, &i);
    inorder(root);
    return 0;
}
