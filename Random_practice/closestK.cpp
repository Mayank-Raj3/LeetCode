class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        auto cmp = [&](int a , int b ) {
            if (abs(a - x) < abs(b - x) ) return true;
            if (abs(a - x) == abs(b - x) && a < b ) return true;
            return false;
        };
        sort(arr.begin(), arr.end(), cmp);
        vector<int> ans ;
        for (int i = 0 ; i < k ; i++) {
            ans.push_back(arr[i]);
        }
        sort(ans.begin(), ans.end());

        return ans ;
    }
};