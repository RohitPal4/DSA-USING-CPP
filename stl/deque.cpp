#include<iostream>
#include<deque>
using namespace std;
int main() {
    deque<int> d;
    d.push_back(2);
    d.push_front(5);
    cout << d.at(1) << endl;// print 2
    

    // d.erase(d.begin()); //  it remove first element
    // d.erase(d.begin()+1); // it remove element at the positon
    for(int i : d){ // It iterates over the elements of the container v
     cout << i << endl;  // print element insteed of indices
    }
    return 0;
}