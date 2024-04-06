class Solution {
public:
    string minRemoveToMakeValid(string s) {
        int open = 0;
        
        for(int  i = 0 ; i < s.length() ; i++){
            if(s[i] == '('){
                open++;
            }
            else if(s[i] == ')'){
                if(open == 0){
                    s[i] = '*';
                }
                else{
                    open--;
                }
            }
        }
        for(int i = s.length() - 1 ; i >= 0 ; i--){
            if(open > 0 && s[i] == '('){
                s[i] = '*';
                open--;
            }
        }
        int i = 0;
        while(i < s.length()){
            if(s[i] == '*'){
                s.erase(s.begin() + i);
            }
            else {
                i++;
            }
        }

        return s;
    }
};