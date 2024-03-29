class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        int maxe = *max_element(nums.begin() , nums.end());

        int i = 0 , j = 0;
        int count = 0;
        long long ans = 0;
        int n = nums.size();
        while(j < n){
            count += (nums[j] == maxe);
            while(i <= j && count >= k){
                ans += (n-j);
                count -= (nums[i] == maxe);
                i++;
            }
            j++;
        }
        return ans;
    }
};