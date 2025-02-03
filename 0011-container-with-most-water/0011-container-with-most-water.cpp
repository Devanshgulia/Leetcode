class Solution {
public:
    int maxArea(vector<int>& height) {
        int rp=height.size()-1,lp=0,maxWater=0,w,h,area;
        while (lp<rp)
        {
            w=rp-lp;
            h=min(height[rp],height[lp]);
            area=h*w;
            maxWater=max(maxWater,area);
            height[lp]<height[rp]? lp++ : rp--;
        }
        return maxWater;
    }
};