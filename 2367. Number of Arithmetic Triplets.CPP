// 0 indexed  nums increasing order & a + diff
//  i , j k == arithematic triplet
//  if i< j < k nums[j]-nums[i] == nums[k]-nums [j]==diff

// 0 1 4 6 7 10  diff == 3
/*
// Brutforce approach ;
class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
// its a O(n^3) solution using three loops we can optimize  to O(n) using two pointers
        int n = nums.size();
        int cnt = 0  ;
        for(int i=0;i<n-2;i++)
        {
            for(int j=i+1;j<n-1;j++)
            {
                for(int k=j+1;k<n;k++)
                {
                    if((nums[j]-nums[i]==diff && nums[k]-nums[j]==diff))
                    {
                        cnt++;
                    }
                }
            }
        }
        return cnt;


    }
};
*/


