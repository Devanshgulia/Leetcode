class Solution {
public:
    string digitSum(string s, int k) {

        if (s.length() <= k) return s;

        string temp ="";
        for(int i=0; i < s.size(); i+=k){
            int sum = 0;
            for(int j=i; j<k+i && j<s.size(); j++){
                sum+=s[j]-'0';
            }
            temp+=to_string(sum);
        }
        return digitSum(temp,k);
        
    }
};