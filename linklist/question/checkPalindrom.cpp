// check link list is palindrome or Not 
// step a find middle
// reverse link list after middle node
// start comparing both haff 

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

Node* reverse(Node* head){
    Node* prev = nullptr;
    Node* curr = head;
    Node* forward = nullptr;
    while(curr != nullptr){
        forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
    }
    return prev;
}

bool checkPalendrome(Node* &head){
    if(head==nullptr){
        cout << "LL is empty " << endl;
        return true;
    }
    if(head->next == nullptr){
        // 1 true
        return true;
    }
    // find middle Node
    Node* slow = head;
    Node* fast = head->next;
    while(fast != nullptr){
        fast = fast->next;
        if(fast != nullptr){
            fast = fast->next;
            slow = slow->next;
        }
    }
    // slow pointer point to the the middle node
    // step b rreverse ll after middle node

    Node* reversellkahead = reverse(slow->next);

    slow->next = reversellkahead;

    // step c start comparision
    Node* temp1 = head;
    Node* temp2 = reversellkahead;
    while(temp2!=nullptr){
        if(temp1 -> data != temp2 -> data){
            // not a palendrome 
            return false;
        }
        else{
            temp1 = temp1->next;
            temp2 = temp2->next;
        }
    }
    return true;
}

int main() {
    Node* head = new Node(4);
    Node* second = new Node(3);
    Node* third = new Node(3);
    Node* fourth = new Node(3);
    Node* fifth = new Node(3);
    Node* sixth = new Node(4);

    
    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = sixth;
    
    bool isPalendrome = checkPalendrome(head);

    if(isPalendrome){
        cout << "LL is a valid palendrome " << endl;
    }
    else{
        cout <<" LL is not a palendrome " << endl;
    }
    return 0;
}