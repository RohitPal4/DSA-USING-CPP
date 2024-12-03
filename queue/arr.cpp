#include<iostream>
using namespace std;

class Node{
    public:
    vector<int> arr;
    int f;
    int r;
    int ms;
    Node(int x){
        ms = x;
        arr = vector<int>(x);
        f = -1;
        r = -1;
    }

    void push(int x){
        if(r>=ms){
            cout << "overflow condituion" << endl;
        }
        arr[r++]= x;
    }
    int pop(){
        if(f>r)
        cout << "condition underflow " << endl;
        int t = arr[f];
        f++;
        return t;
    }
    int front(){
        return arr[f];
    }
    void display(){
        while(f<=r){
            int t = front();
            pop();
            cout << t << endl;
        }
    }
      
}
int main() {
    Node q(4);
    

    return 0;
}