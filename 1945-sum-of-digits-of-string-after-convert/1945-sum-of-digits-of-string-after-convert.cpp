class Solution {
public:
    int getLucky(string s, int k) {
        int num=0;
        for (char ch: s)
        {
            int n=ch-'a'+1;
            while (n>0)
            {
                num+=n%10;
                n/=10;
            }
        }
        int r=0,sum=0;
        while (k>1)
        {
            sum=0;
            while (num>0)
            {
                r=num%10;
                sum+=r;
                num/=10;
            }
            num=sum;
            k--;
        }
        return  num;
    }
};