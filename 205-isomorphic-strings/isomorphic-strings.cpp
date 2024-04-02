class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,char> mps2t,mpt2s;

        for(int i = 0;i < s.length() ; i++){
            
            if(mps2t.find(s[i]) == mps2t.end()){
                if(mpt2s.find(t[i]) != mpt2s.end()){
                    return false;
                }
                mps2t[s[i]] = t[i];
                mpt2s[t[i]] = s[i];

            }
            else if(mps2t[s[i]] != t[i]){
                return false;
            }
            
        }
        return true;
    }
};