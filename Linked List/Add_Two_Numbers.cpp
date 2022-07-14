ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        if(!l1) return l2;
        else if(!l2) return l1;
        
        ListNode* ans=new ListNode();
        ListNode* temp=ans;
        
        int carry=0;
        
        while(true){
            
            if(!l1 && !l2 && !carry) break;
            
            int sum=0;
            if(l1){
                sum+=l1->val;
                l1=l1->next;
            }
            if(l2){
                sum+=l2->val;
                l2=l2->next;
            }
            
            sum+=carry;
            

            int cur=sum%10;
            carry=sum/10; 
            
            ListNode* node=new ListNode(cur);
            temp->next=node;
            temp=temp->next;
            
        }
        
        temp->next=NULL; 
        ans=ans->next;
        
        return ans;
        
    }
