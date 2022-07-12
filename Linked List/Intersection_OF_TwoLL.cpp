ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        
        ListNode* x=headA;
        ListNode* y=headB;
        
        if(!x || !y) return NULL;
        
        while(x && y && x!=y){

            x=x->next;
            y=y->next;
            
            if(x==y) return x;
            
            if(!x) x=headB;
            if(!y) y=headA;
        }
        
        return x;
        
    }
