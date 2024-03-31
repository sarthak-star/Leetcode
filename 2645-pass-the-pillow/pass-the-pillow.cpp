class Solution {
public:
    int passThePillow(int n, int time) {
        int dir = -1;
        int i = 1;
        while(time--){
            if(i == 1) dir = -dir;
            if(i == n) dir = -dir;
            if(dir == 1){
                i++;
            } 
            else{
                i--;
            }
        }
        return i;
    }
};