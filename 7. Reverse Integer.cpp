class Solution {
public:
    int reverse(int x) {
        long  res = 0 ;
        while (x) {
            res = (res * 10) + x % 10;
            x /= 10;
        }
        if (res > -INT_MAX && res < INT_MAX)
            return res;
        return 0;
    }
};