/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {

        multiset<int>st;

        for(ListNode* head:lists)
         {
            ListNode *cur=head;
             while(cur!=nullptr)
              {
                st.insert(cur->val);
                cur=cur->next;
              }
         }

         ListNode* n=new ListNode(0);
          ListNode* n2=n;

          for(auto it : st)
           {
            n->next=new ListNode(0); 
            n=n->next;
            n->val=it;
           
           }

           return n2->next;
        
    }
};