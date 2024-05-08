/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
public:

    map<Node*,Node*> mp;

    Node* dfs(Node* head){
        Node* curr = new Node(head->val);
        mp[head] = curr;

        for(Node* v : head->neighbors){
            if(mp.find(v) == mp.end()){
                curr->neighbors.push_back(dfs(v));
            }
            else{
                curr->neighbors.push_back(mp[v]);
            }
        }
        return curr;
    }

    Node* cloneGraph(Node* node) {
        return node ? dfs(node) : NULL;
    }
};