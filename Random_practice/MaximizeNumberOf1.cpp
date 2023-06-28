//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;
/*
	Two pointer Sliding Window

	ham pura m tak lelenge jabtak 1 ya 0 mil rha and m > 0 ha

	fir jaise m exhaust ho jayega ham
	left pointer move karne lgenge jabtak m firse m nhi ho jata


*/

// } Driver Code Ends
class Solution {
public:
	// m is maximum of number zeroes allowed to flip
	// n is size of array
	int findZeroes(int arr[], int n, int m) {
		int ans = INT_MIN;
		int cnt0 = 0;
		int left = 0;
		int j = 0;
		while (j < n && left < n) {
			if ((arr[j] == 1 || cnt0 < m)) {
				if (arr[j] == 0) cnt0++;
				ans = max(ans, j - left + 1);
				j++;
			}
			else if (cnt0 >= m) {
				if (arr[left] == 0)
					cnt0--;
				left++;
			}
		}
		return ans;
	}
};

//{ Driver Code Starts.

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n, i, m;
		cin >> n;
		int arr[n];
		for (i = 0; i < n; i++) {
			cin >> arr[i];
		}
		cin >> m;
		Solution ob;
		auto ans = ob.findZeroes(arr, n, m);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends


