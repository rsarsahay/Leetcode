/*
https://www.interviewbit.com/problems/repeat-and-missing-number-array/

Intuition + Approach: 

Since the numbers are from 1 to N in the array arr[]

1. Take a new_A array of size N+1 and initalize it with 0.
2. Traverse the given array and increase the value of new_A[A[i]] by one .
3. Then again traverse the new_A array starting from index 1 to N.

If you find any index value greater than 1 that is repeating element A.
If you find any index value = 0 then that is the missing element B.
  T.C=O(n)
  S.C=O(n)
            */

vector<int> Solution::repeatedNumber(const vector<int> &A) {
    int n=A.size() +1;
    vector<int>new_A(n,0);
    vector<int>res;
    
    for(int i=0; i<A.size(); i++)
    new_A[A[i]]++;
    
    for(int i=A.size(); i>=1; i--)
    {
        if(new_A[i] > 1 ||new_A[i]==0)
        res.push_back(i);
    }
    
    return res;
}
