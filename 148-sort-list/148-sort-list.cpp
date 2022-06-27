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
    ListNode* sortList(ListNode* head) {
        priority_queue <int, vector<int>, greater<int> > pq;

        ListNode* tp=head;
        while(tp){
            pq.push(tp->val);
            tp=tp->next;
        }
        tp=head;
        while(tp){
            tp->val=pq.top();pq.pop();
            tp=tp->next;
        }
        return head;
    }
};