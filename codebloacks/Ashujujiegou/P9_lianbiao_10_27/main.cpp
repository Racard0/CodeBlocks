#include<stdio.h>
Definition for singly-linked list.
struct ListNode{
    int val;
    struct ListNode *next;
};

//P9

//1、
//206.翻转链表
//法一
struct ListNode *reverseList(struct ListNode *head){
    //考虑链表为空的情况
    if(head == NULL){
            return NULL;
        }
    struct ListNode *n1 = NULL, *n2 = head, *n3 = head->next;

    n2->next = n1;
    n1 = n2;
    n2 = n3;
    //考虑n3为空的情况
    if(n3){
        n3 = n3->next;
    }
    return n1;
}

//法二：头插法
//取原链表的节点头插到新链表
//此方法不用考虑链表为NULL的情况
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


//2、
//867.链表的中间结点
//给定一个头结点为head的非空链表，返回链表的中间结点
//如有两个中间结点，返回第二个中间结点

//快慢指针
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

//1、
//21.合并两个有序链表

//法一
//14：52
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
            //尾插
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

//法二，先定义一个头结点
//18：17
struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2){
    if(l1 == NULL){
        return l2;
    }
    if(l2 == NULL){
        return l1;
    }
    struct ListNode *head = NULL, *tail = NULL;

    //先定义一个头
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
    return head;
}


//2、
//141.环形链表

//追逐问题，快慢指针
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
//关键字bool是用来声明布尔逻辑变量的；也就是说,变量要么是真，要么是假。


//3、
//142.环形链表II
//给定一个链表，返回链表开始入环的第一个节点。 如果链表无环，则返回 null

//结论：一个指针从meet点开始走，一个指针从链表开始走，他们会在入口点相遇
//(N-1)*C+C-X=L
//N：fast在环里的次数，C：环的长度，X：slow从入环结点走的长度，L：入环前长度
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
