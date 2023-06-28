class Solution {
public:
    int missingNumber(vector<int>& A) {
        int sum = 0 ;
        int N = A.size();
        for (auto it : A) {
            sum += it;
        }

        long long tot = (N * (N + 1)) / 2;
        return tot - sum;
    }
};