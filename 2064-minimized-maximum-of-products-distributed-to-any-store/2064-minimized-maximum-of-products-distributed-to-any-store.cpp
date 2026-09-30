class Solution {
public:
    bool canDistribute(int n,int x, vector<int>& quantities){
        int stores =0;
        for(int q : quantities){
            stores+=(q+x-1)/x;
            if(stores > n)return false;
        }
        return stores<=n;
    }
    int minimizedMaximum(int n, vector<int>& quantities) {
        int m = quantities.size();
        int low = 1,high = *max_element(quantities.begin(), quantities.end());
        int ans = high;
        while(low <= high){
            int mid =((high-low)/2) +low;

            if(canDistribute(n,mid, quantities)){
                ans = mid;
                high = mid -1;
            }
            else{
                low = mid + 1;
            }
        }
        return ans;
    }
};