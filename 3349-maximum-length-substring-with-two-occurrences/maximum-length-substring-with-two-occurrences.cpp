class Solution {
public:
    int maximumLengthSubstring(string s) {
        int n = s.length();
        int ans = 0 , start = 0 , end = 0;
        int c = 0;
        unordered_map<char,int> mp;
        while(end<n){
            mp[s[end]]++;
            while(mp[s[end]] == 3){
                mp[s[start]]--;
                start++;
            }
            ans = max(ans , end-start+1);
            end++;
        }
        return ans;
    }
};