class Solution {
public:
    using ll = long long;
    static constexpr ll MOD = 1000000007LL;

    struct Node {
        ll sumD = 0;
        ll sumD2 = 0;
        ll lazy = 0;
    };

    vector<Node> seg;
    int n;

    void apply(int node, int l, int r, ll val) {
        ll len = r - l + 1;

        // Update sum of squared distinct counts.
        seg[node].sumD2 =
            (seg[node].sumD2
             + 2LL * val % MOD * seg[node].sumD % MOD
             + len % MOD * val % MOD * val % MOD) % MOD;

        // Update sum of distinct counts.
        seg[node].sumD =
            (seg[node].sumD + len % MOD * val % MOD) % MOD;

        seg[node].lazy = (seg[node].lazy + val) % MOD;
    }

    void push(int node, int l, int r) {
        if (seg[node].lazy == 0 || l == r)
            return;

        int mid = l + (r - l) / 2;
        ll val = seg[node].lazy;

        apply(node * 2, l, mid, val);
        apply(node * 2 + 1, mid + 1, r, val);

        seg[node].lazy = 0;
    }

    void update(int node, int l, int r, int ql, int qr) {
        if (qr < l || r < ql)
            return;

        if (ql <= l && r <= qr) {
            apply(node, l, r, 1);
            return;
        }

        push(node, l, r);

        int mid = l + (r - l) / 2;

        update(node * 2, l, mid, ql, qr);
        update(node * 2 + 1, mid + 1, r, ql, qr);

        seg[node].sumD =
            (seg[node * 2].sumD + seg[node * 2 + 1].sumD) % MOD;

        seg[node].sumD2 =
            (seg[node * 2].sumD2 + seg[node * 2 + 1].sumD2) % MOD;
    }

    ll query(int node, int l, int r, int ql, int qr) {
        if (qr < l || r < ql)
            return 0;

        if (ql <= l && r <= qr)
            return seg[node].sumD2;

        push(node, l, r);

        int mid = l + (r - l) / 2;

        return (
            query(node * 2, l, mid, ql, qr)
            + query(node * 2 + 1, mid + 1, r, ql, qr)
        ) % MOD;
    }

    int sumCounts(vector<int>& nums) {
        n = nums.size();

        seg.assign(4 * n + 5, Node());

        unordered_map<int, int> last;
        ll ans = 0;

        for (int r = 0; r < n; r++) {
            int prev = -1;

            if (last.count(nums[r])) {
                prev = last[nums[r]];
            }

            // Increase distinct counts for affected subarrays.
            update(1, 0, n - 1, prev + 1, r);

            // Sum squared distinct counts of all subarrays
            // ending at index r.
            ans = (ans + query(1, 0, n - 1, 0, r)) % MOD;

            last[nums[r]] = r;
        }

        return static_cast<int>(ans);
    }
};