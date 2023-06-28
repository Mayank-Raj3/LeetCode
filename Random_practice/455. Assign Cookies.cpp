class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {

        sort(g.begin(), g.end() , greater<int>());
        sort(s.begin(), s.end() , greater<int>());
        int i = 0 , j = 0 , cnt = 0;
        while (i < g.size() && j < s.size()) {
            if (s[j] >= g[i]) {cnt++; i++, j++;}
            else {
                i++;
            }
        }
        return cnt;
    }
};