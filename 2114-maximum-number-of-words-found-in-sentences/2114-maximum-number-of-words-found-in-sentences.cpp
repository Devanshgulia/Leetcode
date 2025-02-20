class Solution {
public:
    int mostWordsFound(vector<string>& A) {
        int ans=0;
        for (int i=0;i<A.size();i++)
        {
            int count=0;
            for (int j=0;j<A[i].length();j++)
            {
                if (A[i][j]==' ')
                {
                    count ++;
                }
            }
            ans=max(ans,count);
        }
        return ans+1;
    }
};