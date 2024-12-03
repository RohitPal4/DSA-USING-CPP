#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int x){
        data = x;
        next = nullptr;
    }
};
class Stack{
    private: 
    Node* top;
    public:
    Stack(){
        top = nullptr;
    }

    void push(int x){
        Node* newNode = new Node(x);
        newNode->next = top;
        top = newNode;
        cout << "element pushed successfully" << endl;

    }
    void pop(){
        if(isEmpty()){
            cout << "stack is already empty " << endl;
        }
        else{
            Node* temp = top;
            top = top->next;
            cout << "poped value is : "<< temp->data << endl;
            delete temp;
        }
    }

    int peek(){
        if(isEmpty()){
            return -1;            
        }else{
            return top->data;
        }
    }
    bool isEmpty(){
        return top == nullptr;
    }

    void display(){

        Node* temp = top;
        cout << "stack elements is : ";
        while(temp){
            cout << temp->data << " ";
            temp = temp->next;
        }
    }

};
int main() {
    Stack s;
    s.push(5);
    s.push(6);
    s.push(7);
    s.display();
    s.pop();
    s.pop();
    s.pop();
    cout << "top value is : ";
    cout << s.peek() << endl;
    return 0;
}