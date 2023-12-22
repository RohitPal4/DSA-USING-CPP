#include<iostream>
#include<map>
using namespace std;
int main() {
    map<int, string> m;

    m[2] = "love";
    m[5] = "Aayushi";
    m[1] = "Rohit";
    m.insert({13, "onesided"});

    for(auto i:m){
        cout << i.first<< " " << i.second << endl;
    }

    cout << m.count(13) << endl;

    return 0;
}