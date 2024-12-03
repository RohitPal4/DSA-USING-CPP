#include<iostream>
using namespace std;
#include<stack>
class Queue{
    public:
    stack<int> st1;
    stack<int> st2;
    int s;
    Queue(int x){
        s = x;

    }

    void push(int val){
        if(st2.size()==s){
            cout << "queue is full" << endl;
            return;
        }
        st1.push(val);
        s++;
        int num = st1.top();
        st2.push(num);
    }
    int pop(){
        if(st2.empty()){
            cout << "queue is underflow " << endl;
        }
        int num = st2.top();
        st2.pop();
        s--;
        return num;
    }

    int top(){
        int num = st2.top();
        return num;
    }


};
int main() {
    Queue q(5);
    q.push(4);
    q.push(6);
    q.push(7);
    q.push(8);

    q.pop();

    q.top();
    q.pop();
    q.top();

    return 0;
}