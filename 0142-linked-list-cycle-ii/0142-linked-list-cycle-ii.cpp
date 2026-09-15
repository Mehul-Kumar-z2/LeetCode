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
    ListNode *detectCycle(ListNode *head) {
        if(head==NULL) return head;
        if(head->next==NULL) return NULL;
        ListNode* slow = head;
        ListNode* fast = head;
        int state = 0;
        while(fast!=NULL){
            if(fast->next==NULL) break;
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast && fast!=NULL){
                state=1;
                break;
            }
        }
        if(!state){
            return NULL;
        }
        ListNode* p = head;
        while(p!=slow){
            ListNode* temp = slow;
            do{
                if(p==slow){
                    state==0;
                    return p;
                }
                slow=slow->next;
            }
            while(slow!=temp);
            if(!state) break;
            p=p->next;
        }
        return p;
    }
};