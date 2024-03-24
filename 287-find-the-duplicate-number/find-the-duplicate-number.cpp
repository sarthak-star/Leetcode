class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int,int> map;

        for(auto it:nums){

            if(map.find(it) != map.end()){
                return it;
            }

            map[it]++;
        }

        return -1;


    }
};