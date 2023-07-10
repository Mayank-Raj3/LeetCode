class Solution {
public:
    int minDays(vector<int>& arr, int m, int k) {
        int n = arr.size();
        auto check = [&](int ug_gaya ) {
            int made = 0, flower = 0;
            for (int i = 0; i < n; i++) {
                if (arr[i] <= ug_gaya)
                    flower++ ;
                else
                    flower = 0;
                if (flower == k) made++, flower = 0;
            }
            return made >= m ;
        };

        int lo = 0 , hi = 1e9 , ans = -1 ;
        while (lo <= hi) {
            int mid = (lo + hi) / 2;
            if (check(mid)) {
                ans = mid ;
                hi = mid - 1 ;
            } else {
                lo = mid + 1 ;
            }
        }
        return ans;
    }
};


int cnt = 0;

for (int j = 0; j < bloomDay.size(); j++) {
    int t = k;
    bool f = true;
    while (t--) {
        if (j < bloomDay.size() && bloomDay[j] > mid) {
            f = false;
            break;
        }
        j++;
    }

    if (f) {
        cnt += 1;
    }
}
if (cnt < m) return false;

return true;



