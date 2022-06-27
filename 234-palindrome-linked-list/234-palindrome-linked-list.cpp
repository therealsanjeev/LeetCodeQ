
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        
        if(head==NULL)
        return true;
    int c=0;
    ListNode *temp = head;
    // count the length of linkedlist
    while(temp != NULL){        
        c++;
        temp = temp ->next;
    }
    
    // break the linkedlist in two half
    int mid = (c-1)/2;
    int i=0;
    ListNode * head2= head;
    while(i<mid){
        head2=head2->next;
        i++;
    }
    temp = head2->next ;
    head2->next = NULL;
    head2= temp;
    
    // reverse the second half of the linkedlist
    ListNode *pre = NULL;    
    ListNode *next = NULL;
    ListNode *current = head2;
    while(current != NULL){
        next = current->next;
        current ->next = pre;
        pre= current ;
        current = next;
    }
    head2 = pre;
    
    // compare the second half linkedlist to first half linkedlis
    ListNode *temp1=head;
    ListNode *temp2 = head2;
    while( temp2 != NULL){
        if(temp1->val != temp2->val){
            return false;
        }
        temp1=temp1->next;
        temp2=temp2->next;
    }
    return true; 
    }
};