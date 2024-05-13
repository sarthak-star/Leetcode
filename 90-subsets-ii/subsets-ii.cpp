class Solution {
public:

    void solve(vector<int>& nums , vector<int>& op , vector<vector<int>>& ans , int index ){
        ans.push_back(op);

        for(int i = index ; i < nums.size() ; i++){
            if(i != index && nums[i] == nums[i-1]){
                continue;
            }
            op.push_back(nums[i]);
            solve(nums,op,ans,i+1);
            op.pop_back();
        }
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<int> op;
        vector<vector<int>> ans;
        sort(nums.begin() , nums.end());
        solve(nums,op,ans,0);

        return ans;
    }
};