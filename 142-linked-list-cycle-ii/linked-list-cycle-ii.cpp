/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        unordered_map<ListNode*, ListNode*> um;
        while(head)
        {
            if (um.find(head) != um.end()) return um[head];
            um[head] = head;
            head = head->next;
        }
        return nullptr;
    }
};