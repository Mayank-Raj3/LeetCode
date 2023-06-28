class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n = nums.size();
        int i = 0  , j = 0 ;
        while (i < n) {
            if ( nums[i] != val) { // ignoring elemnts that are equal to val
                nums[j] = nums[i]; //shifting the elemenet
                j++;

            }
            i++;
        }
        return j ;

    }
};