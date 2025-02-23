class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& arr) {
        int rightSum=0,midSum=0;
        int totalSum=0,leftSum=0;
        for (int i=0;i<arr.size();i++)
        {
            totalSum+=arr[i];
        }
        if (totalSum % 3!=0) return false;
        for (int i=0;i<arr.size()-2;i++)
        {
            leftSum+=arr[i];
            midSum=0;
            for (int j=i+1;j<arr.size()-1;j++)
            {
                midSum+=arr[j];
                rightSum=totalSum-leftSum-midSum;
                if (leftSum==midSum && leftSum==rightSum)
                {
                    return true;
                }
            }
        }
        return false;
    }
};