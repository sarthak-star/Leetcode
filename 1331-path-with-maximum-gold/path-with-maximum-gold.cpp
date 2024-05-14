class Solution {
public:
    int ans = 0;
    int dfs(vector<vector<int>>& grid,int i,int j){
        if(i < 0 || j < 0 || i >= grid.size() || j >= grid[0].size() || grid[i][j] == 0){
            return 0;
        }

        
        int temp = grid[i][j];
        grid[i][j]=0;
        int sum = temp;
        sum = max(sum, temp + dfs(grid, i-1, j));
        sum = max(sum, temp + dfs(grid, i+1, j));
        sum = max(sum, temp + dfs(grid, i, j-1));
        sum = max(sum, temp + dfs(grid, i, j+1));
        
        grid[i][j] = temp;
        return sum;
        
    }

    int getMaximumGold(vector<vector<int>>& grid) {
        for(int i = 0 ; i < grid.size() ; i++){
            for(int j = 0 ; j < grid[0].size() ; j++){
                if(grid[i][j] != 0){
                    ans = max(ans,dfs(grid,i,j));
                }
            }
        }
        return ans;
    }
};