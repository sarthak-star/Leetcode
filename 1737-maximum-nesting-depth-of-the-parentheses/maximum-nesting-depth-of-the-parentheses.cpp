class Solution {
public:
    int maxDepth(string s) {
        int depth = 0;
        int open = 0;
        int close = 0;
        for(int i = 0 ; i < s.length() ;i++){
            if(s[i] == '('){
                open++;
            }
            else if(s[i] == ')'){
                close++;
            }
            depth = max(depth , open-close);
        }
        return depth;
    }
};