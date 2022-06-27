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
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        ListNode *bn=new ListNode(-1),*ans=bn,*fn=head;
        bn->next=head;
        
        while(fn&&n>0){
            n--;
            fn=fn->next;
        }
        while(fn){
            bn=bn->next;
            fn=fn->next;
        }
        bn->next=bn->next->next;
            
            
        return ans->next;
    }
};