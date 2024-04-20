class Solution {
public:

    void dfs(vector<vector<int>>& land , int i , int j , int& end_i,int& end_j){
        if(i<0 || i>=land.size() || j<0 || j>=land[0].size() || land[i][j]==0){
               
            return;
        }

        land[i][j] = 0;
        end_i = max(i,end_i);
        end_j = max(j,end_j); 
        dfs(land,i-1,j,end_i,end_j);
        dfs(land,i+1,j,end_i,end_j);
        dfs(land,i,j-1,end_i,end_j);
        dfs(land,i,j+1,end_i,end_j);



    }

    vector<vector<int>> findFarmland(vector<vector<int>>& land) {
        vector<vector<int>> ans;
        vector<int> op;

        for(int i = 0 ; i < land.size() ; i++){
            for(int j = 0 ; j < land[0].size() ; j++){
                if(land[i][j] == 1){
                    int end_i = i;
                    int end_j = j;

                    op.push_back(i);
                    op.push_back(j);
                    dfs(land,i,j,end_i,end_j);
                    op.push_back(end_i);
                    op.push_back(end_j);
                    ans.push_back(op);
                    op.clear();
                }
                
            }
        }
        return ans;
    }
};