/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head==NULL) return head;
        ListNode* p = head;
        ListNode* q = p->next;
        while(p!=NULL && q!=NULL){
            if(p == q) return 1;
            p = p->next;
            if(q->next == NULL) return 0;
            q = (q->next)->next;
        }
        return 0;
    }
};