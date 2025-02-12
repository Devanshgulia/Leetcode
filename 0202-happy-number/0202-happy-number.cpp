class Solution {
public:
    bool isHappy(int n) {
        int sum=0,r=0;
        if (n==1 || n==7) return true;
        else if (n<10) return false;
        else
        {
            while(n>0)
            {
                r=n%10;
                sum=sum+(r*r);
                n/=10;
            }
            return isHappy(sum);
        }
    }
};