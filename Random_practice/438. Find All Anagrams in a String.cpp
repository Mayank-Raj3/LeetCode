class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> arr(26), temp(26);

        int n = s.size() , m = p.size();
        for (auto it : p) {
            arr[it - 'a']++;
        }
        auto anagram = [&]() {
            for (int i = 0; i < 26; i++) {
                if (arr[i] != temp[i])
                    return false;
            }
            return true;
        };
        int left = 0 ;
        vector<int> ans;
        for (int i = 0 ; i < n ; i++) {
            temp[s[i] - 'a']++;
            if (i - left + 1 == m && anagram()) {
                ans.push_back(left);
            }
            if (i - left + 1 >= p.size()) {
                temp[s[left] - 'a']--;
                left++;
            }
        }
        return ans ;
    }
};