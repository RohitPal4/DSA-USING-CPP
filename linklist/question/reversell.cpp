#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(){
        this->data = 0;
        this->next = nullptr;
    }
    Node(int data){
        this->data = data;
        this->next = nullptr;
    }
};

void print(Node* &head){
    Node* temp = head;
    while(temp != nullptr){
        cout << temp->data << " ";
        temp = temp->next;
    }

}

Node* reverse(Node* &prev, Node* &curr){
    // base case
    if(curr == nullptr){
        return prev;
    }
    Node* forward = curr->next;
    curr->next = prev;
    return reverse(curr, forward);
}

Node* reverseusingLoop(Node* head){
    Node* prev = nullptr;
    Node* curr = head;
    while(curr!=nullptr){
        Node* temp = curr->next;
        curr->next = prev;
        prev = curr;
        curr = temp;
    }
    return prev;
}
int main() {
    
    Node* first = new Node(1);
    Node* second = new Node(2);
    Node* third = new Node(3);
    Node* fourth = new Node(4);
    Node* fifth = new Node(5);
    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;

    cout << "thie ll is: "<< endl;
    print(first);

    // Node* prev = nullptr;
    // Node* curr = first;
    // Node* newHead = reverse(prev, curr);
    
    Node* newHead = reverseusingLoop(first);
    cout << endl;
    print(newHead);
    cout << endl;
    return 0;
}