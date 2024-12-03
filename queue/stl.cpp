#include<iostream>
#include<queue>
using namespace std;


int main() {
    queue<int> q;
    q.push(4);
    q.push(5);
    q.push(6);
    q.push(7);

    q.pop();
    q.pop();

    while(!q.empty()){
        cout << q.front() << " ";
        q.pop(); 
    }
    return 0;
}