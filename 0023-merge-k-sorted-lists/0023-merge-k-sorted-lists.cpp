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
    void addNode(ListNode*& head, ListNode*& tail, int val) {
        ListNode* a = new ListNode(val);

        if (head == nullptr) {
            head = a;
            tail = a;
            return;
        }

        tail->next = a;
        tail = a;
    }

    ListNode* mergeKLists(vector<ListNode*>& lists) {
        int rows = lists.size();

        if (rows == 0)
            return nullptr;

        if (rows == 1)
            return lists[0];

        vector<ListNode*> pointer(rows, nullptr);
        vector<int> num(rows, INT_MAX);

        for (int i = 0; i < rows; i++) {
            if (lists[i] != nullptr) {
                pointer[i] = lists[i];
                num[i] = lists[i]->val;
            }
        }

        ListNode* head = nullptr;
        ListNode* tail = nullptr;

        while (true) {
            int minVal = *min_element(num.begin(), num.end());

            if (minVal == INT_MAX)
                break;

            for (int i = 0; i < rows; i++) {
                if (num[i] == minVal) {
                    addNode(head, tail, minVal);

                    pointer[i] = pointer[i]->next;

                    if (pointer[i] != nullptr)
                        num[i] = pointer[i]->val;
                    else
                        num[i] = INT_MAX;
                }
            }
        }

        return head;
    }
};