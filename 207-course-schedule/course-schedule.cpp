class Solution {
public:
    bool canFinish(int n, vector<vector<int>>& pre) {
        vector<int> adj[n];
        vector<int> indeg(n, 0);

        for (int i = 0 ;i < pre.size(); i++) {
            adj[pre[i][1]].push_back(pre[i][0]);
            indeg[pre[i][0]]++;
        }

        queue<int> q;

        for (int i = 0; i < n; i++) {
            if (indeg[i] == 0) {
                q.push(i);
            }
        }

        int cnt = 0; 

        while (!q.empty()) {
            int nf = q.front();
            q.pop(); 
            cnt++;
            for (int i : adj[nf]) {
                indeg[i]--; 
                if (indeg[i] == 0) {
                    q.push(i); 
                }
            }
        }
        if (cnt == n)
            return true;
        return false;
    }
};