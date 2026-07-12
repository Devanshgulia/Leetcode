class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n1=nums1.size();
        int n2=nums2.size();
        vector<int> ans1(n2);
        stack<int> s;

        s.push(nums2[n2-1]);
        ans1[n2-1]=-1;

        for(int i=n2-1;i>=0;i--){
            int curr = nums2[i];
            while(!s.empty() && s.top()<=curr){
                s.pop();
            }
            if(s.empty()){
                ans1[i] = -1;
            }
            else{
                ans1[i]= s.top();
            }
            s.push(curr);
        }

        vector<int> ans2;
        for(int i=0;i<n1;i++){
            for(int j=0;j<n2;j++){
                if(nums1[i]==nums2[j]){
                    ans2.push_back(ans1[j]);
                    break;
                }
            }
        }

        return ans2;
    }

    
};