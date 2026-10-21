class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int st = 0;
        int end = k;
        int n = blocks.size();
        int count = 0;
        

        for(int i = 0; i<k; i++){
            if(blocks[i] == 'W'){
                count ++;
            }
        }
        
        int ans = count;

        while(end<n){
            if(blocks[end] == 'W'){
                count ++;
            }
            
            if(blocks[st] == 'W'){
                count--;
                
            }
            st++;
            end++;
            ans = min(ans, count);
            
        }
        return ans;
    }
};