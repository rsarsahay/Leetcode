// https://leetcode.com/problems/powx-n/


//Time complexity: O(log n)
//Space complexity: O(1)

class Solution {
public:
    double myPow(double x, int n) {
        double res = 1.0;
        long long dn = n;
        if (dn < 0) // dn= to store duplicate copy of n to avoid overflow
        dn = -1 * dn;
        while (dn) 
        {
            if (dn % 2) 
            {
                res = res * x;
                dn = dn - 1;
        } 
            else 
            {
                 x = x * x;
                dn = dn / 2;
            }
        }
        if (n < 0) 
        res = (double)(1.0) / (double)(res);
        return res;
    }
};