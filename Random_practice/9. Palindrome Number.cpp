class Solution {
public:
    bool isPalindrome(int x) {
        long res = 0 , temp = x ;
        if (x < 0) return false;
        while (temp) {
            res = res * 10 + temp % 10;
            temp /= 10;
        }
        return x == res;

    }
};