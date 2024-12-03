#include<iostream>
using namespace std;


class Stack {
    int top1;
    int top2;
    static const int max = 10;
    int arr[max];

public:
    Stack() {
        top1 = -1;
        top2 = max;
    }

void push1(int x){
    if(top1-top2<1){
        cout << "stack overflow" << endl;
        return;
    }
    arr[top1++] = x;

}

void push2(int x){
    if(top1-top2<1){
        cout << "stack overflow" << endl;
        return;
    }
    arr[top2--] = x;
}

void pop1(){
    if(top1 == -1 && top2 == max){
        cout << "stack underflow" << endl;
        return;
    }
    arr[top1--];
}

void pop2(){
    if(top1 == -1 && top2 == max){
        cout << "stack underflow" << endl;
        return;
    }
    arr[top2++];
}

    };

    int main(){
        Stack s;
        s.push1(1);
        s.push1(3);
        s.push1(4);
        s.push2(6);

        s.pop1();
        s.pop2();



        
    }


