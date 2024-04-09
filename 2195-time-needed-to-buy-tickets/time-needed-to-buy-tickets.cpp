class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        int time = 0;

        int remain = tickets[k];

        
        int i = 0;
        while(i < tickets.size() && remain){
            if(tickets[i] != 0 && i!=k){
                tickets[i]--;
                time++;
            }
            else if(tickets[i] != 0 && i==k){
                tickets[i]--;
                time++;
                remain--;
            }
            if(i == tickets.size() - 1){
                i = 0;
            }
            else{
                i++;
            }
        }
        return time;
    
    }
};