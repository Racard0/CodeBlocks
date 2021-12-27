#include<stdio.h>
Definition for singly-linked list.
struct ListNode{
    int val;
    struct ListNode *next;
};

//P9

//1��
//206.��ת����
//��һ
struct ListNode *reverseList(struct ListNode *head){
    //��������Ϊ�յ����
    if(head == NULL){
            return NULL;
        }
    struct ListNode *n1 = NULL, *n2 = head, *n3 = head->next;

    n2->next = n1;
    n1 = n2;
    n2 = n3;
    //����n3Ϊ�յ����
    if(n3){
        n3 = n3->next;
    }
    return n1;
}

//������ͷ�巨
//ȡԭ����Ľڵ�ͷ�嵽������
//�˷������ÿ�������ΪNULL�����
struct ListNode *reverseList(struct ListNode *head){
    struct ListNode *cur = head;
    struct ListNode *newhead = NULL;
    while(cur){
        struct ListNode *next = cur->next;
        cur->next = newhead;
        newhead = cur;
        cur = next;
    }
    return newhead;
}


//2��
//867.������м���
//����һ��ͷ���Ϊhead�ķǿ���������������м���
//���������м��㣬���صڶ����м���

//����ָ��
struct ListNode *middlenode(struct ListNode *head){
    struct ListNode *slow = head;
    struct ListNode *fast = head;
    while(fast && fast->next){
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}




//P10

//1��
//21.�ϲ�������������

//��һ
//14��52
struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2){
    if(l1 == NULL){
        return l2;
    }
    if(l2 == NULL){
        return l1;
    }
    struct ListNode *head = NULL, *tail = NULL;
    while(l1 != NULL && l2 != NULL){
        if(l1->val < l2->val){
            //β��
            if(tail == NULL){
                head = tail = l1;
            }
            else{
                tail->next = l1;
                tail = tail->next;
            }
            l1 = l1->next;
        }
        else{
            if(tail == NULL){
                head = tail = l2;
            }
            else{
                tail->next = l2;
                tail = tail->next;
            }
            l2 = l2->next;
        }
    }
    if(l1){
        tail->next = l1;
    }
    if(l2){
        tail->next = l2;
    }
    return head;
}

//�������ȶ���һ��ͷ���
//18��17
struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2){
    if(l1 == NULL){
        return l2;
    }
    if(l2 == NULL){
        return l1;
    }
    struct ListNode *head = NULL, *tail = NULL;

    //�ȶ���һ��ͷ
    if(l1->val < l2->val)
    {
        head = tail = l1;
        l1 = l1->next;
    }
    else
    {
        head = tail = l2;
        l2 = l2->next;
    }

    while(l1 != NULL && l2 != NULL){
        if(l1->val < l2->val){
            //β��
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
    return head;
}


//2��
//141.��������

//׷�����⣬����ָ��
bool hasCycle(struct ListNode *head)
{
    struct ListNode *fast = head, slow = head;
    while(fast && fast->next)
    {
        slow = slow->next;
        fast = fast->next;

        if(slow == fast)
        {
            return true;
        }
    }
    return false;
}
//�ؼ���bool���������������߼������ģ�Ҳ����˵,����Ҫô���棬Ҫô�Ǽ١�


//3��
//142.��������II
//����һ��������������ʼ�뻷�ĵ�һ���ڵ㡣 ��������޻����򷵻� null

//���ۣ�һ��ָ���meet�㿪ʼ�ߣ�һ��ָ�������ʼ�ߣ����ǻ�����ڵ�����
//(N-1)*C+C-X=L
//N��fast�ڻ���Ĵ�����C�����ĳ��ȣ�X��slow���뻷����ߵĳ��ȣ�L���뻷ǰ����
struct ListNode *detectCycle(struct ListNode *head)
{
    struct ListNode *fast = head, *slow = head;
    while(fast && fast->next)
    {
        fast = fast->next->next;
        slow = slow->next;
        if(slow == fast)
        {
            struct ListNode *meet = slow;
            while(meet != head)
            {
                meet = meet->next;
                head = head->next;
            }
            return meet;
        }
    }
    return NULL;
}
