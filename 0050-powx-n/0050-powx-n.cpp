class Solution {
public:
    double myPow(double x, int n) {
        long bF=n;
        if (n<0)
        {
            bF=-bF;
            x=1/x;
        }
        double ans=1;
        while (bF>0)
        {
            if (bF%2==1)
            {
                ans=ans*x;
            }
            x*=x;
            bF/=2;
        }
        return ans;
    }
};