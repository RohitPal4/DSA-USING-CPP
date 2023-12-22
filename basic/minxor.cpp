#include<iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int arr[100];
    int xr=0, mxr, xrem;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        xr = xr^arr[i];
        
    }
    mxr = xr;
    for (int i = 0; i < n; i++) {
            xrem = xr^arr[i];
            mxr = min(mxr, xrem);
    }
    cout << mxr << endl;
    

    
    return 0;
}