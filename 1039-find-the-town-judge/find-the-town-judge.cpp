class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<int> ht(n+1,0);

        for(auto x : trust){
            ht[x[0]] = -1;
            if(ht[x[1]] != -1){
                ht[x[1]]++;
            }
        }
        for(int i = 1 ; i < ht.size() ; i++){
            if(ht[i] == n-1){
                return i;
            }
        }
        return -1;
    }
};