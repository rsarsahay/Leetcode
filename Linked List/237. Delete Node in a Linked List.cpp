// https://leetcode.com/problems/delete-node-in-a-linked-list/

// T.C= O(1)
// S.C= O(1)

class Solution {
public:
    void deleteNode(ListNode* node) {
               
        node->val = node->next->val;       // Copy next node's value to curr node
        node->next = node->next->next;     // Skip next node from the list
                

    }
};