class Solution {
public:
    string convertToTitle(int n) {
        string ans = "";
        while(n){
            int res = (n-1)%26;
            ans.push_back('A'+res);
            n = (n-1)/26;
        }
        reverse(ans.begin() , ans.end());
        return ans;
    }
};