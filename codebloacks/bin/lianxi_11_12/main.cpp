#include <stdio.h>


//1、字符串各个英文出现的次数
void zfchar(char c)
{
    int a[26]={0},A[26]={0};

    while((c = getchar()) != '\n')
    {
          if(c >= 'a' && c <= 'z') a[c-'a']++;
          if(c >= 'A' && c <= 'Z') A[c-'A']++;
    }
    for(int i=0;i<26;i++)
    {
        if(a[i] != 0)
        {
            printf("%c:%d\n",'a'+i,a[i]);
        }
    }
    for(int i=0;i<26;i++)
    {
       if(A[i] != 0)
       {
           printf("%c:%d\n",'A'+i,A[i]);
       }
    }
}
int main(){
    char c;
    zfchar(c);
    return 0;
}


//2、二叉树节点所在层数
int layer = 1;
int TreeNodeLayer(TreeNode* node, int key, int layer)
{
	if (node == NULL)
    {
		return -1;
	}
    int n = 0;

	if (node->root == key)
    {
		return *layer;
	}
    layer++;

	n = TreeNodeLayer(node->lchild, key, layer);
	if (n != -1)
    {
		return *layer;
	}
	else
	{
		return TreeNodeLayer(node->rchild, key, layer);
	}
	return *layer;
}


//3、合并两个升序链表并以降序输出
struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2){
    if(l1 == NULL){
        return l2;
    }
    if(l2 == NULL){
        return l1;
    }
    struct ListNode *head = NULL, *tail = NULL;

    //哨兵位
    head = tail = (struct ListNode*)malloc(sizeof(struct ListNode));

    while(l1 != NULL && l2 != NULL){
        if(l1->val < l2->val){
            //尾插
            tail->next = l1;
             l1 = l1->next;
             }
        else{
            tail->next = l2;
            l2 = l2->next;
            }
             tail = tail->next;
    }
    if(l1){
        tail->next = l1;
    }
    if(l2){
        tail->next = l2;
    }
    struct ListNode *first = head->next;
    free(head);

    //翻转链表
    struct ListNode *cur = first;
    struct ListNode *newhead = NULL;
    while(cur){
        struct ListNode *next = cur->next;
        cur->next = newhead;
        newhead = cur;
        cur = next;
    }
    return newhead;
}





class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1 == NULL){
            return list2;
        }
        if(list2 == NULL){
            return list1;
        }
        ListNode *head = NULL, *tail = NULL;
        //取头
        if(list1->val < list2->val){
            head = tail = list1;
            list1 = list1->next;
        }
        else{
            head = tail = list2;
            list2 = list2->next;
        }
        while(list1 != NULL && list2 != NULL){
            if(list1->val < list2->val){
                tail->next = list1;
                list1 = list1->next;
            }
            else{
                tail->next = list2;
                list2 = list2->next;
            }
            tail = tail->next;
        }
        if(list1){
            tail->next = list1;
        }
        if(list2){
            tail->next = list2;
        }

        //翻转
        ListNode *answer {};
        while( head )
        {
            answer = new ListNode { head->val, answer };
            head = head->next;
        }
        return answer;
    }
};
