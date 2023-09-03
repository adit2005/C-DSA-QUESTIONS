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
 //---RECURSIVE SOLUTION---//
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(head == NULL || head ->next == NULL) return head;
        ListNode* prev = NULL;
        ListNode* h = reverseList(head -> next);
        head->next->next = head;
        head->next = prev;
        return h;
        
    }
};