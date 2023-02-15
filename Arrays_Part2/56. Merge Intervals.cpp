// https://leetcode.com/problems/merge-intervals/

//Intuition
/*Sort the intervals, the intervals which will be merging are 
bound to be adjacent. We kept on merging simultaneously as we were traversing 
through the array and when the element was non-overlapping we simply inserted 
the element in our data structure. */

//Time complexity:O(nlogn) + O(n) i.e. O(nlogn)
//Space complexity: O(n)

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> mergedIntervals;
        if(intervals.size() == 0)
            return mergedIntervals;

        sort(intervals.begin() , intervals.end());

        vector<int> tempInterval = intervals[0];

        for(auto it : intervals)
        {
            if(it[0] <= tempInterval[1])
                tempInterval[1] = max(it[1] , tempInterval[1]);

            else
            {
                mergedIntervals.push_back(tempInterval);
                tempInterval =it;
            }
        }

        mergedIntervals.push_back(tempInterval);
        return mergedIntervals;
    }
};
