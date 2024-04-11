class Solution {
public:
    string removeKdigits(string num, int k) {
        stack<int> st;

        for(char dig:num){
            while(!st.empty() && k > 0 && st.top() > dig){
                st.pop();
                k--;
            }
            st.push(dig);
        }
        while(k > 0 && !st.empty()){
            st.pop();
            k--;
        }
        string result;
        while(!st.empty()){
            result += st.top();
            st.pop();
        }
        reverse(result.begin() , result.end());

        size_t pos = result.find_first_not_of('0');
        result = (pos == std::string::npos) ? "0" : result.substr(pos);

        return result;


    }
};