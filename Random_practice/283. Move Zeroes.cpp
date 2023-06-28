class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int zero = 0 ;
        for (auto it : nums )
            if (it == 0) zero++; //counting number of zeros

        int i = 0 , j = 0 ;
        while (i < n) {
            if (nums[i] != 0) { // zero nhi ha tho tho jth index pe shift nums[i] and j++;
                nums[j] = nums[i];
                j++;
            }
            i++;
        }
        while (j < n && zero > 0) {
            nums[j] = 0;
            j++; zero--; // last mea bache hue zero add kardo
        }


    }
};