class Solution {
public:

    vector<int> findBall(vector<vector<int>>& grid) {
        int n = grid.size(), m = grid[0].size();
        vector<int> ans(m);
        function<int(int, int)> dfs = [&](int row , int col) {
            if (row == n) return col;
            if (grid[row][col] == 1 && col + 1 < m && grid[row][col + 1] == 1) {
                return dfs(row + 1, col + 1);
            }
            if (grid[row][col] == -1 && col - 1 >= 0 && grid[row][col - 1] == -1) {
                return dfs(row + 1, col - 1);
            }
            return -1;
        };
        for (int i = 0; i < m; i++) {
            ans[i] = dfs(0, i);
        }
        return ans;
    }
}; \