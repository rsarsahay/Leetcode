// We are creating a 2D array of size (numRows * numCols) (where 1 <= numCols <= numRows), 
//and we are traversing through each of the cells to update it with its correct value, so 
//Time Complexity = O(numRows2)
//Space Complexity = O(numRows2).


// If row(r) and column(c) no. is given and asked to find the value 
//Then, use (r-1)C(c-1)
// i.e, r=5, c=4
//      (5-1)C(4-1) = 4C3 = (4*3*2)/(3*2*1)
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> p(numRows);

        for (int i = 0; i < numRows; i++) 
        {
            //no. of columns and rows are equal so, resize it
            p[i].resize(i + 1);

            //1st and last column is always 0 so, set it as 0
            p[i][0] = p[i][i] = 1;

            //traverse from 1st column to the 2nd last column
            //to add (j-1)th column value of the previous rows
            //and (j)th column value of the previous rows
            for (int j = 1; j < i; j++)
                p[i][j] = p[i - 1][j - 1] + p[i - 1][j];
        }
        
        return p;
    }
};