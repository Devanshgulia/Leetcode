class Solution {
public:
    int compress(vector<char>& chars) {
        
        chars.push_back('~');
        string s ="";
        int n = chars.size();
        int count = 0;

        for(int i=0; i < n-1; i++){

            if(chars[i+1] != chars[i]){
                count ++;
                if(count != 1){
                    s = s+chars[i] + to_string(count);
                    count = 0;
                }
                else{
                    s+=chars[i];
                    count = 0;
                }
            }
            else{
                count ++;
            }
        }

        for(int i=0;i<s.size();i++){
            chars[i] = s[i];
        }
        return s.size();
    }
};