// https://leetcode.com/problems/reverse-linked-list/

//Iterative Method

// T.C= O(N)
// S.C= O(1)

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        
        //iterative
       ListNode *prev = NULL;
       ListNode *curr = head;
       ListNode *next = NULL;
        
        while(curr)
        {
            next = curr->next;
            curr->next = prev;
            
            prev = curr;
            curr = next;
        }
        
        return prev;
        
    }
};
