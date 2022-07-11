//  ITERATIVE METHOD

ListNode* reverseList(ListNode* head) {
        
        ListNode *nextNode, *prevNode = NULL;
        while (head) {
            nextNode = head->next;
            head->next = prevNode;
            prevNode = head;
            head = nextNode;
        }
        return prevNode;
       
    }


// RECURSIVE METHOD

ListNode *reverse(ListNode *head){
        if(head->next==NULL) return head;
        
        ListNode *reverseHead=reverse(head->next);
        head->next->next=head;
        head->next=NULL;
        return reverseHead;
        
    }
    ListNode* reverseList(ListNode* head) {
        
        if(head==NULL) return head;
        return reverse(head);
     
    }
