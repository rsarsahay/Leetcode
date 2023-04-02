// https://leetcode.com/problems/palindrome-linked-list/

/*T.C= O(N/2) + O(N/2) + O(N/2) for finding middle,
    reversing list from half and traversing to find palindrome respectively

  S.C= O(1)
*/

class Solution {
public:
    ListNode *reverse(ListNode *ptr)
    {
        ListNode *pre=NULL;
        ListNode *nex=NULL;

        while(ptr)
        {
            nex=ptr->next;
            ptr->next=pre;
            pre=ptr;
            ptr=nex;
        }
        return pre;
    }

    bool isPalindrome(ListNode* head) {
        if(head==NULL || head->next==NULL)
        return true;

        ListNode *slow=head;
        ListNode *fast=head;

        while(fast->next && fast->next->next)
        {
            slow=slow->next;
            fast=fast->next->next;
        }

        ListNode* rev = reverse(slow->next);

        ListNode *curr = head;
        while(rev != NULL)
        {
            if(rev->val != curr->val) 
            return false;

            rev = rev->next;
            curr = curr->next;
        }
        return true;
    }
};