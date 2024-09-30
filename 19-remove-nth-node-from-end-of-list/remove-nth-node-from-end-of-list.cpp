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
        auto* dummy = new ListNode{0, head};
        auto left = dummy, right = dummy;
        for (auto i = 0; i < n; i++)
            right = right->next;
        while (right->next)
        {
            right = right->next;
            left = left->next;
        }
        left->next = left->next->next;
        return dummy->next;
    }
};