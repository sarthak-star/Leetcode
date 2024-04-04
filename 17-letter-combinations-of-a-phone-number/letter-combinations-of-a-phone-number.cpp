class Solution {
public:

    unordered_map<char, string> mappings {
        {'2', "abc"},
        {'3', "def"},
        {'4', "ghi"},
        {'5', "jkl"},
        {'6', "mno"},
        {'7', "pqrs"},
        {'8', "tuv"},
        {'9', "wxyz"}
    };
    vector<string> combinations;
    void solve(string digits , int index , string path){
        if(index == digits.size()){
            combinations.push_back(path);
            return;
        }
        for(char c:mappings[digits[index]]){
            solve(digits,index+1,path+c);
        }

    }

    vector<string> letterCombinations(string digits) {
        if(digits.empty()){
            return {};
        }
        solve(digits,0,"");
        return combinations;        
    }   
};