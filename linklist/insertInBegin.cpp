#include<iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* Insert(Node* head, int x) {
    Node* temp = new Node();
    temp->data = x;
    temp->next = head;
    head = temp;
    return head;
}

void Print(Node* head) {
    cout << "List is: ";
    while (head != nullptr) {
        cout << " " << head->data;
        head = head->next;
    }
    cout << endl;
}

int main() {
    Node* head = nullptr;
    int n, x;
    cout << "How many numbers do you want to insert: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Enter number: ";
        cin >> x;
        head = Insert(head, x);
        Print(head);
    }

    // Clean up: free memory allocated for nodes
    while (head != nullptr) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }

    return 0;
}
