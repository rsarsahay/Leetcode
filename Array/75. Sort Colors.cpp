// Sort an array of 0s, 1s and 2s.

// Intuition: 
// In this approach, we will be using 3 pointers named left, mid, and right.
// We will be using these 3 pointers to move around the values.
// The primary goal here is to move 0s to the left and 2s to the right of the array 
// and at the same time all the 1s shall be in the middle region of the array 
// and hence the array will be sorted.

//T.C = O(n)
//S.C = O(1)

class Solution 
{
public:
    void sortColors(vector<int>& nums) 
    {
        int left=0;
        int mid=0;
        int right=nums.size()-1;
           while(mid<=right)
           {
               switch(nums[mid])
               {
                   case 0:
                       swap(nums[left++],nums[mid++]);
                       break;
                       
                   case 1:
                       mid++;
                       break;
                       
                   case 2:
                       swap(nums[mid],nums[right--]);
                       break;
               }
           }
    }
};