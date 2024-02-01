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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
       ListNode* dummyNode = new ListNode ();
       dummyNode->next= head;

       ListNode* leftPre = dummyNode;
       ListNode* currNode = head;

       for(int i = 0;i<left-1 ; i++){
           leftPre = leftPre->next;
           currNode = currNode->next;
       }

       ListNode* subListHead= currNode;

       ListNode* prev = NULL;

       for(int i = 0 ;i<right-left+1 ; i++){
           ListNode* nextNode = currNode->next;
           currNode->next = prev;
           prev= currNode;
           currNode = nextNode;
       }

       leftPre->next = prev;
       subListHead->next= currNode;

       return dummyNode->next;
    }
};
