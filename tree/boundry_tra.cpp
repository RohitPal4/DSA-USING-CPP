#include<iostream>
using namespace std;
class Solution {
public:
    /*bool isLeaf(Node* root) {
        return root->left == nullptr && root->right == nullptr;
    }

    void addLeftBoundary(Node* root, vector<int>& res) {
        Node* curr = root->left;
        while (curr) {
            if (!isLeaf(curr)) res.push_back(curr->data);
            if (curr->left) curr = curr->left;
            else curr = curr->right;
        }
    }

    void addLeafNodes(Node* root, vector<int>& res) {
        if (isLeaf(root)) {
            res.push_back(root->data);
        } else {
            if (root->left) addLeafNodes(root->left, res);
            if (root->right) addLeafNodes(root->right, res);
        }
    }

    void addRightBoundary(Node* root, vector<int>& res) {
        Node* curr = root->right;
        vector<int> temp;
        while (curr) {
            if (!isLeaf(curr)) temp.push_back(curr->data);
            if (curr->right) curr = curr->right;
            else curr = curr->left;
        }
        // Add right boundary in reverse order
        for (int i = temp.size() - 1; i >= 0; i--) {
            res.push_back(temp[i]);
        }
    }

    vector<int> boundary(Node* root) {
        vector<int> res;
        if (!root) return res;

        // Add root if it's not a leaf
        if (!isLeaf(root)) res.push_back(root->data);

        // Add left boundary (excluding leaves)
        addLeftBoundary(root, res);

        // Add leaf nodes
        addLeafNodes(root, res);

        // Add right boundary (excluding leaves, in reverse order)
        addRightBoundary(root, res);

        return res;
    }*/
}; 
int main() {
    
    return 0;
}