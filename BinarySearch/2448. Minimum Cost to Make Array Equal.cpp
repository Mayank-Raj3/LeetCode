class Solution {
public:
    long long minCost(vector<int>& nums, vector<int>& cost) {
        long long lo = 1 , hi = 1e7, ans = 0 ;
        int n =  nums.size();
        auto check = [&](long long mid) {
            long long temp = 0 ;
            for (int i = 0 ; i < n; i++) {
                temp += (abs(mid - nums[i] * 1LL) * cost[i] * 1LL);
            }
            return temp;
        };

        while (lo <= hi) {
            long long  mid = (lo + hi) / 2;
            if (check(mid) < check(mid + 1)) {
                ans = check(mid) ;
                hi = mid - 1 ;
            } else {
                lo = mid + 1;
            }
        }
        return ans ;
    }
};