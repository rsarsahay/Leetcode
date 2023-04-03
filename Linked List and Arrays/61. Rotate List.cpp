// https://leetcode.com/problems/rotate-list

// Time complexity: O(N - (N%k))
// Space complexity: O(1)

class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head || !head->next || k==0)
        return head;

        //comput length
        ListNode *curr=head;
        int l=1;
        while(curr->next && l++)
        curr=curr->next;

        //go till that node
        curr->next=head;
        k%=l;
        k=l-k;
        while(k--)
        curr=curr->next;

        //make the node head and break the connection
        head=curr->next;
        curr->next=NULL;

        return head;
    }
};