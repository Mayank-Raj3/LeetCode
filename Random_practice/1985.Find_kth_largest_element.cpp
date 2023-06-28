class Solution {
public:
    string kthLargestNumber(vector<string>& nums, int k) {
        auto cmp = [&](string a , string b ) {
            if (a.size() == b.size()) {
                return a > b;
            }
            else {
                return a.size() > b.size();
            }
        };
        sort(nums.begin(), nums.end(), cmp);

        return (nums[k - 1]);
    }
};


//appch 2

class cmp
{
public:
    bool operator()(string &a, string &b)
    {
        if (a.size() == b.size())
            return a < b;
        else
            return a.size() < b.size();
    }
};

class Solution {
public:
    string kthLargestNumber(vector<string>& nums, int k) {


        priority_queue<string, vector<string>, cmp>pq(nums.begin(), nums.end());
        while (k > 1)
        {
            pq.pop();
            k--;
        }

        return pq.top();

    }
};