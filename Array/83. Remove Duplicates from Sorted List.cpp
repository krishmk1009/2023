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
    ListNode* deleteDuplicates(ListNode* head) {
        if (head == NULL)
            return NULL;
        set<int> s;

        ListNode* temp = head;
        while (temp != NULL) {

            s.insert(temp->val);
            temp = temp->next;
        }

        temp = head;

        for (auto i : s) {
            temp->val = i;
            temp = temp->next;
        }

        int n = s.size();
        temp = head;
        while (n > 1) {
            temp = temp->next;
            n--;
        }
        temp->next = NULL;
        return head;
    }
};
