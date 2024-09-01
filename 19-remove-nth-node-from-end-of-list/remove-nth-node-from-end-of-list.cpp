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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* first = head;
        ListNode* second = head;
        while (n > 0)
        {
            first = first->next;
            if (!first)
                return head->next;
            n--;
        }
        while (first->next != nullptr)
        {
            first = first->next;
            second = second->next;
        }
        second->next = second->next->next;
        return head;
    }
};