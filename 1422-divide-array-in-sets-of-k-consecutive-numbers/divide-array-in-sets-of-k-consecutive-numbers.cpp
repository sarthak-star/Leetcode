class Solution {
public:
    bool isPossibleDivide(vector<int>& nums, int k) {
        int n = nums.size();

        if(n % k != 0) return 0;
        map<int,int> mp;
        for(int x:nums){
            mp[x]++;
        }

        for(auto [x,f]:mp){
            if(f == 0) continue;

            for(int i = x ; i < x + k ; i++){
                if(mp.count(i) == 0 || mp[i] < f){
                    return 0;
                }
                mp[i] -= f;
            }
        }
        return 1;
        
    }
};