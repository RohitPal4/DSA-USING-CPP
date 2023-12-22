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
    cout << "prod" << prod << endl;
    cout << "Sum" << sum << endl;

    return  0;
}