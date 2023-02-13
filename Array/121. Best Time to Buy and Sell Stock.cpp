// https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

//Intuition
/*We will linearly travel the array. 
We can maintain a minimum from the start of the array
and compare it with every element of the array, if it is
greater than the minimum then take the difference and maintain it in max, 
otherwise update the minimum.*/

//Time complexity: O(n)
//Space complexity: O(1)

class Solution 
{
public:
    int maxProfit(vector<int>& prices) {
        int max_pro=0;
        int n=prices.size();
        int min_price=INT_MAX;

        for(int i=0; i<n; i++)
        {
            min_price=min(min_price, prices[i]);
            max_pro=max(max_pro, prices[i]-min_price);
        }

        return max_pro;
    }
};
