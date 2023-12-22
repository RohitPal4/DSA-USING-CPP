#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        this->data = 0;
        this->next = nullptr;
    }
    Node(int data)
    {
        this->data = data;
        this->next = nullptr;
    }

    ~Node(){
        cout << "node with value" << endl;
    }
};
// i want to insert a element at head
void insertAthead(Node *&head, Node* &tail, int data)
{
    // check for empty link list 
    if(head == nullptr){
    Node *newNode = new Node(data);
    head = newNode;
    tail = newNode;
    return;
    }
    Node *newNode = new Node(data);
    newNode->next = head;
    head = newNode;
}

void insertAttail(Node* &head, Node *&tail, int data)
{

    if(head == nullptr){
    Node *newNode = new Node(data);
    head = newNode;
    tail = newNode;
    return;
    }
    Node* newNode = new Node(data);

    tail->next = newNode;

    tail = newNode;
}

int findLength(Node* &head){
    int len =0;
    Node* temp = head;
    while(temp!=nullptr){
        temp = temp->next;
        len++;
    }
    return len;
}

void insertAtPosition(Node* &head, Node* &tail, int data, int position){
    if(head == nullptr){
    Node *newNode = new Node(data);
    head = newNode;
    tail = newNode;
    return;
    }
    // find position prew and curr
    if(position==0){
        insertAthead(head, tail, data);
        return;
    }

    int len = findLength(head);
    if(position>=len){
        insertAttail(head, tail, data);
        return;
    }
    int i = 1;
    Node* prev = head;
    while(i<position){
        prev = prev->next;
        i++;
    }
    Node* curr = prev->next;

    Node* newNode = new Node(data);

    newNode->next = curr;

    prev->next = newNode;



}

void print(Node* &head)
{
    Node *temp = head;
    while (temp != nullptr)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

void deleteNode(int position, Node* &head, Node* &tail){
    if(head == nullptr){
        cout << "Can not be deleted. LL is empty";
        return;
    }

    if(position==1){
        Node* temp = head;
        head = head->next;
        temp->next = nullptr;
        delete temp;
        return;
    }
    int len  = findLength(head);
    if(position==len){
        int i = 1;
        Node* prev = head;
        while(i<position-1){
            prev = prev->next;
            i++;
        }
        prev->next = nullptr;
        Node* temp = tail;
        tail = prev;
        delete temp;
        return;
    }
    // delete middle node
    int  i = 1;
    Node* prev = head;
    while(i<position-1){
        prev = prev->next;
        i++;
    }
    Node* curr = prev->next;
    prev -> next = curr->next;
    curr->next = nullptr;
    delete curr;

}
int main()
{

    Node* head = nullptr;
    Node* tail = nullptr;

    insertAthead(head, tail, 20);
    insertAthead(head, tail, 50);
    insertAthead(head, tail, 60);
    insertAthead(head, tail, 90);
    insertAttail(head, tail, 70);
    
    print(head);
    cout << endl;

    cout << "Head: " << head->data << endl;
    cout << "tail: "<< tail->data << endl;
    insertAtPosition(head, tail, 11, 0);
    cout << endl;

    print(head);
    cout << endl;
    cout << "Head: " << head->data << endl;
    cout << "tail: " << tail->data << endl;
    deleteNode(1, head, tail);
    cout << endl;
    print(head);
    cout << endl;
    cout << "Head: " << head->data << endl;
    cout << "tail: "<< tail->data << endl;
    deleteNode(4, head, tail);
    cout << endl;
    print(head);
    cout << endl;
    cout << "Head: " << head->data << endl;
    cout << "tail: "<< tail->data << endl;

    return 0;
}