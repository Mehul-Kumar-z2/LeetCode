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
    ListNode* deleteNode(ListNode* head, ListNode*& q){
        ListNode* p = head;
        while(p->next!=q && p->next!=NULL){
            p=p->next;
        }
        if(p->next == NULL) return head;
        p->next = q->next;
        ListNode* r = q;
        q = p->next;
        delete(r);
        p = nullptr;
        return head;
    }
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* p = head;
        if(p == NULL) return head;
        if(p->next == NULL) return head;
        while(p!=NULL){
            if(p->next == NULL) break;
            int n = p->val;
            ListNode* q = p->next;
            while(q!=NULL){
                if(q->val == n){
                    head = deleteNode(head, q);
                }
                else break;
            }
            p = p->next;
        }
        return head;
    }
};