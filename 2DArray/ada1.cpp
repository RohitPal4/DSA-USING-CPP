#include<iostream>
#
using namespace std;
int main() {
    int n;
    cin >> n;

    int arr[n];
    for(int i =0; i<n; i++){
        cin >> arr[i];
    }

    cout << "Array values: " << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] <<" ";
    }
int maxn =INT_MIN;
int minn = INT_MAX;
    for (int i = 0; i < n; i++) {
        if(arr[i]>maxn){
            maxn = arr[i];
        }
        if(arr[i]<minn){
            minn = arr[i];
        }
    }

    cout << "max number: " << maxn << endl;
    cout << "min number : "<< minn << endl;
    return 0;
}

// 57
// 136
// 217
// 88