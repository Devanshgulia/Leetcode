class Solution {
public:
    int minElement(vector<int>& nums) {
        int ans=INT_MAX;
        for (int i=0;i<nums.size();i++)
        {
            int temp=i,sum=0;
            while(nums[temp]>0)
            {
                sum+=nums[temp]%10;
                nums[temp]/=10;
            }
            nums[i]=sum;
            ans=min(ans,nums[i]);
        }
        return ans;
    }
};