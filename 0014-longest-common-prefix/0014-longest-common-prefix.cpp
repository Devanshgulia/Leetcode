class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size();

        if (strs.empty() || strs[0].empty()) return "";

        string pre = ""; 
        stack<char> s;
        s.push(strs[0][0]);
        int idx = 0;
        size_t maxl = strs[0].size();

        for(int i=0;i<n;i++){
            maxl = min(maxl,strs[i].size());
        }

        for(int j=0;j<maxl;j++){
            s.push(strs[0][idx]);
            for(int i=1;i<n;i++){
               if(s.top() != strs[i][idx]){
                    return pre;
               }

            }
            pre+=s.top();
            idx++;
        }
        return pre;
        
    }
};