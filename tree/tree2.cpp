#include <iostream>
#include <queue>
#include <stack>
#include <vector>
using namespace std;

class Node {
public:
    int data;
    Node *left, *right;
    Node(int value) {
        data = value;
        left = right = nullptr;
    }
};

Node* Binarysearchtree(Node* root, int x) {
    if (root == nullptr) {
        return new Node(x);
    }
    if (x < root->data) {
        root->left = Binarysearchtree(root->left, x);
    } else {
        root->right = Binarysearchtree(root->right, x);
    }
    return root;
}

bool search(Node* root, int target) {
    if (root == nullptr) {
        return false;
    }
    if (target == root->data) {
        return true;
    }
    if (target < root->data) {
        return search(root->left, target);
    } else {
        return search(root->right, target);
    }
}

int minvalue(Node* root) {
    while (root->left != nullptr) {
        root = root->left;
    }
    return root->data;
}

int maxvalue(Node* root) {
    while (root->right != nullptr) {
        root = root->right;
    }
    return root->data;
}

vector<vector<int>> levelorder(Node* root) {
    vector<vector<int>> res;
    if (root == nullptr) return res;
    queue<Node*> q;
    q.push(root);
    while (!q.empty()) {
        int n = q.size();
        vector<int> l;
        for (int i = 0; i < n; i++) {
            Node* node = q.front();
            q.pop();
            if (node->left) q.push(node->left);
            if (node->right) q.push(node->right);
            l.push_back(node->data);
        }
        res.push_back(l);
    }
    return res;
}

int main() {
    int x;
    cout << "Enter the root node: ";
    cin >> x;

    Node* root = new Node(x);
    cout << "Enter nodes (enter -1 to stop):" << endl;
    while (true) {
        cin >> x;
        if (x == -1) break;
        root = Binarysearchtree(root, x);
    }

    vector<vector<int>> levels = levelorder(root);
    cout << "Level order traversal: " << endl;
    for (auto l : levels) {
        for (auto e : l) {
            cout << e << " ";
        }
        cout << endl;
    }

    return 0;
}
