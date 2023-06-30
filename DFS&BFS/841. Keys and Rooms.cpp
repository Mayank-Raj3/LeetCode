class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n = rooms.size();
        vector<int> vis(n);
        function<void(int)> dfs = [&](int ind) {
            vis[ind] = 1;
            for (auto it : rooms[ind]) {
                if (!vis[it])
                    dfs(it);
            }
        };
        dfs(0);
        int ans = 1 ;
        for (auto it  : vis) {
            ans &= it;
        }

        return ans;
    }
};