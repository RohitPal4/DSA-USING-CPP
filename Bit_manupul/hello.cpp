// #include<iostream>
// #include<vector>
// using namespace std;
// int f(int n, vector<int>&dp){
//     if(n<=1) return n;
//     if(dp[n]!=-1) return dp[n];
//     return dp[n]= f(n-1, dp)+f(n-2, dp);
// }

// int main() {
//     int n;
//     cout << "enter your number: ";
//     cin >>  n;
//     vector<int> dp(n+1, -1);
//     for(int i =0; i<=n; i++){
//     int result = f(i, dp);
//     cout  << result <<" ";
        
//     }

//     return 0;
// }

#include<iostream>
#include <algorithm> 
#include<cstring>
using namespace std;
string bina(int n){
    string s = "";

    while(n>0){
    s += (n%2==1 ? "1": "0");
    n /= 2;           
    }
    reverse(s.begin(), s.end());
    return s;
}
string complement(string r){
    string cop = "";
    
    for(char c: r){
        cop += (c==1 ? "0": "1");
    }
    return cop;
    
}

int  setbit(int n, int i){
    return (n |(1<<i));
}

int clearIbit(int n, int i){
    return (n & ~(1<<2));
}

int toggleIbit(int n, int i){
    return (n ^ (1<<i));
}

int removeLsetbit(int n, int i){
    return n & (n-1);

}

// check if a number is power of 2 or not 
bool checkPo2(int n){
    return (n & n-1)==0;
}

// count number of set bits
int NoSbits(int n){
    int count = 0;
    while(n!=0){
        n = n&n-1;
        count ++;
    }
    return count;
}

// count number of flip bits to convert start number to goal number
int cNoFbits(int n, int g){
    
    int ans = n^g;
    int c = 0;
    for(int i =0; i<31; i++){
        if(ans&(1<<i)){
            c++;
        }
    }
    return c;

}
// single bit in 3 3 grouped numbers sin array 

int sNin3g(int arr[], int n){
    for(int i=1; i<n-1; i=i+3){
        if(arr[i]!=arr[i-1]){
            return arr[i-1];
        }
    }
    return arr[n-1];
    
}

int main() {
    int n, i;
    int arr[]= {2, 2, 2, 4, 4, 4, 7};
    cout << "Enter your number: ";
    cin >> n;
    cout << sNin3g(arr, n) << endl;

    
    return 0;
}