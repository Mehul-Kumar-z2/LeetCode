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
    int MiddleListNode(ListNode* head){
        ListNode* p = head;
        int k=0;
        while(p!=NULL){
            k++;
            p=p->next;
        }
        return (k/2 + 1);
    }
    ListNode* middleNode(ListNode* head) {
        if(head==NULL) return head;
        if(head->next==NULL) return head;
        int k = MiddleListNode(head);
        ListNode* p = head;
        while(k-1>0){
            p = p->next;
            k--;
        }
        return p;
    }
};