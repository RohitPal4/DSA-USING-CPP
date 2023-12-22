// Peak Index in a Mountain Array
# include<iostream>
using namespace std;
int PeakValue(int arr[], int n){
    int s = 0;
    int e = n - 1;
    int mid = s+(e-s)/2;

    while(s<e){
        if(arr[mid]<arr[mid+1]){
            s = mid +1;
        }
        else{
            e = mid;
        }
        mid = s+(e-s)/2;
    }
    return s;
}
int main() {
    int n;
    cin >> n;
    int arr[100];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << arr[PeakValue(arr, n)] << endl;
    return 0;
}


// # include<iostream>
// # include<algorithm>
// using namespace std;
// int main() {
//     int n;
//     cin >> n;
//     int arr[100];
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }
//     sort(arr, arr+n, greater<int>());
//    cout << arr[0] << endl;      
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;
//     int arr[100];
    
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }

//     int maxElement = arr[0];

//     for (int i = 1; i < n; i++) {
//         if (arr[i] > maxElement) {
//             maxElement = arr[i];
//         }
//     }

//     cout << maxElement << endl;
//     return 0;
// }
