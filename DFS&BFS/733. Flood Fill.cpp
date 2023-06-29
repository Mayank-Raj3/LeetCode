class Solution {
public:
	vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
		int  n = image.size(), m = image[0].size();
		int dx[8] = {0, 1, 0, -1, 1, 1, -1, -1};
		int dy[8] = {1, 0, -1, 0, 1, -1, -1, 1};
		int startCol = image[sr][sc];
		auto isValid = [&](int row , int col) {
			return (row >= 0 && row < n && col >= 0 && col < m && image[row][col] == startCol && image[row][col] != color);
		};

		function<void(int, int)> dfs = [&](int row , int col) {
			image[row][col] = color;
			for (int i = 0 ; i < 4 ; i++) {
				int x = row + dx[i];
				int y = col + dy[i];
				if (isValid(x, y)) {
					dfs(x, y);
				}
			}
		};

		dfs(sr , sc );
		return image;
	}
};