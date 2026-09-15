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
    void deletep(ListNode*& p){
        ListNode* temp = p->next;
        p->next = temp->next;
        delete temp;
    }
    void deletehead(ListNode*& head){
        ListNode* temp = head;
        head = head->next;
        delete(temp);
    }
    ListNode* removeElements(ListNode* head, int val) {
        if(head==NULL) return head;
        ListNode*p = head;
        while(head!=NULL){
            if(head->val==val){
                deletehead(head);
                p = head;
                continue;
            }
            else if(head->next!=NULL){
                if(head->next->val == val){
                    deletep(head);
                    continue;
                }
            }
            head=head->next;
        }
        return p;
    }
};