class Solution {
public:
    int lengthOfLastWord(string s) {
        int flag = 0;
        int ans = 0;
        int j = s.length() - 1; 
        while(j>=0){
            
            if(s[j] != ' '){
                ans++;
                flag = 1;
            }
            else if(flag == 1){
                break;
            }
            j--;
        }
        return ans;
    }
};