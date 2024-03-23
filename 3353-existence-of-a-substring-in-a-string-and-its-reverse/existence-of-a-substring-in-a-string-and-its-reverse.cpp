class Solution {
public:
    bool isSubstringPresent(string s) {
        string temp = s;
        reverse(s.begin() , s.end());

        int i = 0;
        while(i < temp.size() - 1){
            string sub = temp.substr(i,2);
            int j = 0;
            while(j < s.size() - 1){
                string sub2 = s.substr(j,2);
                if(sub == sub2){
                    return true;
                }
                j++;
            }
            i++;
        }
        return false;

    }
};