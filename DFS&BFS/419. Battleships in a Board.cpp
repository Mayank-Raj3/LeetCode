class Solution {
public:
    int countBattleships(vector<vector<char>>& grid) {
        int n = grid.size(), m = grid[0].size();
        vector<vector<int>> vis(n, vector<int>(m, 0)) ;
        int maxi = 0 ;
        auto isValid = [&](int row , int col ) {
            if (row >= 0 && row < n && col >= 0 && col < m && vis[row][col] == 0 && grid[row][col] == 'X')
                return true ;
            else
                return false ;
        };
        int dx[8] = {0, 1, 0, -1, 1, 1, -1, -1};
        int dy[8] = {1, 0, -1, 0, 1, -1, -1, 1};
        int cnt = 0 ;
        function<void(int, int)> dfs = [&](int row , int col ) {
            vis[row][col] = 1;
            for (int i = 0 ; i < 4 ; i ++) {
                int x = dx[i] + row , y = dy[i] + col ;
                if (isValid(x, y)) {
                    dfs(x, y);

                }
            }
        };
        for (int i = 0 ; i < n; i++) {
            for (int j = 0 ; j < m ; j++) {
                if (grid[i][j] == 'X' && !vis[i][j]) {
                    cnt++;
                    dfs(i , j);
                    maxi = max(cnt, maxi);

                }
            }
        }
        return maxi ;
    }
};

