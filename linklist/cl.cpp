#include<iostream>
using namespace std;
class Node{
    int data;
    Node* next;
    public:
    Node(int data){
        data= data;
        next = nullptr;

    }

    void insertAthead(int data, Node* head ){
        Node* newNode = new Node(data);
        newNode->next = head;
        head = newNode;

    }
    void print(){
        Node
    }
};



int main() {
    Node* head = nullptr;
    head = insertAthead(5, head);
    return 0;
}