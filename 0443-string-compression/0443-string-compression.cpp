class Solution {
public:
    int compress(vector<char>& chars) {

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
        cout << s << count <<  endl;
        count ++;
        if(count != 1){
            s = s+chars[n-1] + to_string(count);
            count = 0;
        }
        else{
            s+=chars[n-1];
            count = 0;
        }
        cout << s << count <<  endl;
        for(int i=0;i<s.size();i++){
            chars[i] = s[i];
        }
        return s.size();
    }
};