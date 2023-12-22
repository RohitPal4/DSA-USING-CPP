// loop present or not in LinkList
// starting point of loop in linklist
// remove loop in linkedlist
// Floyd's Tortoise and Hare algorithm

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

bool checkforLoop(Node* &head){
    if(head == nullptr){
        cout << "LL is empty " << endl;
        return false;
    }
    Node* slow  = head;
    Node* fast = head;

    while(fast!=nullptr){
        fast = fast->next;
        if(fast!=nullptr){
            fast = fast->next;
            slow = slow->next;
        }
        if(slow == fast){
            // loop present
            return true;
        }
    }
    // fast null hogaya
    return false;
}

Node* startingPoint(Node* &head) {
    if (head == nullptr) {
        cout << "LL is empty " << endl;
        return nullptr;
    }

    Node* slow = head;
    Node* fast = head;

    while (fast != nullptr) {
        fast = fast->next;
        if (fast != nullptr) {
            fast = fast->next;
            slow = slow->next;
        }
        if (slow == fast) {
            // loop present
            slow = head;
            break;
        }
    }

    if (fast == nullptr) {
        // No loop
        cout << "No loop in the linked list." << endl;
        return nullptr;
    }

    while (slow != fast) {
        slow = slow->next;
        fast = fast->next;
    }
    return slow;
}


void removeLoop(Node* &head){
    if(head == nullptr){
        cout << "LL is empty " << endl;
        return;
    }
    Node* slow  = head;
    Node* fast = head;

    while(fast!=nullptr){
        fast = fast->next;
        if(fast!=nullptr){
            fast = fast->next;
            slow = slow->next;
        }
        if(slow == fast){
           break;
        }
    }

    if (slow != fast) {
        cout << "No loop in the linked list." << endl;
        return;
    }

    slow  = head;
    Node* prev = nullptr;
    while(slow!=fast){
        prev = fast;
        slow = slow->next;
        fast = fast->next;
    }
    prev ->next = nullptr;
    
}

int main() {
    Node* head = new Node(5);
    Node* second = new Node(15);
    Node* third = new Node(25);
    Node* fourth = new Node(35);
    Node* fifth = new Node(45);
    Node* sixth = new Node(55);
    Node* seventh = new Node(65);
    Node* eighth = new Node(75);
    Node* ninth = new Node(85);

    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = sixth;
    sixth->next = seventh;
    seventh->next = eighth;
    eighth->next = ninth;
    ninth->next = fifth;
    
    cout << "Loop is present or not: " << checkforLoop(head) << endl;
    cout << "starting point of loop is : " << startingPoint(head)->data << endl;
    removeLoop(head);
    cout << "Loop is present or not: " << checkforLoop(head) << endl;
    print(head);
    return 0;
}