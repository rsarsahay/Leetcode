// https://leetcode.com/problems/merge-sorted-array/

/*Intuition:

We can think of Iterating in nums1 and whenever we encounter 
an element that is greater than the first element of nums2, 
just swap it. Now rearrange the arr2 in a sorted manner, after 
completion of the loop we will get elements of both the arrays in sorted order.*/

/*Approach
Use a while loop to check i<m && j<n.
Whenever we get any element in nums1 which is greater than the first element of nums2,swap it.
Sort nums2.
Repeat the process. */

//Time complexity: O(n*m)
//Space complexity: O(1)

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) 
    {
    int i=0,j=0;

       if(n==0)
       return;
           
        while(i<m && j<n)
        {
            if(nums1[i]>nums2[j])
            swap(nums1[i],nums2[j]);

            sort(nums2.begin(),nums2.end());
            i++;
        }

        while(i<(m+n))
        nums1[i++]=nums2[j++];
      }
};