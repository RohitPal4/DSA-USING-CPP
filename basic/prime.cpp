#include<iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    
    if(n<2){
    cout << "no Prime number in given range!"<< endl;
    }
    else{
    for(int i = 2; i<=n; i++){
        bool isPrime = true;
    for(int j = 2; j*j <= i; j++){
        if(i%j==0){
        isPrime = false;
        break;
        }  
    }
    if(isPrime){
            cout << i << " ";
        }

    }
    cout << endl;
    }

    
    return 0;
}

/*
// seive of eratosthenes  algorithm
#include<iostream>
#include<vector>
using namespace std;

   void seive(int n){
    vector<bool> isPrime(n+1, true);
    for(int i = 2; i*i <=n; i++){
        if(isPrime[i]){
            for(int j = i*i; j<= n; j = j+i){
                isPrime[j] = false;
            }
        }
    }
    for(int i = 2; i<=n; i++){
        if(isPrime[i]){
           cout << i <<" " << endl;
        }
    }
   }
   int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << "Prime numbers up to " << n << " are:" << endl;
    seive(n);

    return 0;
}
*/