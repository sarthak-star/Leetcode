class Solution {
public:
    string makeGood(string s) {
        
        if(s.length() == 1){
            return s;
        }
        int i = 0;
        string res;
        while(i < s.length()){
            
            int m = res.length();

            if(m > 0 && abs(res[m - 1] - s[i]) == 32){
                res.pop_back();
                i++;
            }
            
            else if( i < s.length() - 1 && abs(s[i+1] - s[i]) == 32){
                i += 2;
            }   
            else{
                res.push_back(s[i]);
                i++;
            }
        }
        return res;
    }
};