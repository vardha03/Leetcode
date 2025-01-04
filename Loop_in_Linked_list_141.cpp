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
    bool hasCycle(ListNode *head) {
        int pos = -1;
        struct ListNode *start = head, *end = head;
        while (start && end && end->next) 
        {
            start = start->next;
            end = end->next->next;
            if ( end == start )
                return true;
        }
        return false;
    }
};