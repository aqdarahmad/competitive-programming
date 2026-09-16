

bool ifcycle(ListNode* head)
 {
    ListNode *slow=head;
    ListNode *fast=head;

    while(fast!=nullptr && fats->next!=nullptr)
     {  
        slow=slow->next;
        fast=fast->next->next;

        if(slow==fast)
          return true;

     }
     return false;
 }