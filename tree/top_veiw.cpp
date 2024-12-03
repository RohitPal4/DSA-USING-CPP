#include<iostream>
#include<vector>
using namespace std;
vector<vector<int>> verticalTraversal(int root) {
       /* map<int, map<int, multiset<int>>> nodes;
        queue<pair<TreeNode* , pair<int, int>>>q;
        q.push({root, {0, 0}});
        while(!q.empty()){
            auto f = q.front();
            q.pop();
            TreeNode* node = f.first;
            int v = f.second.first, l = f.second.second;
            nodes[v][l].insert(node->val);
            if(node->left) q.push({node->left, {v-1, l+1}});
            if(node->right) q.push({node->right, {v+1, l+1}});
        }
        vector<vector<int>> res;

        for(auto [x, y_map]: nodes){
            vector<int> col;
            for(auto [l, values]: y_map){
                col.insert(col.end(), values.begin(), values.end());
            }
            res.push_back(col);
        }

        return res; */
        
    }

int main() {
    
    return 0;
}