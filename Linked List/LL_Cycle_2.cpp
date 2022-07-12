 ListNode *detectCycle(ListNode *head) {
        
      ListNode* slow=head;
      ListNode* fast=head;
        
      bool cycle=false;
        
      while(fast!=NULL && fast->next!=NULL){
          slow=slow->next;
          fast=fast->next->next;
          if(slow==fast){
             cycle=true; break;
          }
      }
        
        if(!cycle) return NULL;
        
        slow=head; cout<<fast->val;
        while(slow!=fast){
            slow=slow->next;
            fast=fast->next;
            
        }
        
        return slow;
        
        
    }
