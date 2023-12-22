#include<iostream>
#include<vector>
using namespace std;
int main() {
    vector<int> v;
    // cout << v.capacity() << endl;
    v.push_back(1);
    // cout << v.capacity() << endl;
    v.push_back(3);
    // cout << v.capacity() << endl;
    v.push_back(4);
    v.shrink_to_fit(); // release any extra memory it doesn't need, setting the capacity equal to the size.
    // cout << v.capacity() << endl;

    // cout << v.front() << endl; // return first element
    // cout << v.back() << endl; // retun last element
    vector<int>last(v);  //store  all element of v
    // v.pop_back();  // remove last element but not remove extra memory
    // cout << v.capacity() << endl;
    
    for(int i : v){ // It iterates over the elements of the container v
     cout << i << endl;  // print element insteed of indices
    }
    


    return 0;
}