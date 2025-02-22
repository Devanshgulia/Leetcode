class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int leftSum=0,rightSum=0,totalSum=0;
        for (int i=0;i<nums.size();i++)
        {
            totalSum+=nums[i];
        }
        for (int i=0;i<nums.size();i++)
        {
            rightSum=totalSum-leftSum-nums[i];
            if (rightSum==leftSum) return i;
            leftSum+=nums[i];
        }
        return -1;   
    }
};