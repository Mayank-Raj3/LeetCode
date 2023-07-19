class Solution {
public:
	int longestNiceSubarray(vector<int>& arr) {
		int n = arr.size();
		vector<int> bits(32);
		int ans = 1 , left = 0, right = 0  ;
		while (right < n) {
			for (int i = 0 ; i < 32 ; i++) {
				if (( 1 << i) & arr[right]) {
					bits[i]++;
				}
			}
			auto andO = [&]() {
				for (int i = 0 ; i < 32 ; i ++) {
					if (bits[i] > 1) {
						return true;
					}
				}
				return false ;
			};
			while (left < right && andO()) {
				for (int i = 0 ; i < 32 ; i ++) {
					if ((1 << i)&arr[left]) {
						bits[i]--;
					}
				}
				left++;
			}
			ans = max(ans , right - left  + 1);
			right++;
		}
		return ans ;
	}
};

/*
	Idea: -
	1. two pointer good sub array
	2. bit calculate kar lo  and 0 tab tak he rhega jab tak bit array me
	sab 1 ha
	3. agr khi 0 ho gya then and will become zero
	4. then we need to shrink our window
*/