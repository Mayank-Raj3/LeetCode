class Solution {
public:
	vector<int> productExceptSelf(vector<int>& nums) {
		int n = nums.size();
		vector<int> ans , pref(n + 2, 1), suff(n + 2, 1);
		pref[1] = nums[0];
		for (long long  i = 2 ; i < n + 1 ; i++) {
			pref[i] = nums[i - 1] * pref[i - 1] ;
		}
		suff[n] = nums[n - 1];
		for (int i = n - 1 ;  i >= 1 ; i--) {
			suff[i] = nums[i - 1] * suff[i + 1] ;
		}
		for (long long  i = 1; i < n + 1 ; i++) {
			ans.push_back(pref[i - 1] * suff[i + 1]);
		}
		return ans ;
	}
};