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
    void atHead(ListNode*& head, int x){
        ListNode* p = new ListNode(x, head);
        head = p;
    }
    ListNode* reverseList(ListNode* head) {
        if(head==NULL) return head;
        if(head->next==NULL) return head;
        ListNode* p = head;
        ListNode* rev = new ListNode(p->val, NULL);
        p=p->next;
        while(p!=NULL){
            atHead(rev, p->val);
            p=p->next;
        }
        return rev;
    }
};