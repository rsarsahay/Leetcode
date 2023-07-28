// https://leetcode.com/problems/jump-game-ii/

class Solution {
public:
    int jump(vector<int>& nums) {
	int min_jump = 0, curLimit = 0, limit = 0;
	for(int i = 0; i < nums.size() - 1; i++) {
		limit = max(limit, i + nums[i]);
		if(i == curLimit)
        {
			min_jump++;
			curLimit = limit;
		}
	}
	return min_jump;
}
};