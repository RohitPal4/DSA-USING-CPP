#include<iostream>
#include<string>
using namespace std;
string DtoB(int n){
    string s = "";
    while(n!=0){
        // if(n%2==1){
        //     s = "1"+s;

        // }
        // else{
        //     s = "0"+s;       
        //      }
        s = to_string(n%2) + s;
             n/=2;
    }
    return s;

}

// write code for decimal to base 3
string decimalTobase3(int n){
string base3 = "";
while(n>0){
    base3 = to_string(n%3) + base3;
n /=3; 
}
return base3; 
}

// write code for decimal to n base
string DtoNbase(int n, int base){
    string ans = "";
    if(n==0) return "0";
    while(n>0){
        int rem = n%base;
        if(rem<10){
           ans  = to_string(n%base) + ans;
        }
        else{
            ans = to_string('A'+(rem-10)) + ans;
        }
        n /= base;

    }
    return ans;
}


int binaryTodecimal(string s){
    int dec = 0;
    int base = 1;
    int l = s.length();
    for(int i = l-1; i>=0; i--){
        if(s[i]=='1'){
            dec = dec + base;
        }
        base  *= 2;
    }
    return dec;

}
int main() {
    int n, base;
 string s;
// cin >> s;
// cout << binaryTodecimal(s) << endl;
    cin  >> n >> base;
    cout << DtoNbase(n, base) << endl;


    return 0;
}