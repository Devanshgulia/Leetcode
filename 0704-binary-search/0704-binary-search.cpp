class Solution {
public:
    int search(vector<int>& nums, int target) {
        int st=0,end=nums.size()-1;
        if (nums.size()==1 && nums[0]==target)return 0;
        while (st<=end)
        {
            int mid=st+(end-st)/2;
            if (nums[mid]==target) return mid;
            else if (nums[mid]>target)
            {
                end=mid-1;
            }
            else if (nums[mid]<target)
            {
                st=mid+1;
            }
        }
        return -1;
    }
};