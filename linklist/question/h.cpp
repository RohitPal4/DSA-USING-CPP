#include<iostream>
using namespace std;
int f(int n){
    if(n==0) return 0;
    int ans =  2*f(n-1);
    return ans;
}
int main() {
    int x;
    cin >> x;
   cout << f(x);

    return 0;
}