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
    bool isPalindrome(ListNode* head) {
        
        stack<int> st;
        ListNode* tp=head;
        while(tp){
            st.push(tp->val);
            tp=tp->next;
        }
        tp=head;
        while(tp){
            if(st.top()!=tp->val){
                return false;
            }
            st.pop();
            tp=tp->next;
        }
        return true;
    }
};