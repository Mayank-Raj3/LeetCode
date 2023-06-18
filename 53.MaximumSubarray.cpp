class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int ans = -1e9, curr = 0;
        for (int i : nums) {
            // agr sab negative hoga tho ans hoga min neg vala
            // isliye kandane work kar rha ha
            curr += i;
            ans = max(ans, curr);
            if (curr < 0) curr = 0;
        }
        return ans;
    }
};