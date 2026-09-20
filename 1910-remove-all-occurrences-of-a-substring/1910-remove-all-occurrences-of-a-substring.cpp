class Solution {
public:
    string removeOccurrences(string s, string part) {
        int n = s.size();
        int m = part.size();

        int idx = s.find(part);

        while (idx != string::npos) {
            s.erase(idx, m);
            idx = s.find(part);
        }
        return s;
    }
};