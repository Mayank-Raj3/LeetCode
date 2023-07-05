class Solution {
public:
    int maximumGroups(vector<int>& grades) {
        long long n = grades.size();
        long long lo = 1, hi = n ;
        auto check = [&](int mid) {
            return (( mid * (mid + 1LL)) / 2) <= n;
            // aeesa isliye possible ha kyuki
            // 11111 hoga agr tho
            // 1 then 2 grp  then 3 grp so worst case me n*n+1 / 2
        };
        long long  ans = 0 ;
        while (lo <= hi) {
            long long mid = lo + (hi - lo) / 2;
            if (check(mid)) {
                ans = mid;
                lo = mid + 1;
            } else {
                hi = mid - 1;
            }
        }
        return ans ;
    }
};

/*
class Solution {
public:
    int maximumGroups(vector<int>& grades) {


        sort(grades.begin(),grades.end());
        int n=grades.size();
        int ans=0;
        int sum=0,prev=0,prevcnt=0,cnt=0;

        for(int i=0;i<n;i++)
        {
             if(sum+grades[i]>prev && cnt+1>prevcnt)
             {
                  prev=sum+grades[i];
                  prevcnt=cnt+1;
                  sum=0;
                  cnt=0;
                  ans++;
             }
             else
             {
                 sum+=grades[i];
                 cnt++;
             }

        }
        if(sum>prev && cnt>prevcnt)
        ans++;
        return ans;

    }
};
*/