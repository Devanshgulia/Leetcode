class StockSpanner {
    stack<pair<int,int>> s;
    int day;

public:
    StockSpanner() {
        day=0;
    }

    int next(int price) {
        int span = 1;

        while (!s.empty() && s.top().first <= price) {
            s.pop();
        }
        if (s.empty()) {
            span = day + 1;
        } else {
            int prevhigh = s.top().second;
            span = day-prevhigh;
        }
        s.push({price,day++});
        return span;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */