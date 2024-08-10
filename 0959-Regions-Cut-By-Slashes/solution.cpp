#include "solution.hpp"

static auto x = []() {
	// turn off sync
	std::ios::sync_with_stdio(false);
	// untie in/out streams
	cin.tie(NULL);
	return 0;
}();


int Solution::regionsBySlashes(vector<string>& grid) {
        int rows1 = grid.size();
        int cols1 = grid[0].size();
        int rows2 = 3 * rows1;
        int cols2 = 3 * cols1;

        vector<vector<int>> grid2(rows2, vector<int>(cols2, 0));

        for (int r = 0; r < rows1; r++) {
            for (int c = 0; c < cols1; c++) {
                int r2 = 3 * r;
                int c2 = 3 * c;
                if (grid[r][c] == '/') {
                    grid2[r2][c2+2] = 1;
                    grid2[r2+1][c2+1] = 1;
                    grid2[r2+2][c2] = 1;
                } else if (grid[r][c] == '\\') {
                    grid2[r2][c2] = 1;
                    grid2[r2+1][c2+1] = 1;
                    grid2[r2+2][c2+2] = 1;
                }
            }
        }

        vector<vector<bool>> visited(rows2, vector<bool>(cols2, false));
        function<void(int, int)> dfs = [&](int r, int c) {
            if (visited[r][c] || grid2[r][c] == 1) return;

            visited[r][c] = true;
            vector<pair<int, int>> directions = {{1, 0}, {0, 1}, {-1, 0}, {0, -1}};
            for (auto [dR, dC] : directions) {
                int nextR = r+dR; 
                int nextC = c+dC;
                if (nextR < 0 || nextR >= rows2 || nextC < 0 || nextC >= cols2) continue;
                dfs(nextR, nextC);
            }
        };
        

        int regions = 0;
        for (int r = 0; r < rows2; r++) {
            for (int c = 0; c < cols2; c++) {
                if (grid2[r][c] == 0 && !visited[r][c]) {
                    dfs(r, c);
                    regions++;
                }
            }
        }
        return regions;
}
