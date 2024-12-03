#include<iostream>
#include<stack>
using namespace std;
int main() {
    stack<int> s;
    int n;
    cin>> n;
    for(int i =0; i<n; i++){
        int temp;
        cin>> temp;
        s.push(temp);
    }

    while(!s.empty()){
        int num = s.top();
        s.pop();
        cout << num << " ";
    }


    return 0;
}