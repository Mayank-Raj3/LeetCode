class Solution {
public:
    bool valid(string &s, int low, int high, int cnt) {
        if (high - low == 0) {
            return true;
        }
        while (low < high) {
            if (s[low] == s[high]) {
                low++;
                high--;
            }
            else if (cnt == 0) {
//main point which index to reduce or increase
                return valid(s, low + 1, high, cnt + 1) or valid(s, low, high - 1, cnt + 1);
            }
            else {
                return false;
            }
        }
        return true;
    }
    bool validPalindrome(string s) {
        string m = s ;
        reverse(m.begin(), m.end());
        if (s == m) {
            return true;
        }
        else {
            int low = 0, high = s.length() - 1 , cnt = 0;
            return valid(s, low, high, cnt);

        }

    }
};