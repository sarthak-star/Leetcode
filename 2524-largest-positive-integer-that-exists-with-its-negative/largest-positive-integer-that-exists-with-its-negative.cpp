class Solution {
public:
    int findMaxK(vector<int>& nums) {
        unordered_map<int, int> mp;
        int ans = -1;

        for (auto x : nums) {
            mp[x]++;
            
        }
        for(auto x:nums){
            if(mp.find(-x) != mp.end()){
                ans = max(ans,x);
            }
        }
        return ans;
    }
};