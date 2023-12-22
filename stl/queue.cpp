#include<iostream>
#include<queue>

using namespace std;
int main() {
    queue<string> q;

    q.push("aa");
    q.push("love");
    q.push("Rohit");

    cout<< "first element: " << q.front() << endl;
    q.pop();
    cout<< "first element: " << q.front() << endl;
    
    return 0;
}