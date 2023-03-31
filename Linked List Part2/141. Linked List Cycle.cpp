// https://leetcode.com/problems/linked-list-cycle/description/

// Using Hashing
//T.C= O(N)
//S.C= O(N)

class Solution {
    public:

    bool hasCycle(ListNode *head) {

        unordered_set<ListNode*>s;

        while(head)
        {
            if(s.find(head) != s.end())
            return true;

            s.insert(head);
            head=head->next;
        }
        return false;
    }
};

//Using Slow and Fast Pointer
//T.C =O(N)
//S.C =O(1)

class Solution {
    public:

    bool hasCycle(ListNode *head) {

        if(!head)
        return false;

        ListNode *slow=head;
        ListNode *fast=head;
        
        while(fast->next!=NULL && fast->next->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;

            if(slow==fast)
            return true;
        }
        
        return false;
    }
};
