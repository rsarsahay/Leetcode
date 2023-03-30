// https://leetcode.com/problems/longest-substring-without-repeating-characters/

// T.C= O(2n)
// S.C= O(n)

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        unordered_map<char,int> m;
        int i=0,j=0,ans=0;
        while(j<s.size())
        {
            char a=s[j];
            m[a]++;//including char a in window
            while(m[a]>1)//checking if a is already present or not!
            {
                char d=s[i];
                i++; //incrementing left of window
                m[d]--; 
            }  
            j++;// increment right of window till right<s.size();
            ans=max(ans,j-i);
        }
        return ans;
    }
};
