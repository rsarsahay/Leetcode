//  https://leetcode.com/problems/find-the-duplicate-number/

class Solution {
public:
    int findDuplicate(vector<int>& nums) {

       /* Unordered_map

          T.C = O(1)
          S.C = O(n) */
       
        int n = nums.size();
        unordered_map<int, int> mp;
        for(int i=0; i<n; i++) {
         // if element is found then return
		 if(mp.find(nums[i])!=mp.end()) {
                return nums[i];
            }
            // if not found then keep insert into map
			mp[nums[i]]++;
        }
        return -1;


       /* Unordered_map

          T.C = O(1)
          S.C = O(n) */
       
        unordered_map<int,int>m;
        for(int i=0;i<nums.size();i++)
            m[nums[i]]++;
        
        for(auto i:m)
        {
            if(i.second >= 2) // > sign for edge case like [2,2,2,2]
                return i.first;
        }
        return -1;

        /* Unordered_set

          T.C = O(1)
          S.C = O(n) */
        
        int n = nums.size();
        unordered_set<int> mp;
        for(int i=0; i<n; i++) {
            if(mp.find(nums[i])!=mp.end()) {
                return nums[i];
            }
            mp.insert(nums[i]);
        }
        return -1;

       /* Sorting

          T.C = O(nlogn)
          S.C = O(1) */
       
        sort(nums.begin(),nums.end());
       
        for(int i=1; i<nums.size(); i++)
        {
          if(nums[i]==nums[i-1])
              return nums[i];
        }
        return -1;


        /* T.C = O(n)
          S.C = O(1)

          Linkedlist Cycle Method*/

       int slow =nums[0];
        int fast =nums[0];

        do
        {
            slow = nums[slow];
            fast = nums[nums[fast]];
        }

        while(slow != fast);
        fast =nums[0];

        while(slow != fast)
        {
            slow=nums[slow];
            fast=nums[fast];
        }

        return slow;

    }
};