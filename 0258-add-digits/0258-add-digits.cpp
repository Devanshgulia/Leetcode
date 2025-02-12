class Solution {
public:
    int addDigits(int num) {
        int sum=0,r=0;
        if (num<10) return num;
        else
        {
            while (num>0)
            {
                r=num%10;
                sum+=r;
                num/=10;
            }
            return addDigits(sum);
        }
    }
};