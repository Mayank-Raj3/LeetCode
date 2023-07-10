class Solution {
public:
    int minEatingSpeed(vector<int>& arr, int h) {
        long long  ans = 0 , lo = 1 , hi = 1e9 , n = arr.size();

        auto check = [&](long long  mid ) {
            long long  cnt = 0 ;
            for (long long  i = 0 ; i < n  ; i++) {
                cnt += ((arr[i] - 1 + mid) / mid);
            }
            return cnt <= h;
        };

        while (lo <= hi) {
            long long  mid = lo + (hi - lo) / 2;
            if (check(mid)) {
                ans = mid ;
                hi = mid - 1 ;
            } else {
                lo = mid + 1;
            }
        }
        return ans ;

    }
};