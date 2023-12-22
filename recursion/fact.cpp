#include<iostream>
using namespace std;
int factorial(int a){

    // base case 
    if(a==0)
        return 1;
        // recursive relation
        int sp = factorial(a-1);
        int bp = a*sp;

        // processing 
    
    return bp;
}
int main() {
    int n;
    cin >> n;
    int ans = factorial(n);
    cout << "factorial : " << ans << endl;
    return 0;
}