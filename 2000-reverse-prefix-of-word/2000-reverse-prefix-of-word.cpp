class Solution {
public:
    string reversePrefix(string word, char ch) {
        string ans;
        int n=-1;
        for (int i=0;i<word.length();i++)
        {
            if (word[i]==ch)
            {
                for (int j=i;j>=0;j--)
                {
                    ans+=word[j];
                }
                n=i;
                break;
            }

        }
        for (int i=n+1;i<word.length();i++)
        {
            ans+=word[i];
        }
        return ans;
    }
};