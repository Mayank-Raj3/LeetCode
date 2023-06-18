//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
public:
    int lenOfLongSubarr(int a[],  int n, int k)
    {
        /*
        This will only work when we have positives only

        long long  left = 0, ans = 0  , sum = 0;
        for(long long  i =0 ; i< n ; i++){
            sum+=arr[i];
            while(left <= i && sum>k){
                sum-=arr[left];
                left++;
            }
            if(sum == k){
                ans = max(ans , (i-left+1));
            }
        }
        */
        map<int, int> preSumMap;
        int sum = 0;
        int maxLen = 0;
        for (int i = 0; i < n; i++) {
            //calculate the prefix sum till index i:
            sum += a[i];
            // if the sum = k, update the maxLen:
            if (sum == k) {
                maxLen = max(maxLen, i + 1);
            }
            // calculate the sum of remaining part i.e. x-k:
            int rem = sum - k;
            //Calculate the length and update maxLen:
            if (preSumMap.find(rem) != preSumMap.end()) {
                // ye isliye checkk  kar rhe kyuki hame max chiye tho
                // agr phle aa rkha ha tho length kyu kam karna ha agr vapise aata  ha
                int len = i - preSumMap[rem];
                maxLen = max(maxLen, len);
            }
            //Finally, update the map checking the conditions:
            if (preSumMap.find(sum) == preSumMap.end()) {
                preSumMap[sum] = i;
            }
        }
        return maxLen;
    }
};
//{ Driver Code Starts.

int main() {
    //code

    int t; cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int a[n];

        for (int i = 0; i < n; i++)
            cin >> a[i];
        Solution ob;
        cout << ob.lenOfLongSubarr(a, n , k) << endl;

    }

    return 0;
}
// } Driver Code Ends