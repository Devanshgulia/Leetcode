class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        queue<pair<int,int>> q;
        int count = 0;
        for (int i = 0; i < tickets.size(); i++)
            q.push({tickets[i], i});
        while (!q.empty()) {
            auto [t, idx] = q.front();
            q.pop();

            t--;
            count++;

            if (t == 0) {
               if (idx == k)
                   return count;
            } else {
               q.push({t, idx});
            }
        }
        return count;
    }
};