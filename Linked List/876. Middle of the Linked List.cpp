// https://leetcode.com/problems/middle-of-the-linked-list/

// T.C=O(N)
// S.C=O(1)

class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        auto fast = head;
        auto slow = head;
        
        while(fast && fast->next)
        {
            fast = fast->next->next;
            slow = slow->next;
        }
        return slow;
        
    }
};