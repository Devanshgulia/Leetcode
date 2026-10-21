class Solution {
public:
    int maxVowels(string s, int k) {
        int st = 0;
        int end = k;
        int n = s.size();
        int count = 0;
        

        for(int i = 0; i<k; i++){
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'){
                count ++;
            }
        }
        
        int ans = count;

        while(end<n){
            if(s[end] == 'a' || s[end] == 'e' || s[end] == 'i' || s[end] == 'o' || s[end] == 'u'){
                count ++;
            }
            if(s[st] == 'a' || s[st] == 'e' || s[st] == 'i' || s[st] == 'o' || s[st] == 'u'){
                count--; 
            }
            st++;
            end++;
            ans = max(ans, count);
            
        }
        return ans;
    }
};