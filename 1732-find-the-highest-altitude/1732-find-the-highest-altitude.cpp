class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int maxAlt=0;
        int temp=0;
        for (int i=0;i<gain.size();i++){
            temp+=gain[i];
            maxAlt=max(temp,maxAlt);
        }
        return maxAlt;
    }
};