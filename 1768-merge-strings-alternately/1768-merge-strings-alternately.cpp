class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string ans;
        int w1=word1.length();
        int w2=word2.length();
        int n=0, m=0;
        if (w1<=w2)
        {
            n=w1;
            m=w2;
        }
        else if(w2<w1)
        {
            n=w2;
            m=w1;
        }
        int temp=0;
        for (int i=0;i<n;i++)
        {
            ans=ans+word1[i]+word2[i];
            temp=i;
        }
        temp++;
        for(int i=temp;i<m;i++){
            if (w1<=w2){
                ans=ans+word2[i];
            }
            else if (w2<=w1){
                ans=ans+word1[i];
            }
        }
        return ans;
    }
    
};