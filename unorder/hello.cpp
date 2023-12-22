// #include <iostream>
// using namespace std;

// int main() {
//     int a = 4;
//     int b = 5;
//     cout << (a&b) << endl;
//     cout << (a|b) << endl;
//     cout << ~a << endl;
//     cout << (a^b) << endl;

    
//     return 0;
// }

# include<iostream>
using namespace std;
int main(){
    int a, prod = 1, sum = 0;
    cin >> a;
    while(a>0){
       int rem = a%10;
       prod = prod*rem;
       sum = sum + rem;
       a/=10;
    }
    cout << prod << endl;
    cout << sum << endl;

    return  0;
}