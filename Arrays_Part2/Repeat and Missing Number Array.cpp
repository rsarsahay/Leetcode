/*
https://www.interviewbit.com/problems/repeat-and-missing-number-array/

Intuition + Approach: 

Since the numbers are from 1 to N in the array arr[]

1. Take a B vector of size N+1 and initalize it with 0.
2. Traverse the given array and increase the value of B[A[i]] by one .
3. Then again traverse the B array starting from index 1 to N.

If you find any index value greater than 1 that is repeating element A.
If you find any index value = 0 then that is the missing element B.
  T.C=O(n)
  S.C=O(n)
            */

vector<int> Solution::repeatedNumber(const vector<int> &A) 
{
    long n=A.size();
    vector<long> B(n+1,0);
      
    for(long i=0;i<A.size();i++)
    B[A[i]]++;

    long repeat,miss;
    for(long i=1;i<=A.size();i++)
    {
        if(B[i]==2)
        repeat=i;
        if(B[i]==0)
        miss=i;
    }
    vector<int> result{repeat,miss};
    return result;
}  
