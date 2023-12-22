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


int getLength(Node* head){
    int len = 0;
    Node* temp = head;
    while(temp != nullptr){
        temp = temp->next;
        len++;
    }
    return len;
}

Node* reverseKnodes(Node* &head, int k){
    if(head == nullptr){
        cout << "ll is empty! " << endl;
        return nullptr;
    }
    int len = getLength(head);
    if(k>len){
        cout <<"enter valid value of k " << endl;
        return head;
    }

    // step a: reverse first k nodes of ll
    Node* prev= nullptr;
    Node* curr = head;
    Node* forward = curr->next;
    int count = 0;
    while(count < k){
        forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
        count++;
    }
    // step b recursive call

    if(forward != nullptr){
       head ->next = reverseKnodes(forward, k);
    }
    // step c return head of the modify link list 
    return prev;
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
    fifth->next = sixth;
    sixth->next = nullptr;
    print(head);

    head = reverseKnodes(head, 3);
    print(head);

    return 0;
}