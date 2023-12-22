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
    ~Node(){
     
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
void removeDuplicates(Node* head){
    if(head == nullptr){
        cout << "LL is empty" << endl;
        return;
    }
    if(head->next == nullptr){
        cout << "single Node "<< endl;
        return;
    }
    // >1 Node in LL
    Node* curr =head;
    while(curr != nullptr){
        if((curr->next != nullptr) && (curr->data == curr->next->data)){
            Node* temp = curr->next;
            curr->next = curr->next->next;
            temp->next = nullptr;
            delete temp;

        }
        else{
            //not equal
            curr = curr->next;
        }
    }
}

int main() {

    Node* head = new Node(1);
    Node* second = new Node(2);
    Node* third = new Node(3);
    Node* fourth = new Node(3);
    Node* fifth = new Node(5);
    Node* sixth = new Node(6);

    
    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = sixth;

    cout << "input LL: ";
    print(head);
    removeDuplicates(head);
    cout << "output LL: ";
    print(head);
    return 0;
}