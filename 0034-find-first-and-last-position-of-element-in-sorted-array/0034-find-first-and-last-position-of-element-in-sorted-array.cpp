class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int st=0,end=nums.size()-1;
        vector<int> ans(2,-1);
        while(st<=end)
        {
            int mid=st+(end-st)/2;
            if (nums[mid]>=target)
            {
                if (nums[mid]==target) ans[0]=mid;
                end=mid-1;
            }
            else
            {
                st=mid+1;
            }
        }
        st=0,end=nums.size()-1;
        while(st<=end)
        {
            int mid=st+(end-st)/2;
            if (nums[mid]<=target)
            {
                if (nums[mid]==target) ans[1]=mid;
                st=mid+1;
            }
            else
            {
                end=mid-1;
            }
        }
        return ans;
    }
};