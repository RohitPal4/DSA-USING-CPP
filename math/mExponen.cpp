// modular exponential
#include<iostream>
using namespace std;

int modularExponential(int base, int exponent, int mod){
    int result = 1;
    base %= mod;

    while(exponent > 0){
        if(exponent & 1){
            result = (result * base) % mod;
        }
        base = (base * base) % mod;
        exponent >>= 1;  // Right shift to divide the exponent by 2
    }
    return (result + mod) % mod;
}

int main() {
    int base, exponent, mod;
    cout << "Enter base, exponent, and modulus: ";
    cin >> base >> exponent >> mod;

    cout << "Result: " << modularExponential(base, exponent, mod) << endl;

    return 0;
}


// peigon hole principle
// catalan number 
// inc- exc principle

//factorial n