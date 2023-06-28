class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size();
        int cnt = 0;
        for (int i = 1; i < n; i++) {
            if (nums[i - 1] > nums[i]) {
                cnt++;
            }
        }
        if (nums[n - 1] > nums[0]) {
            cnt++;
        }
        return cnt <= 1;
    }
};

//idea ye ha ki agr rotated bhi ha aur soted tha tho ik he peck ya valley hoga

/*
   /\
  /  \
 /    \
/      \
*/

class Solution {
public:
    bool arraySortedOrNot(int arr[], int n) {
        for (int i = 1 ; i < n; i ++) {
            if (arr[i] < arr[i - 1]) {
                return false ;
            }
        }
        return true;
    }
};