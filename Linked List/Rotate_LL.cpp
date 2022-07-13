/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

    ListNode* rotateRight(ListNode* head, int k) {
        
        if(!head) return head;
        
        ListNode* temp=head;
        int len=0;
        while(temp!=NULL){
            len++;
            temp=temp->next;
        }
        
        k=k%len; 
        
        if(!k) return head;
        
        int tar=len-k;
        int cur=0;
        
        temp=head;
       
        ListNode* bp;
        
        while(temp!=NULL){
            cur++;
            if(cur==tar){ 
                bp=temp->next;
                temp->next=NULL;
            }
            temp=temp->next;
        }
        
        ListNode* ans=bp;
        
        while(bp->next!=NULL){
            bp=bp->next;
        }
        bp->next=head;
        return ans;
        
    }
