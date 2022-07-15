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

// EXPLAINATION
       
H         S         M
1 -> 2 -> 3 -> 4 -> 5 -> 6 -> 3
 
 H-S = x1
 S-M = x2
 M-H = x3
 
 Distance travelled by fast pointer= 2 * Distance travelled by slow pointer
 x1+x2+x2+x3=2*(x1+x2)
 x3=x1
 
 Thus the remainging distance after meeting is same as x1.
 
             
