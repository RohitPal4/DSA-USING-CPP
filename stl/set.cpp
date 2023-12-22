//set is an ordered collection of unique elements

#include<iostream>
#include<set>
using namespace std;
int main() {

    set<int> s;

    s.insert(5);
    s.insert(6);
    s.insert(4);
    s.insert(5);
    s.insert(5);
    s.insert(6);
    s.insert(6);

    for(int i:s){
        cout << i << " ";
    }
    cout << endl;
    s.erase(s.begin());

    for(int i:s){
        cout << i << " ";
    }
    cout << endl;
    // checking element present or not , gives answer in boolean value 0 or 1 form 1 true, 0 false

    cout << s.count(5) << endl;

    set<int>::iterator itr = s.find(5);
    
    for(auto it = itr; it!=s.end(); it++){

        cout << *it << " ";
    }
    cout << endl;

    return 0;
}