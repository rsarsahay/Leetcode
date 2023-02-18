// https://leetcode.com/problems/search-a-2d-matrix/

//Intuition
/*As it is clearly mentioned that the given matrix will be row-wise 
and column-wise sorted, we can see that the elements in the matrix 
will be in a monotonically increasing order. So we can apply binary search to search the matrix.*/

//Time complexity: O(log(m*n))
//Space complexity: O(1)

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int l=0;
        int h=(matrix.size() * matrix[0].size()) - 1;

        if(!matrix.size())
        return false;

        while(l <= h)
        {
            int mid=(l+(h-l)/2);

            if(matrix[mid/matrix[0].size()][mid % matrix[0].size()] == target)
            return true;

            if(matrix[mid/matrix[0].size()][mid % matrix[0].size()] < target)
            l=mid + 1;

            else
            h=mid - 1;
        }

        return false;
    }
};