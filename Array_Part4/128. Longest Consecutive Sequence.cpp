// https://leetcode.com/problems/longest-consecutive-sequence/

//Time complexity: O(N)
//Space complexity: O(N)

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int>hash;

        for(int i : nums)
        hash.insert(i);

        int longestStreak = 0;

        for(int i: nums)
        {
            if(!hash.count(i-1))
            {
            int currNum=i;
            int currentStreak=1;

             while(hash.count(currNum +1))
             {
             currNum += 1;
             currentStreak +=1;
             }

             longestStreak = max(longestStreak , currentStreak);
            }
        }

        return longestStreak;
    }
};