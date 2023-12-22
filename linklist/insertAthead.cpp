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
// i want to insert a element at head
void insertAthead(Node* &head, int data){
    Node* newNode = new Node(data);
    newNode->next = head;
    head = newNode;

}

void print(Node* &head){
    Node* temp = head;
    while(temp != nullptr){
        cout << temp->data << " ";
        temp = temp->next;
    }

}
int main() {
    
Node* head = nullptr;

    insertAthead(head, 20);
    insertAthead(head, 50);
    insertAthead(head, 60);
    insertAthead(head, 90);

    print(head);

    return 0;
}