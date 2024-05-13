class Solution {
public:

    int solve(vector<int>& energy,vector<int>& temp,int k,int i){
        
        if(i >= energy.size()){
            return 0;
        }
        if(temp[i] != INT_MIN){
            return temp[i];
        }

        temp[i] = solve(energy,temp,k,i+k) + energy[i];
        return temp[i];
    }

    int maximumEnergy(vector<int>& energy, int k) {
        int n = energy.size();
        vector<int> temp(n+1,INT_MIN);
        int ans = INT_MIN;
        for(int i = 0 ; i < n ; i++){
            ans = max(solve(energy,temp,k,i),ans);
        }
        
        return ans;

    }
};