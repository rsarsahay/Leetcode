//Intuition
//This problem can be done in linear time complexity with Kadane's algorithm 
//along with that will also get the subarray that is giving the largest positive sum.

//Time complexity: O(n)
//Space complexity: O(1)

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=0;
        int maxi=nums[0];

        for(auto i:nums)
        {
            sum+=i;
            maxi=max(sum , maxi);

            if(sum <0)
            sum=0;
        }

        return maxi;
    }
};