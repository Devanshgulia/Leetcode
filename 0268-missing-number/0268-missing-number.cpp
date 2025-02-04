class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        for (int i=0;i<n;i++)
        {
            if (nums[i]!=i)
            {
                return nums[i]-1;
            }
        }
        // if (nums[0]!=1)
        // {
        //     return 0;
        // }
        // else if (n==1 && nums[0]==0)
        // {
        //     return 1;
        // }
        // for (int i=0;i<n-1;i++)
        // {
        //     if (nums[i+1]-nums[i]!=1 && n>1 && nums[0])
        //     {
        //         return nums[i+1]-1;
        //     }
            
        // }
        return n;
    }
};