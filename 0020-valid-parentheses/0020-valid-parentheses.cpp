class Solution {
public:
    bool isValid(string str) { //o(n)
        stack<char> s;
        int n= str.size();
        for (int i = 0 ; i<n ; i++){

            if (str[i] == '{' || str[i] == '(' || str[i] == '['){
                s.push(str[i]);
            }
            else{

                // insufficient opening bracket case
                if (s.empty()){ 
                    return false; 
                }

                if((str[i] == ')' && s.top() == '(') || (str[i] == '}' && s.top() == '{') || (str[i] == ']' && s.top() == '[')){
                s.pop();
                }

                else{
                    return false;
                }
            }   
        }
        return s.empty(); //closing is covered
    }
};