class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n=grid.size();
        vector<int> ans;
        int a,b;
        unordered_set<int> s;
        int fSum = 0, sum = 0;
        

        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                fSum+=grid[i][j];
                if(s.find(grid[i][j]) != s.end()){
                    a = grid[i][j];
                    ans.push_back(a);
                }
                s.insert(grid[i][j]);
                
            }

        }
        sum = (n*n * ((n*n)+1))/2;
        b = sum + a - fSum;
        ans.push_back(b);
        return ans;
    }
};