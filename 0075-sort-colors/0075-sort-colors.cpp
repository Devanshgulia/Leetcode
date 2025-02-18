class Solution {
public:
    void sortColors(vector<int>& nums) {
        int z=0,o=0,t=0;
        for (int n:nums)
        {
            if (n==0) z++;
            else if (n==1) o++;
            else if (n==2) t++;
        }
        int j=0;
        for (j;j<z;j++)
        {
            nums[j]=0;
        }
        j=z;
        for (j;j<o+z;j++)
        {
            nums[j]=1;
        }
        j=o+z;
        for (j;j<t+o+z;j++)
        {
            nums[j]=2;
        }
    }
};