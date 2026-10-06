class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int n = arr.size();
        int low =0;
        int high = k;
        int sum = 0;
        int count = 0;

        for(int i=0;i<k; i++){
            sum+=arr[i];
        }
        if(sum/k >= threshold){
            count++;
        }
        
        while(high<n){
            sum-=arr[low++];
            sum+=arr[high++];
            if(sum/k >= threshold){
                count++;
            }
        }
        return count;

    }
};