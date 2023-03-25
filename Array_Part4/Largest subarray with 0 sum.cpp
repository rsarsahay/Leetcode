// https://practice.geeksforgeeks.org/problems/largest-subarray-with-0-sum/1

// T.C=O(N)
// S.C=O(N)

class Solution{
    public:
    int maxLen(vector<int>&A, int n)
    {   
        // Your code here
        unordered_map<int,int>mp;
        int maxi=0;
        int s=0;
        for(int i=0; i<n; i++)
        {
                s+=A[i];
                if(s==0)
                    maxi = i+1;
                    
                else
                {
                    if(mp.find(s) != mp.end())
                    maxi=max(maxi, i-mp[s]);
                    
                    else
                    mp[s]=i;
                }
            
        }
        return maxi;
    }
};