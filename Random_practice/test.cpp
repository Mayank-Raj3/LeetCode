#include<bits/stdc++.h>
using namespace std;
int arithmeticTriplets(vector<int>& nums, int diff) {
	int n = nums.size();
	int cnt = 0 ;
	for (int i = 0 ; i < n ; i++ ) {
		if (binary_search(nums.begin(), nums.end() , (diff + nums[i]))) {
			if (binary_search(nums.begin(), nums.end() , (diff + diff + nums[i])))
				cnt++;
		}
	}

	return cnt;

}
int main() {
	vector<int> ar = {1, 2, 3};
	vector<int> ar2 = {1, 1};


	cout << findContentChildren(ar, ar2);

}