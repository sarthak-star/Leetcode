class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        unordered_map <int,int> mp;
        int i = 0 , j = 0;
        int len = 0;

        while(j < nums.size()){
            mp[nums[j]]++;
            while(mp[nums[j]] > k){
                mp[nums[i]]--;
                i++;
            }
            len = max(len , j-i+1);
            j++;
        }
        return len;
    }   
};