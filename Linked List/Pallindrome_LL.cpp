// APPROACH 1


ListNode* reverse(ListNode* head){
        ListNode* prev=NULL;
        while(head){
            ListNode* next=head->next;
            head->next=prev;
            prev=head;
            head=next;
        }
        return prev; 
    }
    
    bool isPalindrome(ListNode* head) {
        
        ListNode* slow=head;
        ListNode* fast=head;
        
        while(fast->next && fast->next->next){
            slow=slow->next;
            fast=fast->next->next;
        }
        
        slow->next=reverse(slow->next);
        slow=slow->next;  
     
        while(slow){
            if(head->val!=slow->val) return false;
            slow=slow->next;
            head=head->next;
        }
        
        return true;
        
    }


//   APPRAOCH 2


bool check(ListNode*& head,ListNode* temp){
        
        if(!temp) return true;
        bool cor=check(head,temp->next);
        if(head->val!=temp->val) return false;
        head=head->next;
        
        return cor;
        
    }
    bool isPalindrome(ListNode* head) {
        
        return check(head,head);
        
    }




