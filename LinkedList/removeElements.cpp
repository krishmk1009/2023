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
    ListNode* removeElements(ListNode* head, int val) {

        ListNode* prev = nullptr;
        ListNode* temp = head;

        while (temp != NULL) {

            if (temp->val != val) {
                prev = temp;
                temp = temp->next;
            } else {

                if (prev == nullptr) {

                    head = temp->next;
                } else {
                    prev->next = temp->next;
                }

               ListNode* deleteNode = temp;
               temp = temp->next;
               delete deleteNode;
            }
        }

        return head;
    }
};
