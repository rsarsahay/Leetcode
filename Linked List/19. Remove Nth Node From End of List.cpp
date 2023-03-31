// https://leetcode.com/problems/remove-nth-node-from-end-of-list/

// T.C = O(N)
// S.C = O(1)

class Solution 
{
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) 
    {   
        ListNode* dummy = new ListNode();
            dummy->next =head;//1
        
        ListNode* slow=dummy;
        ListNode* fast=dummy;
        
        for(int i=1; i<=n; i++)
            fast=fast->next;//1 2
        
        while(fast->next!=NULL)
        {
            slow=slow->next;//1 2 3
            fast=fast->next;//3 4 5
        }
        
        slow->next=slow->next->next;//5
        
        return dummy->next;
    }
	
};