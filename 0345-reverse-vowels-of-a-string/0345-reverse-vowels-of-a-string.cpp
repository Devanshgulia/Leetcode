class Solution {
public:
    bool isVowel(char ch){
        char temp=tolower(ch);
        if (temp=='a' || temp=='e' || temp=='i' || temp=='o' || temp=='u'){
            return true;
        }
        return false;
    }
    
    string reverseVowels(string s) {
        int st=0;
        int end=s.length()-1;
        while(st<end){
            if (!isVowel(s[st])){
                st++;
                continue;
            }
            if (!isVowel(s[end])){
                end--;
                continue;
            }
            swap(s[st],s[end]);
            st++;
            end--;
        }
        return s;
    }
};