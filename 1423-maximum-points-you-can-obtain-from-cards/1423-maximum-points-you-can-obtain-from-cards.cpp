
class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n = cardPoints.size();
        int start = 0;
        int end = n - k;
        int total = 0;
        int sum = 0;

        for (int x : cardPoints) {
            total += x;
        }
        if (end == 0) {
            return total;
        }

        for (int i = 0; i < end; i++) {
            sum += cardPoints[i];
        }
        int minSum = sum;

        while(end < n) {
            end++;
            sum += cardPoints[end-1];
            start++;
            sum -= cardPoints[start-1];

            minSum = min(minSum, sum);
        }

        return total - minSum;
    }
};
