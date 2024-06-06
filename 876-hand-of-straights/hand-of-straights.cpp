class Solution {
public:
    static bool isNStraightHand(vector<int>& hand, int groupSize) {
        const int n = hand.size();
        if (n % groupSize != 0)
            return 0;
        map<int, int> mp;
        for (int x : hand)
            mp[x]++;
        for (auto [x, f] : mp) {
            if (f == 0)
                continue;
            for (int i = x; i < x + groupSize; i++) {
                if (mp.count(i) == 0 || mp[i] < f)
                    return 0;
                mp[i] -= f;
            }
        }
        return 1;
    }
};
