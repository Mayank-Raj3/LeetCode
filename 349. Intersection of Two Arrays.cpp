class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(), nums1.end()); sort(nums2.begin(), nums2.end());
        vector<int> ans;
        int i = 0 , j = 0;
        while (i < nums1.size() && j < nums2.size()) { // jo chota ha usko move karo kyuki bada ha tho dusre array mea nhi he milega vo( i mea in this case)
            if (nums1[i] == nums2[j]) {
                ans.push_back(nums1[i]);
                i++;
                j++;
            }
            else  if (nums1[i] < nums2[j]) {
                i++;
            }
            else  {
                j++;
            }
        }
        ans.erase(unique(ans.begin(), ans.end()), ans.end());

        return ans;
    }

};