class Solution {
public:
    void flip_col(int col, vector<vector<int>>& grid, int n) {
        for (int row = 0; row < n; row++) {
            if (grid[row][col] == 0) {
                grid[row][col] = 1;
            } else {
                grid[row][col] = 0;
            }
        }
    }
    void flip_row(int row, vector<vector<int>>& grid, int m) {
        for (int col = 0; col < m; col++) {
            if (grid[row][col] == 0) {
                grid[row][col] = 1;
            } else {
                grid[row][col] = 0;
            }
        }
    }

    int value(vector<int>& temp) {
        int n = temp.size();
        int val = 1;
        int ans = 0;

        for (int i = n - 1; i >= 0; i--) {
            int bit = temp[i];

            ans += (bit * val);

            val = (val << 1);
        }

        return ans;
    }

    int matrixScore(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();

        // First focus on each row -> if starting element is 0 => Flip whole
        // row.
        for (int row = 0; row < n; row++) {
            if (grid[row][0] == 0) {
                flip_row(row, grid, m);
            }
        }

        // focus on each column -> if number of zeros > number of 1 => Flip
        // Whole column.
        for (int col = 0; col < m; col++) {
            int zeros = 0, ones = 0;

            for (int row = 0; row < n; row++) {
                if (grid[row][col] == 0) {
                    zeros++;
                } else {
                    ones++;
                }
            }

            if (zeros > ones) {
                flip_col(col, grid, n);
            }
        }

        // now Find the integer number for each row and add it to answer.
        int ans = 0;

        for (int i = 0; i < n; i++) {
            ans += value(grid[i]);
        }

        return ans;
    }
};
