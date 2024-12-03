#include<iostream>
#include<vector>
#include<queue>
#include<stack>
using namespace std;
class Node{
    public: 
    int data;
    Node* left;
    Node* right;
    Node(int val){
        data = val;
        left = right = nullptr;
    }
};

// preorder
void preorder(Node *root){
    if(root==nullptr) return;

    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
    // tc = o(n) sc = o(N)
}

// inorder
void inorder(Node *root){
    if(root==nullptr) return;

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
    // tc = o(n) sc = o(N)
}

// postorder
void postorder(Node *root){
    if(root==nullptr) return;

    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
    // tc = o(n) sc = o(N)
}

vector<vector<int>>levelorder(Node *root){
    vector<vector<int>> res;
    queue<Node*> q;
    q.push(root);
    while(!q.empty()){
        int n = q.size();
        vector<int> l;
        for(int i =0; i<n; i++){
            Node* node = q.front();
            q.pop();
            if(node->left) q.push(node->left);
            if(node->right) q.push(node->right);
            l.push_back(node->data);
            
        }
        res.push_back(l);
    }
    return res;
}

// iterative traversals
vector<int> iterativePreorder(Node* root){
    vector<int>res;
    if(!root) return res;
    stack<Node*>st;
    st.push(root);
    while(!st.empty()){
        root = st.top();
        st.pop();
        res.push_back(root->data);
        if(root->right) st.push(root->right);
        if(root->left) st.push(root->left);
    }
    return res;
}

vector<int> iterativeInorder(Node* root){
    stack<Node*> st;
    vector<int> res;
    Node* node = root;
    while(true){
        if(node!=nullptr){
            st.push(node);
            node = node->left;
        }else{
            if(st.empty()) break;
            node = st.top();
            st.pop();
            res.push_back(node->data);
            node = node->right;
        }
    }
    return res;
}

Node* BT(){
    int val;
    cin >> val;
    Node* root = new Node(root->data);
    if(!root) return nullptr;
    cout << "Enter left child : " << endl;
    root->left = BT();
    cout << "Enter right child: " << endl;

    return root;

}

vector<int> iterativePostorder(Node* root){
    vector<int> res;
    if(!root) return res;
    stack<Node*> st1, st2;
    st1.push(root);
    while(!st1.empty()){
        root = st1.top();
        st1.pop();
        st2.push(root);
        if(root->left) st1.push(root->left);
        if(root->right) st1.push(root->right);
    }
    while(!st2.empty()){
        res.push_back(st2.top()->data);
        st2.pop();
    }
    return res;
}

// iterative postorder using one stack 
vector<int> iterativePostorderunig1stack(Node* root){
    vector<int> res;
    if(root==nullptr) return res;
    Node* curr = root;
    Node* lastvisited = nullptr;
    stack<Node*> st;
    st.push(curr);
    while(!st.empty() || curr!=nullptr){
        if(curr!=nullptr){
            st.push(curr);
            curr= curr->left;
        }else{
            Node* topNode = st.top();
            if(topNode->right != nullptr && lastvisited != topNode->right){
                curr= topNode->right;
            }else{
                res.push_back(topNode->data);
                lastvisited = topNode;
                st.pop();
            }
        }
    }
    return res;
}

int main() {
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->right = new Node(4);
    cout << "\npreorder " << endl;
    preorder(root);
    cout << "\ninorder : " << endl;
    inorder(root);
    cout << "\npostorder: " << endl;
    postorder(root);
    cout << "\nlevelorder: " << endl;
    vector<vector<int>>res= levelorder(root);
    for(auto l: res){
        for(auto e: l){
            cout << e << " ";
        }
        cout << endl;
        
    }

    return 0;
}