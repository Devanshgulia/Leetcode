class Solution {
public:
    string removeOccurrences(string s, string part) {
        int n = s.size();
        int m = part.size();

        string ans = "";

        for (int i = 0; i < s.size(); i++) {

            // add current character to ans
            ans.push_back(s[i]);

            if (ans.size() >= m && ans.substr(ans.size() - m, m) == part) {
                // Remove the last m characters
                for (int i = 0; i < m; i++) {
                    ans.pop_back();
                }
            }
        }
        return ans;
    }
};