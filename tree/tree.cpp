#include<iostream>
#include<queue>
using namespace std;
class Node{
    public:
    int data;
    Node *left, *right;
    Node(int value){
        data = value;
        left = right  = nullptr;
    }
};
int main(){
    int x;
    int first, second;
    queue<Node*>q;
    cout << "Enter root Element of the tree: ";
    cin >> x;
    Node *root =  new Node(x);
    q.push(root);
    while(!q.empty()){
        Node* temp = q.front();
        q.pop();
        cout << "Enter the left child "<< temp->data << " : ";
        cin >> first;
        if(first != -1){
         temp->left = new Node(first);
         q.push(temp->left);  
        }
        cout << "Enter the right child child "<< temp->data << " : ";
        cin >> second;
        if(second != -1){
        temp->right = new Node(second);
        q.push(temp->right);
        }
    }
return 0;
}