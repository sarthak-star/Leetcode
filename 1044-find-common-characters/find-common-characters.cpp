class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        vector<int> common(26,INT_MAX);
        int n = words.size();
        vector<string> ans;

        for(auto x:words){
            vector<int> count(26,0);

            for(auto it:x){
                count[it-'a']++;
            }
            for(int i = 0 ; i < 26 ; i++){
                common[i] = min(common[i] , count[i]);
            }

        }

        for(int i = 0 ; i < 26 ; i++){
            if(common[i] > 0){
                while(common[i]--){
                    ans.push_back(string(1,i+'a'));
                }
            }
        }
        
        return ans;
    }
};