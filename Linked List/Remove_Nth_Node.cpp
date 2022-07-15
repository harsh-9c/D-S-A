ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        
        ListNode* temp=head;
      
        int cnt=0;
        while(temp!=NULL){
            cnt++;
            temp=temp->next;
        }
        
        if(cnt==1) return NULL;
        if(cnt==n) return head->next;
        
        
        int tar=cnt-n+1;
        
        temp=head->next;
        ListNode* prev=head;
        
        tar--;
        
        while(temp){
            tar--;
            if(tar==0){
                prev->next=temp->next;
                break;
            }
            prev=temp;
            temp=temp->next;
        }
        
        return head;
        
    }
