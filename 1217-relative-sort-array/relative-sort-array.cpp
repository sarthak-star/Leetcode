class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        vector<int> ans;
        unordered_map<int,int> mp;
        vector<int> remain;

        for(auto x : arr1){
            mp[x]++;
        }

        for(auto x : arr2){
            if(mp.find(x) != mp.end()){
                while(mp[x] > 0){
                    ans.push_back(x);
                    mp[x]--;
                }
                mp.erase(x); 
            }

        }
        for(auto& x : mp){
            while(x.second > 0){
                remain.push_back(x.first);
                x.second--;
            }
        }
        sort(remain.begin() , remain.end());
        ans.insert(ans.end(), remain.begin(), remain.end());

        return ans;


    }
};