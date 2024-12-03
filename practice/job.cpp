#include<iostream>
using namespace std;
int main() {
    int n, x;
    cin >> n >> x;
    int jt = (n-1)*x;
    int pt = 10*(n-1);
    int t = pt-jt;
    cout <<(t>0? t: 0)<< endl;
    return 0;
}