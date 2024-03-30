class Solution {
public:
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return (solve(nums,k) - solve(nums,k-1));
    }
    int solve(vector<int> nums , int k ){
        unordered_map<int,int> mp;
        int ans = 0;
        int i = 0 , j = 0;
        while(j < nums.size()){
            mp[nums[j]]++;
            while(mp.size() > k){
                mp[nums[i]]--;
                if(mp[nums[i]] == 0) mp.erase(nums[i]);
                i++;
            }
            ans += j - i + 1;
            j++;
        }
        return ans;
    }
};