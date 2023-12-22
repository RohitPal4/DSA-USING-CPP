#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *prev;
    Node *next;

    Node()
    {
        this->data = 0;
        this->prev = nullptr;
        this->next = nullptr;
    }

    Node(int data)
    {
        this->data = data;
        this->prev = nullptr;
        this->next = nullptr;
    }
    ~Node(){
          cout << "Node with value: " << this->data << " deleted" << endl;
    }
    
};

void print(Node *&head)
{
    Node *temp = head;
    while (temp != nullptr)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int getLength(Node *&head)
{
    int len = 0;
    Node *temp = head;
    while (temp != nullptr)
    {
        temp = temp->next;
        len++;
    }
    return len;
}

void insertAthead(Node *&head, Node *&tail, int data)
{
    if (head == nullptr)
    {
        // ll is empty
        Node *newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    }
    Node *newNode = new Node(data);
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
}

void insertAttail(Node *&head, Node *&tail, int data)
{
    if (head == nullptr)
    {
        Node *newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    }
    // ll is not empty
    Node *newNode = new Node(data);
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}

void insertAtposition(Node *&head, Node *&tail, int position, int data)
{
    if (head == nullptr)
    {
        Node *newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    }

    if (position == 1)
    {
        insertAthead(head, tail, data);
        return;
    }
    int len = getLength(head);
    if (position > len)
    {
        insertAttail(head, tail, data);
        return;
    }
    // insertion in middle
    int i = 1;
    Node *prevNode = head;
    while (i < position - 1)
    {
        prevNode = prevNode->next;
        i++;
    }
    Node *curr = prevNode->next;
    // create a node
    Node *newNode = new Node(data);

    //
    prevNode->next = newNode;
    newNode->prev = prevNode;
    curr->prev = newNode;
    newNode->next = curr;
}

void deletefromPosition(Node *&head, Node *&tail, int position)
{
    if(head==nullptr){
        cout << "link list is empty!";
        return;
    }
    if(head->next == nullptr){
        Node* temp = head;
        head = nullptr;
        tail = nullptr;
        delete temp;
        return;
    }
    if(position == 1){
        Node* temp = head;
        head = head->next;
        head->prev = nullptr;
        temp->next = nullptr;
        delete temp;
        return;
    }

    int len = getLength(head);
    if(position == len){
        Node* temp = tail;
        tail = tail->prev;
        temp->prev = nullptr;
        tail->next = nullptr;
        delete temp;
        return;
    }

    // delete from middle
    // step find left right curr
    int i = 1;
    Node* left = head;
    while(i<position - 1){
        left = left->next;
        i++;
    }
    Node* curr = left->next;
    Node* right = curr -> next;
    
    // step 2
    left->next = right;
    //step3
    right->prev =  left;
    // step4
    curr->next = nullptr;
    curr->prev = nullptr;
    delete curr;

}

int main()
{
    Node *first = new Node(10);
    Node *second = new Node(20);
    Node *third = new Node(30);
    Node *head = first;
    Node *tail = third;

    first->next = second;
    second->prev = first;
    second->next = third;
    third->prev = second;

    insertAthead(head, tail, 101);

    insertAttail(head, tail, 501);
    

    cout << endl;
    insertAtposition(head, tail, 5, 400);
    print(head);

    cout << endl;
    deletefromPosition(head, tail, 6);
    print(head);
    return 0;
}