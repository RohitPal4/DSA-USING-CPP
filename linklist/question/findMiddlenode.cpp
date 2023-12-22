#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data = data;
        this->next = nullptr;
    }
};

void print(Node* head){
    Node* temp = head;
    while(temp != nullptr){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

Node* getMiddle(Node* &head){
    if(head == nullptr){
        cout << "ll is empty! "<< endl;
        return head;
    }
    if(head->next == nullptr){
        return head;
    }

    Node* slow = head;
    Node* fast = head;

    // for even 
    // Node* fast = head->next;
    
    while(slow!=nullptr && fast != nullptr){
        fast = fast->next;
        if(fast != nullptr){
            fast = fast->next;
            slow = slow->next;
        }
    }
    return slow; 
}

int main() {
    Node* head = new Node(5);
    Node* second = new Node(15);
    Node* third = new Node(25);
    Node* fourth = new Node(35);
    Node* fifth = new Node(45);
    Node* sixth = new Node(55);

    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = nullptr;
    // sixth->next = nullptr;
    print(head);

    cout << "Middle Node is: " << getMiddle(head) -> data << endl;
    return 0;
}