// IT's TAKING 2 PASSES

ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        
        ListNode* temp=head;
        ListNode* temp2;
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
        
        while(temp!=NULL){
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




// IT's TAKING ONLY SINGLE PASS


ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        ListNode *fast=head,*slow=head;
        
        for(int i=0;i<n;i++) fast=fast->next;
        
        if(!fast) return head->next;
        
        while (fast->next) fast=fast->next,slow=slow->next;
        slow->next=slow->next->next;
        
        return head;
        
    }
