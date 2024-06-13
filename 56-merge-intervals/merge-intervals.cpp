class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& inter) {
        vector<vector<int>> ans;
        int n = inter.size();
        if (n == 0)
            return ans;
        sort(inter.begin(), inter.end());
        ans.push_back(inter[0]);
        int j = 0;
        for (int i = 1; i < n; i++) {
            if (ans[j][1] >= inter[i][0]) {
                ans[j][1] = max(ans[j][1], inter[i][1]);
            } else {
                j++;
                ans.push_back(inter[i]);
            }
        }
        return ans;
    }
};