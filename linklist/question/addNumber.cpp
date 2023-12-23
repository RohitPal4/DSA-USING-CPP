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

Node* solve(Node* &head1, Node* &head2){
    // reverse both LL 
    head1 = reverseusingLoop(head1);
    head2 = reverseusingLoop(head2);

    //add both LL
    Node* anshead = nullptr;
    Node* anstail = nullptr;
    int carry = 0;

    while(head1 != nullptr && head2 != nullptr){
        // calculate sum
        int sum = carry + head1->data + head2->data;
        // find digit to create node
        int digit  = sum%10;
        carry = sum/10;
        // create a newNode for the digit 
        Node* newNode = new Node(digit);
        if(anshead == nullptr){
            // first node insert kr rahe ho
            anshead = newNode;
            anstail = newNode;
        }
        else{
            anstail->next = newNode;
            anstail = newNode;
        }
        head1 = head1->next;
        head2 = head2->next;

    }

    while(head1!=nullptr){
        int sum = carry + head1->data;
        int digit = sum%10;
        carry = sum/10;
        Node* newNode = new Node(digit);
        anstail->next = newNode;
        anstail = newNode;
        head1 = head1->next;
    }

    while(head2!=nullptr){
        int sum = carry + head2->data;
        int digit = sum%10;
        carry = sum/10;
        Node* newNode = new Node(digit);
        anstail->next = newNode;
        anstail = newNode;
        head2 = head2->next;
    }
    // handle carry
    while(carry != 0){
        int sum = carry;
        int digit = sum%10;
        carry = sum/10;
        Node* newNode = new Node(digit);
        anstail->next = newNode;
        anstail = newNode;

    }

    // reverse new LL 
    anshead  = reverseusingLoop(anshead);
    return anshead;
}
int main() {
    Node* head1 = new Node(9);
    Node* second1 = new Node(9);
    head1->next = second1;

    Node* head2 = new Node(9);
    Node* second2 = new Node(9);
    // Node* third2 = new Node(4);
    head2->next = second2;
    // second2->next = third2;

    Node* ans = solve(head1, head2);

    print(ans);

    return 0;
}