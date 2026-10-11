#include<bits/stdc++.h>
using namespace std;



  Definition for singly-linked list.
  struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
 

ListNode* rempoventhnode(ListNode* head, int n)
 {
    ListNode *temp=head;
    int sz=1;
    while(temp->next!=nullptr)
     {
        temp=temp->next;
        sz++;
     }

     if(sz==n)
      {
        ListNode *t2=head;
        head=head->next;
        delete t2;
        return head;
      }

      int pos=0;

      ListNode *cur=head;

      while(cur!=nullptr && cur->next!=nullptr)
       {
        if(pos=1 == n)
         {
            cur->next=cur->next->next;
         }
         cur=cur->next;
         pos++;
       }

       return head;
 }