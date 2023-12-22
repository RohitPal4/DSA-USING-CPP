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
int main() {
    
    Node* first = new Node(2);
    Node* second = new Node(3);
    Node* third = new Node(4);
    Node* fourth = new Node(5);
    Node* fifth = new Node(6);
    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;

    cout << "thie ll is: "<< endl;
    print(first);
    
    return 0;
}