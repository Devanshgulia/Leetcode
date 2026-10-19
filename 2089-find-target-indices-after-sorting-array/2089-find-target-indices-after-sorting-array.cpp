class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        int less=0,large=0;

        for(int i : nums){
            if(i < target){
                less++;
            }
            else if(i > target){
                large++;
            }
        }

        vector<int> ans;
        for(int i=0; i < nums.size()-less-large; i++){
            ans.push_back(i+less);
        }

        return ans;

    }
};