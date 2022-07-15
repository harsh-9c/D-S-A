
// Just Copying the value
void deleteNode(ListNode* node) {
        
        node->val=node->next->val;
        
    }


// Deleting the address as well
void deleteNode(ListNode* node) {
        
        ListNode* temp=node->next;
        *node = *temp;
        delete temp;
        
    }
