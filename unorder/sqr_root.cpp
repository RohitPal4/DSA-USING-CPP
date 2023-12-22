// # include<iostream>
// using namespace std;
// long long int sqrRoot(int x){
//     int s =0, e=x;
//    long long int ans =-1, mid;
//     while(s<=e){
//         mid = s+(e-s)/2;
//         long long int sqr = mid*mid;
//         if(sqr==x){
//             return  mid;
//         }
//         else if(sqr<x){
//             ans =mid;
//             s = mid+1;
//         }
//         else if(sqr>mid){
//             e =mid-1;
//         }
//     }
//     return ans;
// }


// int main() {
//     int n;
//     cin >> n;
//     cout << sqrRoot(n) <<endl;
//     return 0;
// }

// sqrt with decimal

# include<iostream>
using namespace std;
long long int sqrtInt(int x){
    int s =0, e=x;
   long long int ans =-1, mid;
    while(s<=e){
        mid = s+(e-s)/2;
        long long int sqr = mid*mid;
        if(sqr==x){
            return  mid;
        }
        else if(sqr<x){
            ans =mid;
            s = mid+1;
        }
        else if(sqr>mid){
            e =mid-1;
        }
    }
    return ans;
}
double morePrecision(int n, int precision, int temp) {
    double factor =1;
    double ans = temp;
    for(int i=0; i<precision; i++){
        factor = factor/10;
        for(double j = ans; j*j<n; j=j+factor){
            ans = j;
        }
    }
    return ans;
}

int main() {
    int n;
    cout << "Enter your number: ";
    cin >> n;
    int temp = sqrtInt(n);
    cout << "Answer: " << morePrecision(n, 3, temp) << endl;
    return 0;
}