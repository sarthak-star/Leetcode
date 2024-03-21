class Solution {
public:
    int distinctPrimeFactors(vector<int>& nums) {
        int n = nums.size();
        set<int> st;

        for(int i = 0 ; i < n ; i++){
            int num = nums[i];
            for(int i = 2 ; i*i <= num ; i++){
                while(num%i==0){
                    st.insert(i);
                    num = num/i;
                }
            }
            if(num>1) st.insert(num);
        }
        return st.size();
    }
};