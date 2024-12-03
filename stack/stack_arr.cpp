#include <iostream>
using namespace std;

class Stack {
    int top;
    static const int Max = 10;
    int arr[Max];

public:
    Stack() {
        top = -1;
    }
    
    void push(int x) {
        if (top >= Max - 1) {
            cout << "Stack overflow" << endl;
        } else {
            arr[++top] = x;
            cout << "Element pushed successfully" << endl;
        }
    }

    void pop() {
        if (top < 0) {
            cout << "Stack is already empty" << endl;
        } else {
            cout << "Popped value is: " << arr[top--] << endl;
        }
    }

    int peek() {
        if (top < 0) {
            cout << "Stack is empty" << endl;
            return -1;
        } else {
            return arr[top];
        }
    }

    bool isEmpty() {
        return top < 0;
    }

    void display() {
        if (isEmpty()) {
            cout << "Stack is empty" << endl;
        } else {
            for (int i = top; i >= 0; i--) {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    Stack s;
    s.push(10);
    s.display();
    s.pop();
    s.display();
    return 0;
}
