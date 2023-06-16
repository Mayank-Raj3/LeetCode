class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        // two pointer+ sliding window lgage

        long long  start = 0, result = 0, window_size = 0, window_sum = 0;
        for (int i = 0; i < nums.size(); i++) {
            window_sum += nums[i];
            window_size = i - start + 1;

            while (( nums[i]*window_size - window_sum ) > k) {
                // size reduce karega jaise he steps k se bade ho gye ho tho
                window_sum -= nums[start++];
                window_size--;
            }

            result = max(result, window_size);
        }
        return result;

    }
};

/*
https://leetcode.com/problems/frequency-of-the-most-frequent-element/description/

=>is swal me ham k operation lga k element ko +1 kar skte the
=>tho ham   idr two pointer lga k dekh lenge ki optimal kya hoga sort kakr e

jaise

(( nums[i]*window_size - window_sum )

exceed karega tho ham windo size ko ghta denge aur pointer move karenge start

jabtak size range me na aajaye

*/