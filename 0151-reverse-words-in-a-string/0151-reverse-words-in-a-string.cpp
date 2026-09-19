class Solution {
public:
    void rev(string& s,int start, int end){

        while (start < end) {
            swap(s[start], s[end]);
            start++;
            end--;
        }
    }

    void remSpace(string &s) {

        int i = 0;
        int j = 0;
        int n = s.size();

        while (i < n && s[i] == ' ')
            i++;

        while (i < n) {

            // Copy one word
            while (i < n && s[i] != ' ') {
                s[j++] = s[i++];
            }

            // Skip spaces
            while (i < n && s[i] == ' ') {
                i++;
            }

            // If another word exists,
            // write ONE space.
            if (i < n) {
                s[j++] = ' ';
            }
        }
        s.resize(j);
    }

    string reverseWords(string s) {
        int st=0;
        int end=0;

        remSpace(s);
        reverse(s.begin(),s.end());
        int n=s.size();
        
        for(int i=0;i<n;i++){
            while(s[st]== ' '){
                st++;
            }
            if(s[st]!=' '){
                end++;
            }
            if(s[end] == ' ' || end == n){
                rev(s,st,end-1);
                st = end+1;
                
            }
            
        }
        return s;
    }
};