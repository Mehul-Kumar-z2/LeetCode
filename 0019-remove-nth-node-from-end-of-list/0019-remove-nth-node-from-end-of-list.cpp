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
    ListNode* remove(ListNode* head, int n){
        if(n==1){
            ListNode* p = head;
            head = head->next;
            p->next=NULL;
            delete p;
            return head;
        }
        ListNode* p = head;
        while(((--n) - 1)){
            p = p->next;
        }
        ListNode* q = p->next;
        p->next = q->next;
        q->next = NULL;
        delete q;
        p=nullptr;
        return head;
    }
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int k=0;
        ListNode* p = head;
        while(p!=NULL){
            k++;
            p=p->next;
        }
        p=nullptr;
        head = remove(head, k-n+1);
        return head;
    }
};