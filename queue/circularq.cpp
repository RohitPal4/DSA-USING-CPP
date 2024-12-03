#include<iostream>
#include<vector>
using namespace std;
class Node{
    public:
    vector<int> arr; 
    int f;
    int r;
    int s;
    Node(int size){
        f = -1;
        r = -1;
        s = size;
        arr = vector<int>(size);
    }

    void push(int val){
        if((r+1)%s==f){
            cout << "queue is full" << endl;
        }
        if(f==-1){
            f = 0;
        }
        r = (r+1)%s;
        arr[r] = val;
    }
    int pop(){
        if((f==-1 && r==-1) || f> r){
            cout << "queue is empty " << endl;
        }
        int t = arr[f];
        f = (f+1)%s;

        return t;
    }

    bool isFull(){
        return (r+1)%s == f;
    }

    bool isEmpty(){
        return (f==-1 && r==-1)|| f>r;
    }

};
int main() {
    Node q(10);
    q.push(4);
    q.push(4);
    return 0;
}