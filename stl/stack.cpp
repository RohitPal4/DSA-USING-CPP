#include<iostream>
#include<stack>
using namespace std;
int main() {
    stack<string> s;
    s.push("love");
    s.push("aa");
    s.push("Rohit");

    cout << "top element :" << s.top() << endl; // give last element 
     s.pop(); // remove last element 
    cout << "top element :" << s.top() << endl;

    // cout << s.size() << endl; 
    cout << s.empty() << endl;
    
    return 0;
}