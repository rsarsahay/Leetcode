// https://leetcode.com/problems/majority-element-ii/


//T.C : O(n)
//S.C : O(n)

class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int>mp;
        vector<int>res;
        int n=nums.size();
        for(int i=0; i<n; i++)
        mp[nums[i]]++;

        for(auto x:mp)
        {
            if(x.second > (n/3))
            res.push_back(x.first);
        }

        return res;
    }
};