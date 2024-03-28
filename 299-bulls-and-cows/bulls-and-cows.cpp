class Solution {
public:
    string getHint(string secret, string guess) {
        int countbull = 0;
        int countcow = 0;
        unordered_map < char,int > mp;
        for(int i = 0 ; i < secret.size() ; i++){
            if(secret[i] == guess[i]){
                countbull++;
            }
            else{
                mp[guess[i]]++;
            }
        }

        for(int i = 0 ; i < secret.size() ; i++){
            if(secret[i] != guess[i] && mp[secret[i]] > 0){
                countcow++;
                mp[secret[i]]--;
            }
        }
        string ans=to_string(countbull)+"A" +to_string(countcow)+"B";
        return ans;

    }
};